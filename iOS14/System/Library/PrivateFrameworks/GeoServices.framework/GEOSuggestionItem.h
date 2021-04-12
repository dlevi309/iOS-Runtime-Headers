/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOSuggestionItem : PBCodable <NSCopying> {

	NSString* _suggestionString;
	int _tappingCount;
	BOOL _eventuallyVisible;
	BOOL _initiallyVisible;
	SCD_Struct_GE37 _flags;

}

@property (nonatomic,readonly) BOOL hasSuggestionString; 
@property (nonatomic,retain) NSString * suggestionString; 
@property (assign,nonatomic) BOOL hasInitiallyVisible; 
@property (assign,nonatomic) BOOL initiallyVisible; 
@property (assign,nonatomic) BOOL hasEventuallyVisible; 
@property (assign,nonatomic) BOOL eventuallyVisible; 
@property (assign,nonatomic) BOOL hasTappingCount; 
@property (assign,nonatomic) int tappingCount; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)eventuallyVisible;
-(id)dictionaryRepresentation;
-(BOOL)hasInitiallyVisible;
-(void)readAll:(BOOL)arg1 ;
-(int)tappingCount;
-(NSString *)suggestionString;
-(void)setSuggestionString:(NSString *)arg1 ;
-(void)setTappingCount:(int)arg1 ;
-(BOOL)hasSuggestionString;
-(void)setHasTappingCount:(BOOL)arg1 ;
-(BOOL)hasTappingCount;
-(id)jsonRepresentation;
-(void)setHasEventuallyVisible:(BOOL)arg1 ;
-(void)setInitiallyVisible:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(void)setEventuallyVisible:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasInitiallyVisible:(BOOL)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)initiallyVisible;
-(BOOL)hasEventuallyVisible;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

