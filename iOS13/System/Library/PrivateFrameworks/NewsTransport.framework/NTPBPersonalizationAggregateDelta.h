/*
* Generated on Monday, March 1, 2021 at 2:32:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBPersonalizationAggregateDelta : PBCodable <NSCopying> {

	SCD_Struct_NT14* _events;
	double _defaultClicks;
	double _defaultImpressions;
	double _groupBias;
	double _impressionBias;
	unsigned long long _timestamp;
	NSString* _featureKey;
	SCD_Struct_NT10 _has;

}

@property (nonatomic,readonly) BOOL hasFeatureKey; 
@property (nonatomic,retain) NSString * featureKey;                         //@synthesize featureKey=_featureKey - In the implementation block
@property (assign,nonatomic) BOOL hasDefaultClicks; 
@property (assign,nonatomic) double defaultClicks;                          //@synthesize defaultClicks=_defaultClicks - In the implementation block
@property (assign,nonatomic) BOOL hasDefaultImpressions; 
@property (assign,nonatomic) double defaultImpressions;                     //@synthesize defaultImpressions=_defaultImpressions - In the implementation block
@property (nonatomic,readonly) unsigned long long eventsCount; 
@property (nonatomic,readonly) unsigned* events; 
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                  //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasImpressionBias; 
@property (assign,nonatomic) double impressionBias;                         //@synthesize impressionBias=_impressionBias - In the implementation block
@property (assign,nonatomic) BOOL hasGroupBias; 
@property (assign,nonatomic) double groupBias;                              //@synthesize groupBias=_groupBias - In the implementation block
+(void)fc_swizzleFor24117796;
-(BOOL)applyToAggregate:(id)arg1 withTreatment:(id)arg2 ;
-(void)addAction:(unsigned long long)arg1 count:(unsigned long long)arg2 ;
-(void)applyToDelta:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned*)events;
-(void)addEvents:(unsigned)arg1 ;
-(unsigned long long)eventsCount;
-(void)clearEvents;
-(unsigned)eventsAtIndex:(unsigned long long)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(NSString *)featureKey;
-(void)setFeatureKey:(NSString *)arg1 ;
-(double)defaultClicks;
-(double)defaultImpressions;
-(double)impressionBias;
-(double)groupBias;
-(void)setDefaultClicks:(double)arg1 ;
-(void)setDefaultImpressions:(double)arg1 ;
-(void)setImpressionBias:(double)arg1 ;
-(void)setGroupBias:(double)arg1 ;
-(BOOL)hasFeatureKey;
-(void)setHasDefaultClicks:(BOOL)arg1 ;
-(BOOL)hasDefaultClicks;
-(void)setHasDefaultImpressions:(BOOL)arg1 ;
-(BOOL)hasDefaultImpressions;
-(void)setEvents:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setHasImpressionBias:(BOOL)arg1 ;
-(BOOL)hasImpressionBias;
-(void)setHasGroupBias:(BOOL)arg1 ;
-(BOOL)hasGroupBias;
@end

