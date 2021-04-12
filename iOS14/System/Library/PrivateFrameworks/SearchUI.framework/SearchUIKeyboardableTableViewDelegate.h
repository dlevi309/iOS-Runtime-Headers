/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/


@protocol SearchUIKeyboardableTableViewDelegate <NSObject>
@property (assign,nonatomic) BOOL shouldMonitorScrollingPastBottomOfContent; 
@required
-(BOOL)shouldMonitorScrollingPastBottomOfContent;
-(void)didBeginScrolling;
-(void)didFocusOnCell:(id)arg1;
-(void)setShouldMonitorScrollingPastBottomOfContent:(BOOL)arg1;
-(void)didScrollPastBottomOfContent;

@end

