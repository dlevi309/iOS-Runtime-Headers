/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
*/

#import <TrialProto/TrialProto-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface TRIMetric : PBCodable <NSCopying> {

	double _doubleValue;
	long long _integerValue;
	NSString* _categoricalValue;
	NSString* _name;
	NSData* _userDefinedValue;
	SCD_Struct_TR1 _has;

}

@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL hasDoubleValue; 
@property (assign,nonatomic) double doubleValue;                       //@synthesize doubleValue=_doubleValue - In the implementation block
@property (assign,nonatomic) BOOL hasIntegerValue; 
@property (assign,nonatomic) long long integerValue;                   //@synthesize integerValue=_integerValue - In the implementation block
@property (nonatomic,readonly) BOOL hasCategoricalValue; 
@property (nonatomic,retain) NSString * categoricalValue;              //@synthesize categoricalValue=_categoricalValue - In the implementation block
@property (nonatomic,readonly) BOOL hasUserDefinedValue; 
@property (nonatomic,retain) NSData * userDefinedValue;                //@synthesize userDefinedValue=_userDefinedValue - In the implementation block
+(id)metricWithName:(id)arg1 ;
+(id)metricWithName:(id)arg1 doubleValue:(double)arg2 ;
+(id)metricWithName:(id)arg1 integerValue:(long long)arg2 ;
+(id)metricWithName:(id)arg1 categoricalValue:(id)arg2 ;
+(id)metricWithName:(id)arg1 userDefinedValue:(id)arg2 ;
-(id)dictionaryRepresentation;
-(long long)integerValue;
-(double)doubleValue;
-(BOOL)hasName;
-(void)setDoubleValue:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasIntegerValue;
-(NSString *)name;
-(void)setHasIntegerValue:(BOOL)arg1 ;
-(BOOL)hasDoubleValue;
-(id)description;
-(void)setIntegerValue:(long long)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasDoubleValue:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setCategoricalValue:(NSString *)arg1 ;
-(void)setUserDefinedValue:(NSData *)arg1 ;
-(BOOL)hasCategoricalValue;
-(BOOL)hasUserDefinedValue;
-(NSString *)categoricalValue;
-(NSData *)userDefinedValue;
@end

