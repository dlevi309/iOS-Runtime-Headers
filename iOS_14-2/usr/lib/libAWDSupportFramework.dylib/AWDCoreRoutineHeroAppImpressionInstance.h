/*
* Generated on Thursday, January 14, 2021 at 2:28:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDCoreRoutineHeroAppImpressionInstance : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSString* _suggestionId;
	int _uiPlacement;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasSuggestionId; 
@property (nonatomic,retain) NSString * suggestionId;                   //@synthesize suggestionId=_suggestionId - In the implementation block
@property (assign,nonatomic) BOOL hasUiPlacement; 
@property (assign,nonatomic) int uiPlacement;                           //@synthesize uiPlacement=_uiPlacement - In the implementation block
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(NSString *)suggestionId;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setSuggestionId:(NSString *)arg1 ;
-(int)uiPlacement;
-(void)setUiPlacement:(int)arg1 ;
-(void)setHasUiPlacement:(BOOL)arg1 ;
-(BOOL)hasUiPlacement;
-(BOOL)hasSuggestionId;
@end

