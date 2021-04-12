/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveMagicalMoments.framework/ProactiveMagicalMoments
*/


@class NSString, NSDictionary;

@interface PMMPredictionItem : NSObject {

	NSString* _bundleId;
	unsigned long long _predictionSource;
	long long _reason;
	NSDictionary* _reasonMetadata;
	long long _anchorType;
	double _confidence;

}

@property (nonatomic,readonly) NSString * bundleId;                              //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,readonly) unsigned long long predictionSource;              //@synthesize predictionSource=_predictionSource - In the implementation block
@property (nonatomic,readonly) long long reason;                                 //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) NSDictionary * reasonMetadata;                    //@synthesize reasonMetadata=_reasonMetadata - In the implementation block
@property (nonatomic,readonly) long long anchorType;                             //@synthesize anchorType=_anchorType - In the implementation block
@property (nonatomic,readonly) double confidence;                                //@synthesize confidence=_confidence - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)reason;
-(double)confidence;
-(NSString *)bundleId;
-(NSDictionary *)reasonMetadata;
-(id)initWithBundleId:(id)arg1 predictionSource:(unsigned long long)arg2 reason:(long long)arg3 reasonMetadata:(id)arg4 anchorType:(long long)arg5 confidence:(double)arg6 ;
-(BOOL)isEqualToPredictionItem:(id)arg1 ;
-(unsigned long long)predictionSource;
-(long long)anchorType;
@end

