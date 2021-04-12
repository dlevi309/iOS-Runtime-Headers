/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <libobjc.A.dylib/MFMailComposeViewControllerDelegate.h>
#import <libobjc.A.dylib/SUOverlayBackgroundDelegate.h>

@class SUClientInterface, SUOverlayBackgroundViewController, SUPreviewOverlayViewController, UITabBarController, NSString;

@interface SULegacyClientBridge : NSObject <MFMailComposeViewControllerDelegate, SUOverlayBackgroundDelegate> {

	SUClientInterface* _clientInterface;
	SUOverlayBackgroundViewController* _overlayBackgroundViewController;
	SUPreviewOverlayViewController* _previewOverlayViewController;
	UITabBarController* _rootViewController;

}

@property (nonatomic,readonly) SUClientInterface * clientInterface;                                              //@synthesize clientInterface=_clientInterface - In the implementation block
@property (nonatomic,retain) UITabBarController * rootViewController;                                            //@synthesize rootViewController=_rootViewController - In the implementation block
@property (nonatomic,readonly) SUOverlayBackgroundViewController * overlayBackgroundViewController;              //@synthesize overlayBackgroundViewController=_overlayBackgroundViewController - In the implementation block
@property (nonatomic,readonly) SUPreviewOverlayViewController * previewOverlayViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setRootViewController:(UITabBarController *)arg1 ;
-(UITabBarController *)rootViewController;
-(SUClientInterface *)clientInterface;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3 ;
-(void)_showPreviewOverlayAnimated:(BOOL)arg1 ;
-(id)initWithClientInterface:(id)arg1 ;
-(SUOverlayBackgroundViewController *)overlayBackgroundViewController;
-(BOOL)presentOverlayBackgroundViewController:(id)arg1 ;
-(void)scriptOverlayBackgroundDidDismiss:(id)arg1 ;
-(void)dismissOverlayBackgroundViewController;
-(id)_previewOverlayViewController;
-(void)composeEmailWithSubject:(id)arg1 body:(id)arg2 ;
-(BOOL)enterAccountFlowWithViewController:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)composeReviewWithViewController:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)performActionForDialog:(id)arg1 button:(id)arg2 ;
-(void)_removePreviewOverlayViewController;
-(void)hidePreviewOverlayAnimated:(BOOL)arg1 ;
-(SUPreviewOverlayViewController *)previewOverlayViewController;
-(void)showPreviewOverlayAnimated:(BOOL)arg1 ;
@end

