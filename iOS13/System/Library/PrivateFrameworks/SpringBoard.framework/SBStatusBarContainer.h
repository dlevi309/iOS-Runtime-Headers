/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class UIStatusBar, NSString;

@interface SBStatusBarContainer : NSObject {

	UIStatusBar* _statusBar;
	NSString* _reason;

}

@property (assign,nonatomic,__weak) UIStatusBar * statusBar;              //@synthesize statusBar=_statusBar - In the implementation block
@property (nonatomic,retain) NSString * reason;                           //@synthesize reason=_reason - In the implementation block
-(void)dealloc;
-(id)description;
-(NSString *)reason;
-(void)setReason:(NSString *)arg1 ;
-(UIStatusBar *)statusBar;
-(void)setStatusBar:(UIStatusBar *)arg1 ;
@end

