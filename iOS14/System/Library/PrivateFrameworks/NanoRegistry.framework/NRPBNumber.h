/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NRPBNumber : PBCodable <NSCopying> {

	double _doubleValue;
	long long _int64Value;
	float _floatValue;
	int _int32Value;
	BOOL _boolValue;
	BOOL _isShortOrChar;
	BOOL _isUnsigned;
	SCD_Struct_NR7 _has;

}

@property (assign,nonatomic) BOOL hasInt32Value; 
@property (assign,nonatomic) int int32Value;                     //@synthesize int32Value=_int32Value - In the implementation block
@property (assign,nonatomic) BOOL hasFloatValue; 
@property (assign,nonatomic) float floatValue;                   //@synthesize floatValue=_floatValue - In the implementation block
@property (assign,nonatomic) BOOL hasDoubleValue; 
@property (assign,nonatomic) double doubleValue;                 //@synthesize doubleValue=_doubleValue - In the implementation block
@property (assign,nonatomic) BOOL hasBoolValue; 
@property (assign,nonatomic) BOOL boolValue;                     //@synthesize boolValue=_boolValue - In the implementation block
@property (assign,nonatomic) BOOL hasInt64Value; 
@property (assign,nonatomic) long long int64Value;               //@synthesize int64Value=_int64Value - In the implementation block
@property (assign,nonatomic) BOOL hasIsUnsigned; 
@property (assign,nonatomic) BOOL isUnsigned;                    //@synthesize isUnsigned=_isUnsigned - In the implementation block
@property (assign,nonatomic) BOOL hasIsShortOrChar; 
@property (assign,nonatomic) BOOL isShortOrChar;                 //@synthesize isShortOrChar=_isShortOrChar - In the implementation block
-(id)dictionaryRepresentation;
-(double)doubleValue;
-(BOOL)boolValue;
-(long long)int64Value;
-(float)floatValue;
-(void)setFloatValue:(float)arg1 ;
-(void)setDoubleValue:(double)arg1 ;
-(void)setInt64Value:(long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasBoolValue:(BOOL)arg1 ;
-(BOOL)hasBoolValue;
-(void)setBoolValue:(BOOL)arg1 ;
-(BOOL)hasDoubleValue;
-(int)int32Value;
-(id)description;
-(void)setInt32Value:(int)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasInt32Value:(BOOL)arg1 ;
-(BOOL)hasInt32Value;
-(void)setHasFloatValue:(BOOL)arg1 ;
-(BOOL)hasFloatValue;
-(void)setHasInt64Value:(BOOL)arg1 ;
-(BOOL)hasInt64Value;
-(void)setIsUnsigned:(BOOL)arg1 ;
-(void)setHasIsUnsigned:(BOOL)arg1 ;
-(BOOL)hasIsUnsigned;
-(void)setIsShortOrChar:(BOOL)arg1 ;
-(void)setHasIsShortOrChar:(BOOL)arg1 ;
-(BOOL)hasIsShortOrChar;
-(BOOL)isUnsigned;
-(BOOL)isShortOrChar;
-(void)setHasDoubleValue:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

