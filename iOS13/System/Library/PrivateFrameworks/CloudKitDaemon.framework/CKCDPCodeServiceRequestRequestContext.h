/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CKCDPCodeServiceRequestOperationGroup;

@interface CKCDPCodeServiceRequestRequestContext : PBCodable <NSCopying> {

	unsigned long long _dsid;
	NSString* _applicationBundleId;
	NSString* _clientInfo;
	NSString* _containerName;
	int _databaseEnvironment;
	int _databasePartition;
	int _databaseType;
	NSString* _deviceId;
	CKCDPCodeServiceRequestOperationGroup* _operationGroup;
	NSString* _userAgent;
	NSString* _userId;
	SCD_Struct_CK17 _has;

}

@property (nonatomic,readonly) BOOL hasUserId; 
@property (nonatomic,retain) NSString * userId;                                                   //@synthesize userId=_userId - In the implementation block
@property (nonatomic,readonly) BOOL hasContainerName; 
@property (nonatomic,retain) NSString * containerName;                                            //@synthesize containerName=_containerName - In the implementation block
@property (assign,nonatomic) BOOL hasDatabaseEnvironment; 
@property (assign,nonatomic) int databaseEnvironment;                                             //@synthesize databaseEnvironment=_databaseEnvironment - In the implementation block
@property (assign,nonatomic) BOOL hasDatabaseType; 
@property (assign,nonatomic) int databaseType;                                                    //@synthesize databaseType=_databaseType - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceId; 
@property (nonatomic,retain) NSString * deviceId;                                                 //@synthesize deviceId=_deviceId - In the implementation block
@property (nonatomic,readonly) BOOL hasApplicationBundleId; 
@property (nonatomic,retain) NSString * applicationBundleId;                                      //@synthesize applicationBundleId=_applicationBundleId - In the implementation block
@property (assign,nonatomic) BOOL hasDatabasePartition; 
@property (assign,nonatomic) int databasePartition;                                               //@synthesize databasePartition=_databasePartition - In the implementation block
@property (nonatomic,readonly) BOOL hasClientInfo; 
@property (nonatomic,retain) NSString * clientInfo;                                               //@synthesize clientInfo=_clientInfo - In the implementation block
@property (assign,nonatomic) BOOL hasDsid; 
@property (assign,nonatomic) unsigned long long dsid;                                             //@synthesize dsid=_dsid - In the implementation block
@property (nonatomic,readonly) BOOL hasUserAgent; 
@property (nonatomic,retain) NSString * userAgent;                                                //@synthesize userAgent=_userAgent - In the implementation block
@property (nonatomic,readonly) BOOL hasOperationGroup; 
@property (nonatomic,retain) CKCDPCodeServiceRequestOperationGroup * operationGroup;              //@synthesize operationGroup=_operationGroup - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)containerName;
-(void)setContainerName:(NSString *)arg1 ;
-(unsigned long long)dsid;
-(void)setDsid:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)userAgent;
-(void)setUserAgent:(NSString *)arg1 ;
-(NSString *)clientInfo;
-(NSString *)deviceId;
-(void)setClientInfo:(NSString *)arg1 ;
-(CKCDPCodeServiceRequestOperationGroup *)operationGroup;
-(void)setDeviceId:(NSString *)arg1 ;
-(NSString *)userId;
-(void)setUserId:(NSString *)arg1 ;
-(BOOL)hasUserId;
-(BOOL)hasDsid;
-(BOOL)hasContainerName;
-(void)setOperationGroup:(CKCDPCodeServiceRequestOperationGroup *)arg1 ;
-(void)setDatabaseEnvironment:(int)arg1 ;
-(void)setDatabaseType:(int)arg1 ;
-(void)setApplicationBundleId:(NSString *)arg1 ;
-(int)databaseEnvironment;
-(void)setHasDatabaseEnvironment:(BOOL)arg1 ;
-(BOOL)hasDatabaseEnvironment;
-(id)databaseEnvironmentAsString:(int)arg1 ;
-(int)StringAsDatabaseEnvironment:(id)arg1 ;
-(int)databaseType;
-(void)setHasDatabaseType:(BOOL)arg1 ;
-(BOOL)hasDatabaseType;
-(id)databaseTypeAsString:(int)arg1 ;
-(int)StringAsDatabaseType:(id)arg1 ;
-(BOOL)hasDeviceId;
-(BOOL)hasApplicationBundleId;
-(void)setDatabasePartition:(int)arg1 ;
-(void)setHasDatabasePartition:(BOOL)arg1 ;
-(BOOL)hasDatabasePartition;
-(BOOL)hasClientInfo;
-(void)setHasDsid:(BOOL)arg1 ;
-(BOOL)hasUserAgent;
-(BOOL)hasOperationGroup;
-(NSString *)applicationBundleId;
-(int)databasePartition;
@end

