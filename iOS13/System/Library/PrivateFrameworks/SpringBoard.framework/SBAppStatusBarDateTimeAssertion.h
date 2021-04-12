/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <BaseBoard/BSSimpleAssertion.h>

@class UIStatusBar;

@interface SBAppStatusBarDateTimeAssertion : BSSimpleAssertion {

	BOOL _dateTimeHidden;
	UIStatusBar* _statusBar;

}

@property (nonatomic,retain) UIStatusBar * statusBar;                                  //@synthesize statusBar=_statusBar - In the implementation block
@property (assign,getter=isDateTimeHidden,nonatomic) BOOL dateTimeHidden;              //@synthesize dateTimeHidden=_dateTimeHidden - In the implementation block
-(UIStatusBar *)statusBar;
-(void)setStatusBar:(UIStatusBar *)arg1 ;
-(id)initWithIdentifier:(id)arg1 forReason:(id)arg2 ;
-(void)setDateTimeHidden:(BOOL)arg1 ;
-(BOOL)isDateTimeHidden;
@end

