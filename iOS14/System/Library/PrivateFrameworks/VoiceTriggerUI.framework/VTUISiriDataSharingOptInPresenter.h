/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<VTUISiriDataSharingOptInPresentationDelegate>)presentationDelegate;
-(void)setPresentationDelegate:(id<VTUISiriDataSharingOptInPresentationDelegate>)arg1 ;
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

