/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)accountIdentifier;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(void)setClientIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)clientIdentifier;
-(CKContainer *)ckContainer;
-(void)setupCloudContainerWithGroup:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSDate *)lastRegistrationUpdate;
-(MSPCloudClientRegistrationRecord *)clientRecord;
-(void)setClientRecord:(MSPCloudClientRegistrationRecord *)arg1 ;
-(void)setLastRegistrationUpdate:(NSDate *)arg1 ;
-(void)pushClientRegistrationRecord:(id)arg1 group:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSDate *)lastRegistrationFetch;
-(void)setLastRegistrationFetch:(NSDate *)arg1 ;
-(void)fetchClientRegistrationRecordsCreatingZoneIfNecessaryWithGroup:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchAccountIdentifierWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchClientRegistrationRecordsWithGroup:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSArray *)otherClientRecords;
-(id)initWithAccountIdentifier:(id)arg1 clientIdentifier:(id)arg2 ;
-(void)updateClientRegistrationRecordWithGroup:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)checkClientCompatibilityWithGroup:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeCloudRegistrationContainerWithGroup:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setOtherClientRecords:(NSArray *)arg1 ;
-(unsigned long long)maxEarliestCompatibleEpoch;
-(void)setMaxEarliestCompatibleEpoch:(unsigned long long)arg1 ;
@end

