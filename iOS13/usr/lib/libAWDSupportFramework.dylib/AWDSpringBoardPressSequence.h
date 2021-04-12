/*
* Generated on Monday, March 1, 2021 at 2:35:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface AWDSpringBoardPressSequence : PBCodable <NSCopying> {

	unsigned long long _clickMax;
	unsigned long long _timestamp;
	NSMutableArray* _sequences;
	NSString* _type;
	NSString* _uUID;
	BOOL _didTriggerSOS;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSMutableArray * sequences;                //@synthesize sequences=_sequences - In the implementation block
@property (nonatomic,readonly) BOOL hasType; 
@property (nonatomic,retain) NSString * type;                           //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasDidTriggerSOS; 
@property (assign,nonatomic) BOOL didTriggerSOS;                        //@synthesize didTriggerSOS=_didTriggerSOS - In the implementation block
@property (assign,nonatomic) BOOL hasClickMax; 
@property (assign,nonatomic) unsigned long long clickMax;               //@synthesize clickMax=_clickMax - In the implementation block
@property (nonatomic,readonly) BOOL hasUUID; 
@property (nonatomic,retain) NSString * uUID;                           //@synthesize uUID=_uUID - In the implementation block
+(Class)sequenceType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setUUID:(NSString *)arg1 ;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)sequences;
-(void)setSequences:(NSMutableArray *)arg1 ;
-(BOOL)hasType;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)addSequence:(id)arg1 ;
-(void)setDidTriggerSOS:(BOOL)arg1 ;
-(void)setHasDidTriggerSOS:(BOOL)arg1 ;
-(BOOL)hasDidTriggerSOS;
-(BOOL)didTriggerSOS;
-(unsigned long long)sequencesCount;
-(void)clearSequences;
-(id)sequenceAtIndex:(unsigned long long)arg1 ;
-(void)setClickMax:(unsigned long long)arg1 ;
-(void)setHasClickMax:(BOOL)arg1 ;
-(BOOL)hasClickMax;
-(BOOL)hasUUID;
-(unsigned long long)clickMax;
-(NSString *)uUID;
@end

