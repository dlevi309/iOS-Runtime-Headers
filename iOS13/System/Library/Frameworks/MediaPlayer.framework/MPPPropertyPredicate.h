/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_MP49 _has;

}

@property (nonatomic,readonly) BOOL hasProperty; 
@property (nonatomic,retain) NSString * property;                         //@synthesize property=_property - In the implementation block
@property (nonatomic,readonly) BOOL hasValue; 
@property (nonatomic,retain) MPPMediaPredicateValue * value;              //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) BOOL hasComparisonType; 
@property (assign,nonatomic) int comparisonType;                          //@synthesize comparisonType=_comparisonType - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(MPPMediaPredicateValue *)value;
-(void)setValue:(MPPMediaPredicateValue *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)property;
-(void)setProperty:(NSString *)arg1 ;
-(BOOL)hasValue;
-(BOOL)hasProperty;
-(int)comparisonType;
-(void)setComparisonType:(int)arg1 ;
-(void)setHasComparisonType:(BOOL)arg1 ;
-(BOOL)hasComparisonType;
@end

