/*
* Generated on Monday, March 1, 2021 at 2:32:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/FCPersonalizationAggregate.h>
#import <libobjc.A.dylib/FCMutablePersonalizationAggregate.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate;

@interface NTPBPersonalizationAggregate : PBCodable <FCPersonalizationAggregate, FCMutablePersonalizationAggregate, NSCopying> {

	double _clicks;
	unsigned long long _eventCount;
	double _impressions;
	unsigned long long _timestamp;
	NSString* _featureKey;
	SCD_Struct_NT5 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * featureKey; 
@property (nonatomic,readonly) double clicks; 
@property (nonatomic,readonly) double impressions; 
@property (nonatomic,readonly) unsigned long long eventCount; 
@property (nonatomic,readonly) NSDate * lastModified; 
@property (nonatomic,readonly) double confidence; 
@property (assign,nonatomic) double timestamp; 
@property (nonatomic,readonly) BOOL hasFeatureKey; 
@property (nonatomic,retain) NSString * featureKey;                        //@synthesize featureKey=_featureKey - In the implementation block
@property (assign,nonatomic) BOOL hasClicks; 
@property (assign,nonatomic) double clicks;                                //@synthesize clicks=_clicks - In the implementation block
@property (assign,nonatomic) BOOL hasImpressions; 
@property (assign,nonatomic) double impressions;                           //@synthesize impressions=_impressions - In the implementation block
@property (assign,nonatomic) BOOL hasEventCount; 
@property (assign,nonatomic) unsigned long long eventCount;                //@synthesize eventCount=_eventCount - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                 //@synthesize timestamp=_timestamp - In the implementation block
-(double)confidence;
-(NSDate *)lastModified;
-(double)personalizationValueWithBaseline:(id)arg1 decayRate:(double)arg2 ;
-(double)personalizationValueWithCorrelatedAggregate:(id)arg1 baseline:(id)arg2 decayRate:(double)arg3 baselineClicksMultiplier:(double)arg4 ;
-(double)relativePersonalizationValueWithCorrelatedAggregate:(id)arg1 baseline:(id)arg2 decayFactor:(double)arg3 baselineClicksMultiplier:(double)arg4 ;
-(double)personalizationValueWithBaseline:(id)arg1 decayRate:(double)arg2 baselineClicksMultiplier:(double)arg3 ;
-(double)_personalizationValueWithBaselineClicks:(double)arg1 baselineImpressions:(double)arg2 decayRate:(double)arg3 baselineClicksMultiplier:(double)arg4 ;
-(double)powerWithDecayFactor:(double)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(double)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(double)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)eventCount;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(double)impressions;
-(void)setImpressions:(double)arg1 ;
-(NSString *)featureKey;
-(void)setFeatureKey:(NSString *)arg1 ;
-(double)clicks;
-(void)setClicks:(double)arg1 ;
-(void)setEventCount:(unsigned long long)arg1 ;
-(BOOL)hasFeatureKey;
-(void)setHasClicks:(BOOL)arg1 ;
-(BOOL)hasClicks;
-(void)setHasImpressions:(BOOL)arg1 ;
-(BOOL)hasImpressions;
-(void)setHasEventCount:(BOOL)arg1 ;
-(BOOL)hasEventCount;
@end

