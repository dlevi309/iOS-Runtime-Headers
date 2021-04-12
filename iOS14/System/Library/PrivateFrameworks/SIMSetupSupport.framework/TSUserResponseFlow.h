/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
*/

#import <SIMSetupSupport/TSSIMSetupFlow.h>
#import <libobjc.A.dylib/TSSIMSetupFlowDelegate.h>

@class NSString, UIBarButtonItem;

@interface TSUserResponseFlow : TSSIMSetupFlow <TSSIMSetupFlowDelegate> {

	BOOL _confirmationCodeRequired;
	NSString* _confirmationCode;
	UIBarButtonItem* _cancelButton;
	unsigned long long _userConsentType;

}

@property (assign) unsigned long long userConsentType;              //@synthesize userConsentType=_userConsentType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)firstViewController;
-(void)viewControllerDidComplete:(id)arg1 ;
-(void)setDefaultNavigationItems:(id)arg1 ;
-(id)initWithConfirmationCodeRequired:(BOOL)arg1 ;
-(id)nextViewControllerFrom:(id)arg1 ;
-(void)firstViewController:(/*^block*/id)arg1 ;
-(unsigned long long)userConsentType;
-(void)setUserConsentType:(unsigned long long)arg1 ;
@end

