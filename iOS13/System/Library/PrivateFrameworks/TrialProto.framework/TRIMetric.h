/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_TR8 _has;

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
-(double)doubleValue;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)integerValue;
-(void)setName:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setIntegerValue:(long long)arg1 ;
-(void)setHasIntegerValue:(BOOL)arg1 ;
-(BOOL)hasIntegerValue;
-(void)setDoubleValue:(double)arg1 ;
-(void)setHasDoubleValue:(BOOL)arg1 ;
-(BOOL)hasDoubleValue;
-(BOOL)hasName;
-(void)setCategoricalValue:(NSString *)arg1 ;
-(void)setUserDefinedValue:(NSData *)arg1 ;
-(BOOL)hasCategoricalValue;
-(BOOL)hasUserDefinedValue;
-(NSString *)categoricalValue;
-(NSData *)userDefinedValue;
@end

