/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
*/


@protocol FASharedSubscriptionSpecifierProviderDelegeate;
@class PSListController, PSSpecifier, ACAccount, FASharedServicesResponse, NSOperationQueue, NSDictionary, NSArray;

@interface FASharedSubscriptionSpecifierProvider : NSObject {

	PSListController* _presenter;
	PSSpecifier* _spinnerCell;
	ACAccount* _appleAccount;
	FASharedServicesResponse* _sharedSubscriptionResponse;
	BOOL _updateSubsriptionSpecifiers;
	BOOL _isLoadingSpecifiers;
	NSOperationQueue* _networkActivityQueue;
	NSDictionary* _cachedResourceDictionary;
	unsigned long long _specifierState;
	NSArray* _specifiers;
	id<FASharedSubscriptionSpecifierProviderDelegeate> _delegate;

}

@property (assign,nonatomic,__weak) id<FASharedSubscriptionSpecifierProviderDelegeate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * specifiers;                                                              //@synthesize specifiers=_specifiers - In the implementation block
-(NSArray *)specifiers;
-(id<FASharedSubscriptionSpecifierProviderDelegeate>)delegate;
-(void)reloadSpecifiers;
-(void)setDelegate:(id<FASharedSubscriptionSpecifierProviderDelegeate>)arg1 ;
-(void)handleURL:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setSpecifiers:(NSArray *)arg1 ;
-(id)initWithAppleAccount:(id)arg1 presenter:(id)arg2 ;
-(id)_sharedSubscriptionGroupSpecifier;
-(void)_loadSubscriptionServices;
-(id)_serviceSpecifiersFromArray:(id)arg1 ;
-(id)_valueForServiceSpecifier:(id)arg1 ;
-(id)_iconURLStringForService:(id)arg1 ;
-(void)_serviceSpecifierWasTapped:(id)arg1 ;
-(void)_handleSubscriptionListResponse:(id)arg1 ;
-(void)_delayedLoadIfNeeded;
-(BOOL)_launchWithResourceDictionary:(id)arg1 ;
-(id)_specifierNamed:(id)arg1 ;
@end

