/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
*/


@protocol FASharedSubscriptionSpecifierProviderDelegeate;
@class PSListController, PSSpecifier, ACAccount, FASharedServicesResponse, NSOperationQueue, NSArray;

@interface FASharedSubscriptionSpecifierProvider : NSObject {

	PSListController* _presenter;
	PSSpecifier* _spinnerCell;
	ACAccount* _appleAccount;
	FASharedServicesResponse* _sharedSubscriptionResponse;
	BOOL _updateSubsriptionSpecifiers;
	BOOL _isLoadingSpecifiers;
	NSOperationQueue* _networkActivityQueue;
	NSArray* _specifiers;
	id<FASharedSubscriptionSpecifierProviderDelegeate> _delegate;

}

@property (assign,nonatomic,__weak) id<FASharedSubscriptionSpecifierProviderDelegeate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * specifiers;                                                              //@synthesize specifiers=_specifiers - In the implementation block
-(id<FASharedSubscriptionSpecifierProviderDelegeate>)delegate;
-(void)setDelegate:(id<FASharedSubscriptionSpecifierProviderDelegeate>)arg1 ;
-(NSArray *)specifiers;
-(void)reloadSpecifiers;
-(void)setSpecifiers:(NSArray *)arg1 ;
-(id)initWithAppleAccount:(id)arg1 presenter:(id)arg2 ;
-(id)_sharedSubscriptionGroupSpecifier;
-(void)_loadSubscriptionServices;
-(id)_valueForServiceSpecifier:(id)arg1 ;
-(id)_iconURLStringForService:(id)arg1 ;
-(void)_serviceSpecifierWasTapped:(id)arg1 ;
-(void)_handleSubscriptionListResponse:(id)arg1 ;
@end

