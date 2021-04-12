/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDDiagnosticObject.h>

@class HDProfile, NSString, NSLock, NSNumber, HDContributorReference, HDDatabaseValueCache;

@interface HDDataProvenanceManager : NSObject <HDDiagnosticObject> {

	HDProfile* _profile;
	NSString* _localSourceVersion;
	NSLock* _propertyLock;
	NSNumber* _propertyLock_localSourceID;
	NSNumber* _propertyLock_localDeviceID;
	NSNumber* _propertyLock_deviceNoneID;
	HDContributorReference* _propertyLock_noneContributorReference;
	HDContributorReference* _propertyLock_primaryUserContributorReference;
	AB _defaultsLoaded;
	HDDatabaseValueCache* _persistentIDsByProvenanceKey;
	HDDatabaseValueCache* _originProvenanceByPersistentID;
	NSString* _localSystemBuild;
	NSString* _localProductType;

}

@property (nonatomic,retain) HDDatabaseValueCache * persistentIDsByProvenanceKey;                          //@synthesize persistentIDsByProvenanceKey=_persistentIDsByProvenanceKey - In the implementation block
@property (nonatomic,retain) HDDatabaseValueCache * originProvenanceByPersistentID;                        //@synthesize originProvenanceByPersistentID=_originProvenanceByPersistentID - In the implementation block
@property (nonatomic,copy) NSString * localSystemBuild;                                                    //@synthesize localSystemBuild=_localSystemBuild - In the implementation block
@property (nonatomic,copy) NSString * localProductType;                                                    //@synthesize localProductType=_localProductType - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * localSourceID; 
@property (nonatomic,copy,readonly) NSNumber * localDeviceID; 
@property (nonatomic,copy,readonly) NSNumber * deviceNoneID; 
@property (nonatomic,copy,readonly) HDContributorReference * noneContributorReference; 
@property (nonatomic,copy,readonly) HDContributorReference * primaryUserContributorReference; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSNumber *)localDeviceID;
-(void)setPersistentIDsByProvenanceKey:(HDDatabaseValueCache *)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(void)setLocalSourceID:(NSNumber *)arg1 ;
-(NSNumber *)localSourceID;
-(HDDatabaseValueCache *)persistentIDsByProvenanceKey;
-(NSString *)localProductType;
-(HDContributorReference *)primaryUserContributorReference;
-(void)_loadDefaults;
-(id)localDataProvenanceForSourceEntity:(id)arg1 version:(id)arg2 deviceEntity:(id)arg3 ;
-(HDContributorReference *)noneContributorReference;
-(NSString *)description;
-(HDDatabaseValueCache *)originProvenanceByPersistentID;
-(id)diagnosticDescription;
-(id)provenanceEntityForProvenance:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
-(id)_lookupOrInsertProvenance:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
-(void)setNoneContributorReference:(HDContributorReference *)arg1 ;
-(id)defaultLocalDataProvenanceWithDeviceEntity:(id)arg1 ;
-(void)setLocalProductType:(NSString *)arg1 ;
-(void)checkDefaultsLoaded;
-(NSNumber *)deviceNoneID;
-(void)setOriginProvenanceByPersistentID:(HDDatabaseValueCache *)arg1 ;
-(NSString *)localSystemBuild;
-(id)defaultLocalDataProvenance;
-(id)originProvenanceForPersistentID:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
-(id)_localDataProvenanceWithSourceID:(id)arg1 sourceVersion:(id)arg2 deviceID:(id)arg3 contributorReference:(id)arg4 ;
-(void)setDeviceNoneID:(NSNumber *)arg1 ;
-(void)setLocalDeviceID:(NSNumber *)arg1 ;
-(void)setPrimaryUserContributorReference:(HDContributorReference *)arg1 ;
-(id)provenanceEntityForProvenance:(id)arg1 error:(id*)arg2 ;
-(void)setLocalSystemBuild:(NSString *)arg1 ;
-(id)_localTimeZoneName;
@end

