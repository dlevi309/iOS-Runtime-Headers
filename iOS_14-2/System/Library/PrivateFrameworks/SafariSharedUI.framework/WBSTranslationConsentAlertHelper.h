/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <UIKit/UIAdaptivePresentationControllerDelegate.h>

@protocol WBSTranslationConsentAlertHelperDelegate;
@class UIViewController, NSString;

@interface WBSTranslationConsentAlertHelper : NSObject <UIAdaptivePresentationControllerDelegate> {

	UIViewController* _currentlyPresentedViewController;
	/*^block*/id _consentCompletionHandler;
	id<WBSTranslationConsentAlertHelperDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WBSTranslationConsentAlertHelperDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<WBSTranslationConsentAlertHelperDelegate>)delegate;
-(void)setDelegate:(id<WBSTranslationConsentAlertHelperDelegate>)arg1 ;
-(id)consentAlertForType:(unsigned long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)presentationControllerDidDismiss:(id)arg1 ;
-(void)_notNow:(id)arg1 ;
-(void)_callCompletionHandlerIfNeededWithConsent:(BOOL)arg1 ;
-(void)_enableTranslation:(id)arg1 ;
@end

