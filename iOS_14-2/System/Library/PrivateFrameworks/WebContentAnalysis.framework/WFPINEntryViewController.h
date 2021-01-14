/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WFPINEntryViewControllerProtocol.h>

@class _UIFallbackPresentationViewController, NSArray, UIViewController, WFRemotePINEntryViewController, NSURL, NSString;

@interface WFPINEntryViewController : UIViewController <WFPINEntryViewControllerProtocol> {

	_UIFallbackPresentationViewController* _fallbackPresentationVC;
	NSArray* _windowsWithDisabledRotation;
	UIViewController* _rootViewControllerToUse;
	WFRemotePINEntryViewController* _remoteViewController;
	NSURL* _URL;
	NSString* _pageTitle;
	/*^block*/id _completion;
	/*^block*/id _dismissCompletionHandler;

}

@property (nonatomic,copy) id dismissCompletionHandler;              //@synthesize dismissCompletionHandler=_dismissCompletionHandler - In the implementation block
+(Class)remoteViewControllerClass;
+(id)serviceViewControllerClassName;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(id)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)userDidCancel;
-(BOOL)shouldAutorotate;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)dismissCompletionHandler;
-(void)setDismissCompletionHandler:(id)arg1 ;
-(unsigned long long)_supportedInterfaceOrientationsForRootViewController;
-(void)dealloc;
-(void)userEnteredCorrectPIN;
-(void)insertRemoteViewController:(id)arg1 ;
-(BOOL)hasUIWebViewSubView:(id)arg1 ;
-(id)initWithURL:(id)arg1 pageTitle:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)presentViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
@end

