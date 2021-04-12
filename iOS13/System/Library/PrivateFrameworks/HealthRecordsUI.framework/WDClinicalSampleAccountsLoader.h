/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/


@class HRProfile, NSArray;

@interface WDClinicalSampleAccountsLoader : NSObject {

	HRProfile* _profile;
	NSArray* _accountDataBatches;
	NSArray* _cachedAccounts;

}

@property (nonatomic,copy) NSArray * cachedAccounts;                  //@synthesize cachedAccounts=_cachedAccounts - In the implementation block
@property (nonatomic,retain) HRProfile * profile;                     //@synthesize profile=_profile - In the implementation block
@property (nonatomic,copy) NSArray * accountDataBatches;              //@synthesize accountDataBatches=_accountDataBatches - In the implementation block
+(id)appleProviderBrand;
+(id)knownAccountFiles;
-(HRProfile *)profile;
-(void)setProfile:(HRProfile *)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(NSArray *)cachedAccounts;
-(void)setCachedAccounts:(NSArray *)arg1 ;
-(id)sampleAccountsAsSearchResults;
-(id)_sampleAccountForGatewayWithExternalID:(id)arg1 error:(id*)arg2 ;
-(void)_createAccountAndTriggerIngestForDataBatch:(id)arg1 account:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_triggerIngestOfDataBatch:(id)arg1 accountIdentifier:(id)arg2 error:(id*)arg3 ;
-(id)_createTemporaryFileForDataBatch:(id)arg1 error:(id*)arg2 ;
-(id)_providerForAccount:(id)arg1 ;
-(id)_gatewayForAccount:(id)arg1 ;
-(id)_parseAccounts;
-(void)loadFirstSampleAccountDataBatchForGatewayWithExternalID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)providerForSampleDataSearchResultWithExternalID:(id)arg1 error:(id*)arg2 ;
-(NSArray *)accountDataBatches;
-(void)setAccountDataBatches:(NSArray *)arg1 ;
@end

