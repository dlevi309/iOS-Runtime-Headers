/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/

#import <AppPredictionClient/AppPredictionClient-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface ATXPBInfoEngineCachedSuggestions : PBCodable <NSCopying> {

	unsigned long long _length;
	NSMutableArray* _cachedSuggestionIds;
	NSMutableArray* _cachedSuggestionSourceIds;
	SCD_Struct_AT1 _has;

}

@property (assign,nonatomic) BOOL hasLength; 
@property (assign,nonatomic) unsigned long long length;                               //@synthesize length=_length - In the implementation block
@property (nonatomic,retain) NSMutableArray * cachedSuggestionIds;                    //@synthesize cachedSuggestionIds=_cachedSuggestionIds - In the implementation block
@property (nonatomic,retain) NSMutableArray * cachedSuggestionSourceIds;              //@synthesize cachedSuggestionSourceIds=_cachedSuggestionSourceIds - In the implementation block
+(Class)cachedSuggestionIdsType;
+(Class)cachedSuggestionSourceIdsType;
-(void)setLength:(unsigned long long)arg1 ;
-(id)dictionaryRepresentation;
-(void)setHasLength:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)length;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasLength;
-(BOOL)isEqual:(id)arg1 ;
-(void)addCachedSuggestionIds:(id)arg1 ;
-(void)addCachedSuggestionSourceIds:(id)arg1 ;
-(unsigned long long)cachedSuggestionIdsCount;
-(void)clearCachedSuggestionIds;
-(id)cachedSuggestionIdsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)cachedSuggestionSourceIdsCount;
-(void)clearCachedSuggestionSourceIds;
-(id)cachedSuggestionSourceIdsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)cachedSuggestionIds;
-(void)setCachedSuggestionIds:(NSMutableArray *)arg1 ;
-(NSMutableArray *)cachedSuggestionSourceIds;
-(void)setCachedSuggestionSourceIds:(NSMutableArray *)arg1 ;
@end

