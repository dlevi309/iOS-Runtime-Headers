/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <libobjc.A.dylib/PKPeerPaymentAssociatedAccountSetupDelegate.h>

@protocol PKPassLibraryDataProvider;
@class PKPaymentService, PKPeerPaymentService, PKPeerPaymentAccount, NSArray, PKFamilyMember, NSDictionary, UINavigationController, PKPeerPaymentAssociatedAccountPresentationContext, PKPeerPaymentAssociatedAccountControllerDoneTapHelper, NSString, NSMutableArray;

@interface PKPeerPaymentAssociatedAccountsController : NSObject <PKPeerPaymentAssociatedAccountSetupDelegate> {

	long long _context;
	PKPaymentService* _paymentService;
	PKPeerPaymentService* _peerPaymentService;
	PKPeerPaymentAccount* _account;
	NSArray* _familyMembers;
	PKFamilyMember* _viewer;
	NSDictionary* _altDSIDToImageData;
	UINavigationController* _navigationController;
	PKPeerPaymentAssociatedAccountPresentationContext* _presentationContext;
	PKPeerPaymentAssociatedAccountControllerDoneTapHelper* _doneTapHelper;
	NSString* _viewerFamilyMemberTypeAnalyticsKey;
	id<PKPassLibraryDataProvider> _passLibraryDataProvider;
	BOOL _didBeginReporter;
	BOOL _fetchingFamilyMembers;
	NSMutableArray* _familyCircleCompletionHandlers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFamilyMembers:(id)arg1 altDSIDToImageData:(id)arg2 ;
-(id)initWithPKFamilyMembers:(id)arg1 altDSIDToImageData:(id)arg2 passLibraryDataProvider:(id)arg3 ;
-(void)_peerPaymentAccountChanged:(id)arg1 ;
-(id)initWithFamilyMembers:(id)arg1 ;
-(void)addPeerPaymentAssociatedAccountSetupCompletedWithSucess:(BOOL)arg1 updatedAccount:(id)arg2 forFamilyMember:(id)arg3 ;
-(void)addPeerPaymentAssociatedAccountDidSkipSetupForFamilyMember:(id)arg1 ;
-(id)initWithPKFamilyMembers:(id)arg1 altDSIDToImageData:(id)arg2 passLibraryDataProvider:(id)arg3 context:(long long)arg4 ;
-(void)_updateFamilyMembersWithMembers:(id)arg1 ;
-(void)_fetchFamilyMembersIfNeccessaryWithCompletion:(/*^block*/id)arg1 ;
-(void)_begingReportingIfNecessary;
-(void)_endReportingSessionIfNecessary;
-(void)presentAssociatedAccountsFlowWithPresentationContext:(id)arg1 fromNavigationController:(id)arg2 ;
-(void)_callFamilyCircleCompletions;
-(void)presentSetupFlowForFAFamilyMember:(id)arg1 fromNavigationController:(id)arg2 ;
@end

