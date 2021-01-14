/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@class NSDateInterval, REFeatureValue;

@interface REDuetEvent : NSObject {

	NSDateInterval* _interval;
	REFeatureValue* _value;
	double _confidence;

}

@property (nonatomic,readonly) NSDateInterval * interval;              //@synthesize interval=_interval - In the implementation block
@property (nonatomic,readonly) REFeatureValue * value;                 //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) double confidence;                      //@synthesize confidence=_confidence - In the implementation block
+(id)eventWithInterval:(id)arg1 value:(id)arg2 confidence:(double)arg3 ;
-(double)confidence;
-(NSDateInterval *)interval;
-(unsigned long long)hash;
-(REFeatureValue *)value;
-(BOOL)isEqual:(id)arg1 ;
@end

