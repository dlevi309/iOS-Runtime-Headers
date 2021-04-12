/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)operationType;
-(void)setOperationType:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)operationId;
-(void)setOperationId:(NSString *)arg1 ;
-(BOOL)hasOperationType;
-(BOOL)hasOperationId;
-(void)setOperationTriggered:(BOOL)arg1 ;
-(void)setOperationGroupIndex:(unsigned)arg1 ;
-(void)setHasOperationTriggered:(BOOL)arg1 ;
-(BOOL)hasOperationTriggered;
-(void)setHasOperationGroupIndex:(BOOL)arg1 ;
-(BOOL)hasOperationGroupIndex;
-(BOOL)operationTriggered;
-(unsigned)operationGroupIndex;
@end

