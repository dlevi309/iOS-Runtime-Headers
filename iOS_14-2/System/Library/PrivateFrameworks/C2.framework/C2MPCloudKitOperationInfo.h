/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/C2.framework/C2
*/

#import <C2/C2-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface C2MPCloudKitOperationInfo : PBCodable <NSCopying> {

	unsigned _operationGroupIndex;
	NSString* _operationId;
	NSString* _operationType;
	BOOL _operationTriggered;
	SCD_Struct_C21 _has;

}

@property (nonatomic,readonly) BOOL hasOperationId; 
@property (nonatomic,retain) NSString * operationId;                    //@synthesize operationId=_operationId - In the implementation block
@property (nonatomic,readonly) BOOL hasOperationType; 
@property (nonatomic,retain) NSString * operationType;                  //@synthesize operationType=_operationType - In the implementation block
@property (assign,nonatomic) BOOL hasOperationTriggered; 
@property (assign,nonatomic) BOOL operationTriggered;                   //@synthesize operationTriggered=_operationTriggered - In the implementation block
@property (assign,nonatomic) BOOL hasOperationGroupIndex; 
@property (assign,nonatomic) unsigned operationGroupIndex;              //@synthesize operationGroupIndex=_operationGroupIndex - In the implementation block
-(NSString *)operationType;
-(id)dictionaryRepresentation;
-(NSString *)operationId;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(void)setOperationType:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setOperationId:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasOperationType;
-(void)setOperationTriggered:(BOOL)arg1 ;
-(void)setOperationGroupIndex:(unsigned)arg1 ;
-(BOOL)hasOperationId;
-(void)setHasOperationTriggered:(BOOL)arg1 ;
-(BOOL)hasOperationTriggered;
-(void)setHasOperationGroupIndex:(BOOL)arg1 ;
-(BOOL)hasOperationGroupIndex;
-(BOOL)operationTriggered;
-(unsigned)operationGroupIndex;
@end

