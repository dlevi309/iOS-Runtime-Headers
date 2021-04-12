/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CKDPThrottlingConfigCriteria : PBCodable <NSCopying> {

	int _containerEnvironment;
	NSString* _containerName;
	int _databaseType;
	NSString* _invernessFunctionName;
	NSString* _invernessServiceName;
	NSString* _operationGroupName;
	int _operationType;
	NSString* _zoneName;
	SCD_Struct_CK17 _has;

}

@property (nonatomic,readonly) BOOL hasContainerName; 
@property (nonatomic,retain) NSString * containerName;                      //@synthesize containerName=_containerName - In the implementation block
@property (assign,nonatomic) BOOL hasContainerEnvironment; 
@property (assign,nonatomic) int containerEnvironment;                      //@synthesize containerEnvironment=_containerEnvironment - In the implementation block
@property (assign,nonatomic) BOOL hasOperationType; 
@property (assign,nonatomic) int operationType;                             //@synthesize operationType=_operationType - In the implementation block
@property (assign,nonatomic) BOOL hasDatabaseType; 
@property (assign,nonatomic) int databaseType;                              //@synthesize databaseType=_databaseType - In the implementation block
@property (nonatomic,readonly) BOOL hasZoneName; 
@property (nonatomic,retain) NSString * zoneName;                           //@synthesize zoneName=_zoneName - In the implementation block
@property (nonatomic,readonly) BOOL hasOperationGroupName; 
@property (nonatomic,retain) NSString * operationGroupName;                 //@synthesize operationGroupName=_operationGroupName - In the implementation block
@property (nonatomic,readonly) BOOL hasInvernessServiceName; 
@property (nonatomic,retain) NSString * invernessServiceName;               //@synthesize invernessServiceName=_invernessServiceName - In the implementation block
@property (nonatomic,readonly) BOOL hasInvernessFunctionName; 
@property (nonatomic,retain) NSString * invernessFunctionName;              //@synthesize invernessFunctionName=_invernessFunctionName - In the implementation block
-(int)operationType;
-(id)dictionaryRepresentation;
-(NSString *)zoneName;
-(void)mergeFrom:(id)arg1 ;
-(void)setContainerName:(NSString *)arg1 ;
-(id)description;
-(BOOL)hasZoneName;
-(NSString *)operationGroupName;
-(unsigned long long)hash;
-(NSString *)containerName;
-(void)setOperationType:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setZoneName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasOperationType:(BOOL)arg1 ;
-(BOOL)hasOperationType;
-(id)operationTypeAsString:(int)arg1 ;
-(int)StringAsOperationType:(id)arg1 ;
-(void)setOperationGroupName:(NSString *)arg1 ;
-(BOOL)hasOperationGroupName;
-(int)containerEnvironment;
-(void)setContainerEnvironment:(int)arg1 ;
-(void)setHasContainerEnvironment:(BOOL)arg1 ;
-(BOOL)hasContainerEnvironment;
-(id)containerEnvironmentAsString:(int)arg1 ;
-(int)StringAsContainerEnvironment:(id)arg1 ;
-(BOOL)hasContainerName;
-(void)setDatabaseType:(int)arg1 ;
-(BOOL)hasDatabaseType;
-(int)databaseType;
-(BOOL)hasInvernessServiceName;
-(NSString *)invernessServiceName;
-(BOOL)hasInvernessFunctionName;
-(NSString *)invernessFunctionName;
-(void)setInvernessServiceName:(NSString *)arg1 ;
-(void)setInvernessFunctionName:(NSString *)arg1 ;
-(void)setHasDatabaseType:(BOOL)arg1 ;
-(id)databaseTypeAsString:(int)arg1 ;
-(int)StringAsDatabaseType:(id)arg1 ;
@end

