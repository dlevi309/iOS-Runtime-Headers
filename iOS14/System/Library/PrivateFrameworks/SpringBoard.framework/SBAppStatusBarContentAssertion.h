/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <BaseBoard/BSSimpleAssertion.h>

@class UIStatusBar;

@interface SBAppStatusBarContentAssertion : BSSimpleAssertion {

	UIStatusBar* _statusBar;

}

@property (nonatomic,retain) UIStatusBar * statusBar;              //@synthesize statusBar=_statusBar - In the implementation block
-(void)setStatusBar:(UIStatusBar *)arg1 ;
-(UIStatusBar *)statusBar;
-(id)initWithIdentifier:(id)arg1 forReason:(id)arg2 ;
-(void)hideStatusBarPartLeading:(BOOL)arg1 ;
@end

