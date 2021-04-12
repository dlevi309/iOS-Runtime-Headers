/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/

#import <ShareSheet/UIActivity.h>
#import <UIKit/UIManagedConfigurationRestrictableActivity.h>
#import <UIKit/UIPrintInteractionControllerActivityDelegate.h>

@class NSString, UIViewController, UIPrintInteractionController, UIWindow;

@interface UIPrintActivity : UIActivity <UIManagedConfigurationRestrictableActivity, UIPrintInteractionControllerActivityDelegate> {

	BOOL _isContentManaged;
	NSString* _sourceApplicationBundleID;
	UIViewController* _wrapperViewController;
	UIPrintInteractionController* _printInteractionController;
	UIWindow* _windowHoldingActivityViewController;

}

@property (retain) UIViewController * wrapperViewController;                                         //@synthesize wrapperViewController=_wrapperViewController - In the implementation block
@property (nonatomic,retain) UIPrintInteractionController * printInteractionController;              //@synthesize printInteractionController=_printInteractionController - In the implementation block
@property (retain) UIWindow * windowHoldingActivityViewController;                                   //@synthesize windowHoldingActivityViewController=_windowHoldingActivityViewController - In the implementation block
@property (assign,nonatomic) BOOL isContentManaged;                                                  //@synthesize isContentManaged=_isContentManaged - In the implementation block
@property (nonatomic,copy) NSString * sourceApplicationBundleID;                                     //@synthesize sourceApplicationBundleID=_sourceApplicationBundleID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)_xpcAttributes;
-(id)activityType;
-(BOOL)isContentManaged;
-(void)setIsContentManaged:(BOOL)arg1 ;
-(id)printInteractionControllerParentViewController:(id)arg1 ;
-(id)printInteractionControllerWindowForPresentation:(id)arg1 ;
-(NSString *)sourceApplicationBundleID;
-(void)setSourceApplicationBundleID:(NSString *)arg1 ;
-(id)_systemImageName;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)prepareWithActivityItems:(id)arg1 ;
-(void)activityDidFinish:(BOOL)arg1 ;
-(void)performActivity;
-(id)_embeddedActivityViewController;
-(void)setWindowHoldingActivityViewController:(UIWindow *)arg1 ;
-(UIPrintInteractionController *)printInteractionController;
-(void)setPrintInteractionController:(UIPrintInteractionController *)arg1 ;
-(void)setWrapperViewController:(UIViewController *)arg1 ;
-(UIWindow *)windowHoldingActivityViewController;
-(void)cancelPrintOptions;
-(UIViewController *)wrapperViewController;
@end

