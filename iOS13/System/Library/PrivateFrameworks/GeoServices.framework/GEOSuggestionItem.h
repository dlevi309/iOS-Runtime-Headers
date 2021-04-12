/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_GE85 _flags;

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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)initiallyVisible;
-(void)setInitiallyVisible:(BOOL)arg1 ;
-(void)setHasInitiallyVisible:(BOOL)arg1 ;
-(BOOL)hasInitiallyVisible;
-(BOOL)eventuallyVisible;
-(void)setEventuallyVisible:(BOOL)arg1 ;
-(void)setHasEventuallyVisible:(BOOL)arg1 ;
-(BOOL)hasEventuallyVisible;
-(NSString *)suggestionString;
-(void)setSuggestionString:(NSString *)arg1 ;
-(BOOL)hasSuggestionString;
-(int)tappingCount;
-(void)setTappingCount:(int)arg1 ;
-(void)setHasTappingCount:(BOOL)arg1 ;
-(BOOL)hasTappingCount;
@end

