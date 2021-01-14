/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKPeerPaymentAddAssociatedAccountViewController.h>
#import <libobjc.A.dylib/PKPeerPaymentAssociatedAccountSetupDelegate.h>
#import <libobjc.A.dylib/PKSetupAssistantStep.h>

@protocol PKSetupAssistantPeerPaymentAddAssociatedAccountDelegate;
@class NSString;

@interface PKSetupAssistantPeerPaymentAddAssociatedAccountViewController : PKPeerPaymentAddAssociatedAccountViewController <PKPeerPaymentAssociatedAccountSetupDelegate, PKSetupAssistantStep> {

	id<PKSetupAssistantPeerPaymentAddAssociatedAccountDelegate> _setupAssistantDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)setupAssistantNeedsToRun;
+(BOOL)setupAssistantNeedsToRunReturningRequirements:(unsigned long long*)arg1 ;
+(BOOL)bridgeSetupAssistantNeedsToRunWithContext:(id)arg1 returningRequirements:(unsigned long long*)arg2 ;
+(id)defaultWebServiceForContext:(long long)arg1 ;
+(BOOL)bridgeSetupAssistantNeedsToRunReturningRequirements:(unsigned long long*)arg1 ;
-(void)preflightWithCompletion:(/*^block*/id)arg1 ;
-(void)addPeerPaymentAssociatedAccountSetupCompletedWithSucess:(BOOL)arg1 updatedAccount:(id)arg2 forFamilyMember:(id)arg3 ;
-(void)addPeerPaymentAssociatedAccountDidSkipSetupForFamilyMember:(id)arg1 ;
-(id)initWithPairingFamilyMember:(id)arg1 parentFamilyMember:(id)arg2 webService:(id)arg3 passLibraryDataProvider:(id)arg4 delegate:(id)arg5 context:(long long)arg6 ;
-(id)initWithPairingFamilyMember:(id)arg1 parentFamilyMember:(id)arg2 webService:(id)arg3 delegate:(id)arg4 context:(long long)arg5 ;
@end

