/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, MPPMediaPredicateValue;

@interface MPPPropertyPredicate : PBCodable <NSCopying> {

	int _comparisonType;
	NSString* _property;
	MPPMediaPredicateValue* _value;
	SCD_Struct_MP50 _has;

}

@property (nonatomic,readonly) BOOL hasProperty; 
@property (nonatomic,retain) NSString * property;                         //@synthesize property=_property - In the implementation block
@property (nonatomic,readonly) BOOL hasValue; 
@property (nonatomic,retain) MPPMediaPredicateValue * value;              //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) BOOL hasComparisonType; 
@property (assign,nonatomic) int comparisonType;                          //@synthesize comparisonType=_comparisonType - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)property;
-(BOOL)hasValue;
-(void)setProperty:(NSString *)arg1 ;
-(BOOL)hasProperty;
-(void)setHasComparisonType:(BOOL)arg1 ;
-(BOOL)hasComparisonType;
-(void)setValue:(MPPMediaPredicateValue *)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(void)setComparisonType:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(int)comparisonType;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(MPPMediaPredicateValue *)value;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

