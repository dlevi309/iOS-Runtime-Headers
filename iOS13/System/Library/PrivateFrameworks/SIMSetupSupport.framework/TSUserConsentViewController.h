/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)canBeShownFromSuspendedState;
-(void)_cancelButtonTapped;
-(unsigned long long)userConsentResponse;
-(void)setUserConsentResponse:(unsigned long long)arg1 ;
-(void)_acceptButtonTapped;
-(void)_declineButtonTapped;
-(void)_setNavigationItems;
-(id)initWithConsentType:(unsigned long long)arg1 name:(id)arg2 ;
@end

