/*
* Generated on Thursday, January 14, 2021 at 2:23:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/FCPersonalizationAggregate.h>
#import <libobjc.A.dylib/FCMutablePersonalizationAggregate.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, NSDictionary;

@interface NTPBPersonalizationAggregate : PBCodable <FCPersonalizationAggregate, FCMutablePersonalizationAggregate, NSCopying> {

	double _clicks;
	unsigned long long _eventCount;
	double _impressions;
	unsigned long long _timestamp;
	NSString* _featureKey;
	SCD_Struct_NT2 _has;

}

@property (nonatomic,readonly) NSString * featureKey; 
@property (nonatomic,readonly) double clicks; 
@property (nonatomic,readonly) double impressions; 
@property (nonatomic,readonly) unsigned long long eventCount; 
@property (nonatomic,readonly) NSDate * lastModified; 
@property (nonatomic,readonly) double confidence; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double timestamp; 
@property (nonatomic,readonly) BOOL hasFeatureKey; 
@property (nonatomic,retain) NSString * featureKey;                                  //@synthesize featureKey=_featureKey - In the implementation block
@property (assign,nonatomic) BOOL hasClicks; 
@property (assign,nonatomic) double clicks;                                          //@synthesize clicks=_clicks - In the implementation block
@property (assign,nonatomic) BOOL hasImpressions; 
@property (assign,nonatomic) double impressions;                                     //@synthesize impressions=_impressions - In the implementation block
@property (assign,nonatomic) BOOL hasEventCount; 
@property (assign,nonatomic) unsigned long long eventCount;                          //@synthesize eventCount=_eventCount - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                           //@synthesize timestamp=_timestamp - In the implementation block
-(double)confidence;
-(NSDictionary *)dictionaryRepresentation;
-(NSDate *)lastModified;
-(double)personalizationValueWithBaseline:(id)arg1 decayRate:(double)arg2 baselineClicksMultiplier:(double)arg3 ;
-(double)_personalizationValueWithBaselineClicks:(double)arg1 baselineImpressions:(double)arg2 decayRate:(double)arg3 baselineClicksMultiplier:(double)arg4 ;
-(double)powerWithDecayFactor:(double)arg1 ;
-(double)personalizationValueWithBaseline:(id)arg1 decayRate:(double)arg2 ;
-(double)personalizationValueWithCorrelatedAggregate:(id)arg1 baseline:(id)arg2 decayRate:(double)arg3 baselineClicksMultiplier:(double)arg4 ;
-(double)relativePersonalizationValueWithCorrelatedAggregate:(id)arg1 baseline:(id)arg2 decayFactor:(double)arg3 baselineClicksMultiplier:(double)arg4 ;
-(NSDictionary *)dictionaryRepresentation;
-(BOOL)hasImpressions;
-(double)impressions;
-(double)timestamp;
-(void)setHasImpressions:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setEventCount:(unsigned long long)arg1 ;
-(NSString *)description;
-(double)clicks;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setClicks:(double)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasClicks;
-(void)setHasEventCount:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)hasFeatureKey;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)featureKey;
-(void)setFeatureKey:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)eventCount;
-(void)setTimestamp:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(BOOL)hasEventCount;
-(void)setImpressions:(double)arg1 ;
-(void)setHasClicks:(BOOL)arg1 ;
@end

