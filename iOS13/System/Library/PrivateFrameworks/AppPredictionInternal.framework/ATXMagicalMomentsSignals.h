/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@class NSDictionary;

@interface ATXMagicalMomentsSignals : NSObject {

	unsigned long long _predictionSource;
	long long _reason;
	NSDictionary* _reasonMetadata;
	double _confidence;
	long long _anchorType;
	unsigned long long _predictionIndex;

}

@property (nonatomic,readonly) unsigned long long predictionSource;              //@synthesize predictionSource=_predictionSource - In the implementation block
@property (nonatomic,readonly) long long reason;                                 //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) NSDictionary * reasonMetadata;                    //@synthesize reasonMetadata=_reasonMetadata - In the implementation block
@property (nonatomic,readonly) double confidence;                                //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,readonly) long long anchorType;                             //@synthesize anchorType=_anchorType - In the implementation block
@property (nonatomic,readonly) unsigned long long predictionIndex;               //@synthesize predictionIndex=_predictionIndex - In the implementation block
-(id)init;
-(long long)reason;
-(double)confidence;
-(NSDictionary *)reasonMetadata;
-(unsigned long long)predictionSource;
-(long long)anchorType;
-(id)initWithPredictionSource:(unsigned long long)arg1 reason:(long long)arg2 reasonMetadata:(id)arg3 confidence:(double)arg4 anchorType:(long long)arg5 index:(unsigned long long)arg6 ;
-(unsigned long long)predictionIndex;
@end

