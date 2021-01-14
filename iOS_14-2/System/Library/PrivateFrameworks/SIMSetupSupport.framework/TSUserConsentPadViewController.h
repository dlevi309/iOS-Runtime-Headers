/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
*/

#import <SetupAssistantUI/BFFSplashController.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <libobjc.A.dylib/TSSetupFlowItem.h>

@protocol TSSIMSetupFlowDelegate;
@class NSString;

@interface TSUserConsentPadViewController : BFFSplashController <UINavigationControllerDelegate, TSSetupFlowItem> {

	BOOL _didReceiveResponse;
	NSString* _confirmationCode;
	unsigned long long _consentType;
	BOOL _requireAdditionalConsent;
	id<TSSIMSetupFlowDelegate> _delegate;

}

@property (nonatomic,readonly) unsigned long long consentType;              //@synthesize consentType=_consentType - In the implementation block
@property (__weak) id<TSSIMSetupFlowDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)calculateTitleAndDetailsWithName:(id)arg1 consentType:(unsigned long long)arg2 title:(id*)arg3 details:(id*)arg4 ;
-(id<TSSIMSetupFlowDelegate>)delegate;
-(void)setDelegate:(id<TSSIMSetupFlowDelegate>)arg1 ;
-(void)viewDidLoad;
-(void)_cancelButtonTapped;
-(BOOL)canBeShownFromSuspendedState;
-(id)initWithName:(id)arg1 consentType:(unsigned long long)arg2 requireAdditionalConsent:(BOOL)arg3 ;
-(id)initWithConfirmationCode:(id)arg1 consentType:(unsigned long long)arg2 requireAdditionalConsent:(BOOL)arg3 confirmationCode:(id)arg4 ;
-(unsigned long long)consentType;
-(void)_acceptButtonTapped;
-(void)_declineButtonTapped;
-(void)_setNavigationItems;
@end

