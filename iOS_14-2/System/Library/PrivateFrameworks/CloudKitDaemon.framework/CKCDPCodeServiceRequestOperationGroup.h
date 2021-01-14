/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CKCDPCodeServiceRequestOperationGroup : PBCodable <NSCopying> {

	long long _operationGroupQuantity;
	NSString* _operationGroupId;
	NSString* _operationGroupName;
	NSString* _operationId;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasOperationId; 
@property (nonatomic,retain) NSString * operationId;                        //@synthesize operationId=_operationId - In the implementation block
@property (nonatomic,readonly) BOOL hasOperationGroupId; 
@property (nonatomic,retain) NSString * operationGroupId;                   //@synthesize operationGroupId=_operationGroupId - In the implementation block
@property (nonatomic,readonly) BOOL hasOperationGroupName; 
@property (nonatomic,retain) NSString * operationGroupName;                 //@synthesize operationGroupName=_operationGroupName - In the implementation block
@property (assign,nonatomic) BOOL hasOperationGroupQuantity; 
@property (assign,nonatomic) long long operationGroupQuantity;              //@synthesize operationGroupQuantity=_operationGroupQuantity - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)operationId;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(NSString *)operationGroupName;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setOperationId:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)operationGroupId;
-(void)setOperationGroupId:(NSString *)arg1 ;
-(void)setOperationGroupName:(NSString *)arg1 ;
-(BOOL)hasOperationId;
-(BOOL)hasOperationGroupId;
-(BOOL)hasOperationGroupName;
-(long long)operationGroupQuantity;
-(void)setOperationGroupQuantity:(long long)arg1 ;
-(void)setHasOperationGroupQuantity:(BOOL)arg1 ;
-(BOOL)hasOperationGroupQuantity;
@end

