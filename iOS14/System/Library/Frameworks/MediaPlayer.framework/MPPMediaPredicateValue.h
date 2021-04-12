/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface MPPMediaPredicateValue : PBCodable <NSCopying> {

	double _doublePredicateValue;
	long long _integerPredicateValue;
	NSData* _bytesPredicateValue;
	float _floatPredicateValue;
	NSString* _stringPredicateValue;
	int _type;
	BOOL _boolPredicateValue;
	SCD_Struct_MP51 _has;

}

@property (assign,nonatomic) int type;                                     //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasIntegerPredicateValue; 
@property (assign,nonatomic) long long integerPredicateValue;              //@synthesize integerPredicateValue=_integerPredicateValue - In the implementation block
@property (assign,nonatomic) BOOL hasDoublePredicateValue; 
@property (assign,nonatomic) double doublePredicateValue;                  //@synthesize doublePredicateValue=_doublePredicateValue - In the implementation block
@property (assign,nonatomic) BOOL hasFloatPredicateValue; 
@property (assign,nonatomic) float floatPredicateValue;                    //@synthesize floatPredicateValue=_floatPredicateValue - In the implementation block
@property (assign,nonatomic) BOOL hasBoolPredicateValue; 
@property (assign,nonatomic) BOOL boolPredicateValue;                      //@synthesize boolPredicateValue=_boolPredicateValue - In the implementation block
@property (nonatomic,readonly) BOOL hasStringPredicateValue; 
@property (nonatomic,retain) NSString * stringPredicateValue;              //@synthesize stringPredicateValue=_stringPredicateValue - In the implementation block
@property (nonatomic,readonly) BOOL hasBytesPredicateValue; 
@property (nonatomic,retain) NSData * bytesPredicateValue;                 //@synthesize bytesPredicateValue=_bytesPredicateValue - In the implementation block
-(id)dictionaryRepresentation;
-(void)setType:(int)arg1 ;
-(void)setIntegerPredicateValue:(long long)arg1 ;
-(void)setHasIntegerPredicateValue:(BOOL)arg1 ;
-(BOOL)hasIntegerPredicateValue;
-(void)setDoublePredicateValue:(double)arg1 ;
-(void)setHasDoublePredicateValue:(BOOL)arg1 ;
-(BOOL)hasBoolPredicateValue;
-(BOOL)hasDoublePredicateValue;
-(void)setFloatPredicateValue:(float)arg1 ;
-(void)setHasFloatPredicateValue:(BOOL)arg1 ;
-(BOOL)hasFloatPredicateValue;
-(void)setBoolPredicateValue:(BOOL)arg1 ;
-(void)setHasBoolPredicateValue:(BOOL)arg1 ;
-(BOOL)hasStringPredicateValue;
-(BOOL)hasBytesPredicateValue;
-(long long)integerPredicateValue;
-(double)doublePredicateValue;
-(float)floatPredicateValue;
-(BOOL)boolPredicateValue;
-(NSString *)stringPredicateValue;
-(void)setStringPredicateValue:(NSString *)arg1 ;
-(NSData *)bytesPredicateValue;
-(void)setBytesPredicateValue:(NSData *)arg1 ;
-(id)description;
-(int)type;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

