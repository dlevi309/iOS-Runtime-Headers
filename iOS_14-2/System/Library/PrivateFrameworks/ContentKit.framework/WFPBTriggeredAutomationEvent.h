/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/ContentKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WFPBTriggeredAutomationEvent : PBCodable <NSCopying> {

	unsigned _batchCount;
	unsigned _batchDroppedCount;
	NSString* _key;
	NSString* _triggerType;
	BOOL _requiredRuntimeConfirmation;
	SCD_Struct_WF9 _has;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                                   //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) BOOL hasTriggerType; 
@property (nonatomic,retain) NSString * triggerType;                           //@synthesize triggerType=_triggerType - In the implementation block
@property (assign,nonatomic) BOOL hasRequiredRuntimeConfirmation; 
@property (assign,nonatomic) BOOL requiredRuntimeConfirmation;                 //@synthesize requiredRuntimeConfirmation=_requiredRuntimeConfirmation - In the implementation block
@property (assign,nonatomic) BOOL hasBatchCount; 
@property (assign,nonatomic) unsigned batchCount;                              //@synthesize batchCount=_batchCount - In the implementation block
@property (assign,nonatomic) BOOL hasBatchDroppedCount; 
@property (assign,nonatomic) unsigned batchDroppedCount;                       //@synthesize batchDroppedCount=_batchDroppedCount - In the implementation block
-(BOOL)hasKey;
-(id)dictionaryRepresentation;
-(void)setTriggerType:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(NSString *)key;
-(unsigned long long)hash;
-(unsigned)batchCount;
-(void)setBatchCount:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)triggerType;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasTriggerType;
-(void)setRequiredRuntimeConfirmation:(BOOL)arg1 ;
-(void)setHasRequiredRuntimeConfirmation:(BOOL)arg1 ;
-(BOOL)hasRequiredRuntimeConfirmation;
-(void)setHasBatchCount:(BOOL)arg1 ;
-(BOOL)hasBatchCount;
-(void)setBatchDroppedCount:(unsigned)arg1 ;
-(void)setHasBatchDroppedCount:(BOOL)arg1 ;
-(BOOL)hasBatchDroppedCount;
-(BOOL)requiredRuntimeConfirmation;
-(unsigned)batchDroppedCount;
@end

