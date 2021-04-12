/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CKCDPCodeServiceRequestDatabaseOwner, CKCDPCodeServiceRequestOperationGroup;

@interface CKCDPCodeServiceRequestRequestContext : PBCodable <NSCopying> {

	unsigned long long _dsid;
	NSString* _applicationBundleId;
	NSString* _clientInfo;
	NSString* _containerName;
	int _databaseEnvironment;
	CKCDPCodeServiceRequestDatabaseOwner* _databaseOwnerId;
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
@property (nonatomic,readonly) BOOL hasClientInfo; 
@property (nonatomic,retain) NSString * clientInfo;                                               //@synthesize clientInfo=_clientInfo - In the implementation block
@property (assign,nonatomic) BOOL hasDsid; 
@property (assign,nonatomic) unsigned long long dsid;                                             //@synthesize dsid=_dsid - In the implementation block
@property (nonatomic,readonly) BOOL hasUserAgent; 
@property (nonatomic,retain) NSString * userAgent;                                                //@synthesize userAgent=_userAgent - In the implementation block
@property (nonatomic,readonly) BOOL hasOperationGroup; 
@property (nonatomic,retain) CKCDPCodeServiceRequestOperationGroup * operationGroup;              //@synthesize operationGroup=_operationGroup - In the implementation block
@property (nonatomic,readonly) BOOL hasDatabaseOwnerId; 
@property (nonatomic,retain) CKCDPCodeServiceRequestDatabaseOwner * databaseOwnerId;              //@synthesize databaseOwnerId=_databaseOwnerId - In the implementation block
-(void)setUserId:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasUserId;
-(NSString *)userId;
-(unsigned long long)dsid;
-(void)setDsid:(unsigned long long)arg1 ;
-(NSString *)clientInfo;
-(void)setClientInfo:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setContainerName:(NSString *)arg1 ;
-(id)description;
-(CKCDPCodeServiceRequestOperationGroup *)operationGroup;
-(void)setDeviceId:(NSString *)arg1 ;
-(BOOL)hasDsid;
-(unsigned long long)hash;
-(NSString *)containerName;
-(BOOL)hasDeviceId;
-(NSString *)userAgent;
-(BOOL)readFrom:(id)arg1 ;
-(void)setUserAgent:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setOperationGroup:(CKCDPCodeServiceRequestOperationGroup *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)deviceId;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasUserAgent;
-(NSString *)applicationBundleId;
-(BOOL)hasContainerName;
-(void)setDatabaseEnvironment:(int)arg1 ;
-(void)setDatabaseType:(int)arg1 ;
-(BOOL)hasDatabaseType;
-(int)databaseType;
-(void)setHasDatabaseType:(BOOL)arg1 ;
-(id)databaseTypeAsString:(int)arg1 ;
-(int)StringAsDatabaseType:(id)arg1 ;
-(void)setApplicationBundleId:(NSString *)arg1 ;
-(void)setDatabaseOwnerId:(CKCDPCodeServiceRequestDatabaseOwner *)arg1 ;
-(int)databaseEnvironment;
-(void)setHasDatabaseEnvironment:(BOOL)arg1 ;
-(BOOL)hasDatabaseEnvironment;
-(id)databaseEnvironmentAsString:(int)arg1 ;
-(int)StringAsDatabaseEnvironment:(id)arg1 ;
-(BOOL)hasApplicationBundleId;
-(BOOL)hasClientInfo;
-(void)setHasDsid:(BOOL)arg1 ;
-(BOOL)hasOperationGroup;
-(BOOL)hasDatabaseOwnerId;
-(CKCDPCodeServiceRequestDatabaseOwner *)databaseOwnerId;
@end

