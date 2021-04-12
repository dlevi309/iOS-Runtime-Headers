/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDDiagnosticObject.h>

@class HDProfile, NSString, NSLock, NSNumber, HDDatabaseValueCache;

@interface HDDataProvenanceManager : NSObject <HDDiagnosticObject> {

	HDProfile* _profile;
	NSString* _localSourceVersion;
	NSLock* _propertyLock;
	NSNumber* _propertyLock_localSourceID;
	NSNumber* _propertyLock_localDeviceID;
	NSNumber* _propertyLock_deviceNoneID;
	AB _defaultsLoaded;
	HDDatabaseValueCache* _persistentIDsByProvenanceKey;
	HDDatabaseValueCache* _originProvenanceByPersistentID;
	NSString* _localSystemBuild;
	NSString* _localProductType;

}

@property (nonatomic,retain) HDDatabaseValueCache * persistentIDsByProvenanceKey;                //@synthesize persistentIDsByProvenanceKey=_persistentIDsByProvenanceKey - In the implementation block
@property (nonatomic,retain) HDDatabaseValueCache * originProvenanceByPersistentID;              //@synthesize originProvenanceByPersistentID=_originProvenanceByPersistentID - In the implementation block
@property (nonatomic,copy) NSString * localSystemBuild;                                          //@synthesize localSystemBuild=_localSystemBuild - In the implementation block
@property (nonatomic,copy) NSString * localProductType;                                          //@synthesize localProductType=_localProductType - In the implementation block
@property (nonatomic,readonly) NSNumber * localSourceID; 
@property (nonatomic,readonly) NSNumber * localDeviceID; 
@property (nonatomic,readonly) NSNumber * deviceNoneID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)initWithProfile:(id)arg1 ;
-(NSNumber *)localDeviceID;
-(void)setLocalDeviceID:(NSNumber *)arg1 ;
-(void)_loadDefaults;
-(id)diagnosticDescription;
-(id)localDataProvenanceForSourceEntity:(id)arg1 version:(id)arg2 deviceEntity:(id)arg3 ;
-(id)defaultLocalDataProvenance;
-(id)originProvenanceForPersistentID:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
-(id)provenanceEntityForProvenance:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
-(id)_lookupOrInsertProvenance:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
-(NSNumber *)deviceNoneID;
-(NSString *)localProductType;
-(NSString *)localSystemBuild;
-(id)_localDataProvenanceWithSourceID:(id)arg1 sourceVersion:(id)arg2 deviceID:(id)arg3 ;
-(NSNumber *)localSourceID;
-(id)_localTimeZoneName;
-(void)setDeviceNoneID:(NSNumber *)arg1 ;
-(void)setLocalSourceID:(NSNumber *)arg1 ;
-(void)checkDefaultsLoaded;
-(id)provenanceEntityForProvenance:(id)arg1 error:(id*)arg2 ;
-(id)defaultLocalDataProvenanceWithDeviceEntity:(id)arg1 ;
-(HDDatabaseValueCache *)persistentIDsByProvenanceKey;
-(void)setPersistentIDsByProvenanceKey:(HDDatabaseValueCache *)arg1 ;
-(HDDatabaseValueCache *)originProvenanceByPersistentID;
-(void)setOriginProvenanceByPersistentID:(HDDatabaseValueCache *)arg1 ;
-(void)setLocalSystemBuild:(NSString *)arg1 ;
-(void)setLocalProductType:(NSString *)arg1 ;
@end

