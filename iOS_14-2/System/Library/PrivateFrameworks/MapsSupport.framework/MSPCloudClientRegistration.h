/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/


@class NSString, NSUUID, MSPCloudClientRegistrationRecord, NSArray, NSDate, CKContainer;

@interface MSPCloudClientRegistration : NSObject {

	NSString* _accountIdentifier;
	NSUUID* _clientIdentifier;
	MSPCloudClientRegistrationRecord* _clientRecord;
	NSArray* _otherClientRecords;
	unsigned long long _maxEarliestCompatibleEpoch;
	NSDate* _lastRegistrationUpdate;
	NSDate* _lastRegistrationFetch;

}

@property (nonatomic,retain) MSPCloudClientRegistrationRecord * clientRecord;              //@synthesize clientRecord=_clientRecord - In the implementation block
@property (nonatomic,retain) NSArray * otherClientRecords;                                 //@synthesize otherClientRecords=_otherClientRecords - In the implementation block
@property (assign,nonatomic) unsigned long long maxEarliestCompatibleEpoch;                //@synthesize maxEarliestCompatibleEpoch=_maxEarliestCompatibleEpoch - In the implementation block
@property (nonatomic,readonly) CKContainer * ckContainer; 
@property (nonatomic,retain) NSDate * lastRegistrationUpdate;                              //@synthesize lastRegistrationUpdate=_lastRegistrationUpdate - In the implementation block
@property (nonatomic,retain) NSDate * lastRegistrationFetch;                               //@synthesize lastRegistrationFetch=_lastRegistrationFetch - In the implementation block
@property (nonatomic,retain) NSString * accountIdentifier;                                 //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,retain) NSUUID * clientIdentifier;                                    //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
+(id)zoneID;
-(void)setOtherClientRecords:(NSArray *)arg1 ;
-(void)setClientIdentifier:(NSUUID *)arg1 ;
-(void)fetchClientRegistrationRecordsCreatingZoneIfNecessaryWithGroup:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchClientRegistrationRecordsWithGroup:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeCloudRegistrationContainerWithGroup:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setLastRegistrationFetch:(NSDate *)arg1 ;
-(NSString *)accountIdentifier;
-(id)initWithAccountIdentifier:(id)arg1 clientIdentifier:(id)arg2 ;
-(void)setupCloudContainerWithGroup:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setMaxEarliestCompatibleEpoch:(unsigned long long)arg1 ;
-(CKContainer *)ckContainer;
-(unsigned long long)maxEarliestCompatibleEpoch;
-(NSDate *)lastRegistrationUpdate;
-(NSDate *)lastRegistrationFetch;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(MSPCloudClientRegistrationRecord *)clientRecord;
-(void)pushClientRegistrationRecord:(id)arg1 group:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSArray *)otherClientRecords;
-(void)setLastRegistrationUpdate:(NSDate *)arg1 ;
-(void)setClientRecord:(MSPCloudClientRegistrationRecord *)arg1 ;
-(NSUUID *)clientIdentifier;
-(void)checkClientCompatibilityWithGroup:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchAccountIdentifierWithCompletion:(/*^block*/id)arg1 ;
-(void)updateClientRegistrationRecordWithGroup:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

