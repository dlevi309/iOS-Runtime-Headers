/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(REFeatureValue *)value;
-(NSDateInterval *)interval;
-(double)confidence;
@end

