/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class UIStatusBar, NSString;

@interface SBStatusBarContainer : NSObject {

	UIStatusBar* _statusBar;
	NSString* _reason;

}

@property (assign,nonatomic,__weak) UIStatusBar * statusBar;              //@synthesize statusBar=_statusBar - In the implementation block
@property (nonatomic,retain) NSString * reason;                           //@synthesize reason=_reason - In the implementation block
-(void)setStatusBar:(UIStatusBar *)arg1 ;
-(UIStatusBar *)statusBar;
-(id)description;
-(NSString *)reason;
-(void)setReason:(NSString *)arg1 ;
-(void)dealloc;
@end

