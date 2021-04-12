/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/


@protocol SearchUIKeyboardableTableViewScrollDelegate <NSObject>
@property (assign,nonatomic) BOOL shouldMonitorScrollingPastBottomOfContent; 
@required
-(void)didScrollPastBottomOfContent;
-(BOOL)shouldMonitorScrollingPastBottomOfContent;
-(void)didBeginScrolling;
-(void)setShouldMonitorScrollingPastBottomOfContent:(BOOL)arg1;

@end

