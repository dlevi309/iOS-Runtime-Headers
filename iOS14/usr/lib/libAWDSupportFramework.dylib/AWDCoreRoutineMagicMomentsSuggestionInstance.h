/*
* Generated on Thursday, January 14, 2021 at 2:28:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface AWDCoreRoutineMagicMomentsSuggestionInstance : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _confidence;
	int _durationSinceLastSuggestion;
	int _reposponceTime;
	NSString* _suggestionId;
	NSMutableArray* _suggestions;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                     //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasSuggestionId; 
@property (nonatomic,retain) NSString * suggestionId;                          //@synthesize suggestionId=_suggestionId - In the implementation block
@property (assign,nonatomic) BOOL hasConfidence; 
@property (assign,nonatomic) int confidence;                                   //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,retain) NSMutableArray * suggestions;                     //@synthesize suggestions=_suggestions - In the implementation block
@property (assign,nonatomic) BOOL hasReposponceTime; 
@property (assign,nonatomic) int reposponceTime;                               //@synthesize reposponceTime=_reposponceTime - In the implementation block
@property (assign,nonatomic) BOOL hasDurationSinceLastSuggestion; 
@property (assign,nonatomic) int durationSinceLastSuggestion;                  //@synthesize durationSinceLastSuggestion=_durationSinceLastSuggestion - In the implementation block
+(Class)suggestionsType;
-(int)confidence;
-(id)dictionaryRepresentation;
-(NSMutableArray *)suggestions;
-(void)setSuggestions:(NSMutableArray *)arg1 ;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)addSuggestions:(id)arg1 ;
-(void)clearSuggestions;
-(id)suggestionsAtIndex:(unsigned long long)arg1 ;
-(void)setConfidence:(int)arg1 ;
-(void)setHasConfidence:(BOOL)arg1 ;
-(BOOL)hasConfidence;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)suggestionsCount;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(NSString *)suggestionId;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setSuggestionId:(NSString *)arg1 ;
-(BOOL)hasSuggestionId;
-(void)setReposponceTime:(int)arg1 ;
-(void)setHasReposponceTime:(BOOL)arg1 ;
-(BOOL)hasReposponceTime;
-(void)setDurationSinceLastSuggestion:(int)arg1 ;
-(void)setHasDurationSinceLastSuggestion:(BOOL)arg1 ;
-(BOOL)hasDurationSinceLastSuggestion;
-(int)reposponceTime;
-(int)durationSinceLastSuggestion;
@end

