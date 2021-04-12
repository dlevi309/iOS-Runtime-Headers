/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <UIKitCore/UIViewController.h>

@class UITextView, SBMainScreenActiveInterfaceOrientationWindow;

@interface SBLogWindowController : UIViewController {

	UITextView* _logTextView;
	SBMainScreenActiveInterfaceOrientationWindow* _logWindow;

}

@property (nonatomic,retain) SBMainScreenActiveInterfaceOrientationWindow * logWindow;              //@synthesize logWindow=_logWindow - In the implementation block
@property (nonatomic,retain) UITextView * logTextView;                                              //@synthesize logTextView=_logTextView - In the implementation block
+(id)sharedInstance;
+(id)sharedInstanceIfAvailable;
-(void)show;
-(void)hide;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(UITextView *)logTextView;
-(void)setLogTextView:(UITextView *)arg1 ;
-(SBMainScreenActiveInterfaceOrientationWindow *)logWindow;
-(void)setLogWindow:(SBMainScreenActiveInterfaceOrientationWindow *)arg1 ;
@end

