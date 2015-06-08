//
//  WYButtonChooseViewController.h
//  WYButtonChooseView
//
//  Created by dai.fengyi on 15/6/3.
//  Copyright (c) 2015年 childrenOurFuture. All rights reserved.
//

#import <UIKit/UIKit.h>
@protocol WYTopicSelectionDelegate <NSObject>
- (void)topicArrayDidChange:(NSArray *)topicArray;
@end
@interface WYButtonChooseViewController : UIViewController
@property (weak, nonatomic) id<WYTopicSelectionDelegate> topicDelegate;
@property (strong, nonatomic) NSMutableArray *selectedArray;//装字典
@property (strong, nonatomic) NSMutableArray *unSelectedArray;//装字典


- (void)showInView:(UIView *)view;
@end