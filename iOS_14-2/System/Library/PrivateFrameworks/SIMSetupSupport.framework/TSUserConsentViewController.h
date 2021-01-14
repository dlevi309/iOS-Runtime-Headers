/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
*/

#import <OnBoardingKit/OBWelcomeController.h>
#import <libobjc.A.dylib/TSSetupFlowItem.h>

@protocol TSSIMSetupFlowDelegate;
@class NSString;

@interface TSUserConsentViewController : OBWelcomeController <TSSetupFlowItem> {

	unsigned long long _consentType;
	unsigned long long _userConsentResponse;
	id<TSSIMSetupFlowDelegate> _delegate;

}

@property (assign,nonatomic) unsigned long long userConsentResponse;              //@synthesize userConsentResponse=_userConsentResponse - In the implementation block
@property (__weak) id<TSSIMSetupFlowDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
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
-(unsigned long long)userConsentResponse;
-(void)setUserConsentResponse:(unsigned long long)arg1 ;
-(id)initWithConsentType:(unsigned long long)arg1 name:(id)arg2 ;
-(void)_acceptButtonTapped;
-(void)_declineButtonTapped;
-(void)_setNavigationItems;
@end

