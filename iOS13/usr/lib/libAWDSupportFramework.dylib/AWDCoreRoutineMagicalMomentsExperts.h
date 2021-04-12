/*
* Generated on Monday, March 1, 2021 at 2:35:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDCoreRoutineMagicalMomentsExperts : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _durationSinceLastSuccessfulTraining;
	NSMutableArray* _experts;
	NSMutableArray* _suggestions;
	int _trainingTime;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                             //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDurationSinceLastSuccessfulTraining; 
@property (assign,nonatomic) int durationSinceLastSuccessfulTraining;                  //@synthesize durationSinceLastSuccessfulTraining=_durationSinceLastSuccessfulTraining - In the implementation block
@property (assign,nonatomic) BOOL hasTrainingTime; 
@property (assign,nonatomic) int trainingTime;                                         //@synthesize trainingTime=_trainingTime - In the implementation block
@property (nonatomic,retain) NSMutableArray * experts;                                 //@synthesize experts=_experts - In the implementation block
@property (nonatomic,retain) NSMutableArray * suggestions;                             //@synthesize suggestions=_suggestions - In the implementation block
+(Class)suggestionsType;
+(Class)expertsType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)suggestions;
-(void)setSuggestions:(NSMutableArray *)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)suggestionsCount;
-(void)addSuggestions:(id)arg1 ;
-(void)clearSuggestions;
-(id)suggestionsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)experts;
-(void)setExperts:(NSMutableArray *)arg1 ;
-(void)addExperts:(id)arg1 ;
-(unsigned long long)expertsCount;
-(void)clearExperts;
-(id)expertsAtIndex:(unsigned long long)arg1 ;
-(void)setDurationSinceLastSuccessfulTraining:(int)arg1 ;
-(void)setHasDurationSinceLastSuccessfulTraining:(BOOL)arg1 ;
-(BOOL)hasDurationSinceLastSuccessfulTraining;
-(void)setTrainingTime:(int)arg1 ;
-(void)setHasTrainingTime:(BOOL)arg1 ;
-(BOOL)hasTrainingTime;
-(int)durationSinceLastSuccessfulTraining;
-(int)trainingTime;
@end

