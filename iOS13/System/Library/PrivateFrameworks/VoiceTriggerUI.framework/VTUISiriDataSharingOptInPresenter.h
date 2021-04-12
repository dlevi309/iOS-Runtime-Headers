/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
*/

#import <VoiceTriggerUI/VoiceTriggerUI-Structs.h>
#import <libobjc.A.dylib/VTUISiriDataSharingOptInViewControllerDelegate.h>

@protocol OS_dispatch_queue, VTUISiriDataSharingOptInPresentationDelegate;
@class AFSettingsConnection, NSObject, VTUISiriDataSharingOptInViewController, VTUIProximityDataSharingOptInView;

@interface VTUISiriDataSharingOptInPresenter : NSObject <VTUISiriDataSharingOptInViewControllerDelegate> {

	AFSettingsConnection* _settings;
	NSObject*<OS_dispatch_queue> _settingsQueue;
	long long _dataSharingOptInStatus;
	VTUISiriDataSharingOptInViewController* _currentWelcomeController;
	VTUIProximityDataSharingOptInView* _currentProxView;
	id<VTUISiriDataSharingOptInPresentationDelegate> _presentationDelegate;

}

@property (assign,nonatomic,__weak) id<VTUISiriDataSharingOptInPresentationDelegate> presentationDelegate;              //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
+(BOOL)siriDataSharingOptInViewFeatureFlagEnabled;
-(id)init;
-(void)setPresentationDelegate:(id<VTUISiriDataSharingOptInPresentationDelegate>)arg1 ;
-(id<VTUISiriDataSharingOptInPresentationDelegate>)presentationDelegate;
-(void)_requestDismissal;
-(BOOL)shouldShowSiriDataSharingOptInView;
-(id)dataSharingOptInTextWelcomeControllerForViewStyle:(long long)arg1 ;
-(void)tearDownPresentedViews;
-(id)dataSharingOptInViewForFrame:(CGRect)arg1 viewStyle:(long long)arg2 ;
-(void)_fetchSiriDataSharingEnabled;
-(id)_modalViewControllerForViewStyle:(long long)arg1 ;
-(id)_proximityViewForFrame:(CGRect)arg1 ;
-(void)_userTappedDetailLinkText;
-(void)_userTappedOptInToDataSharing;
-(void)_userTappedOptOutOfDataSharing;
-(void)_userTappedDismissButtonFromProxCard;
-(void)_setSiriDataSharingStatus:(long long)arg1 forceDismissal:(BOOL)arg2 ;
-(void)didDismissFromViewController:(id)arg1 ;
@end

