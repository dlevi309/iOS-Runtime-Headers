/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/


@class NSArray, NSNumber;

@interface AXShotflowConfiguration : NSObject {

	NSArray* _filterThresholds;
	NSNumber* _networkThreshold;
	NSNumber* _nmsThreshold;
	NSArray* _defaultBoxesSidesNormalized;
	NSArray* _ratios;

}

@property (nonatomic,readonly) NSArray * filterThresholds;                         //@synthesize filterThresholds=_filterThresholds - In the implementation block
@property (nonatomic,readonly) NSNumber * networkThreshold;                        //@synthesize networkThreshold=_networkThreshold - In the implementation block
@property (nonatomic,readonly) NSNumber * nmsThreshold;                            //@synthesize nmsThreshold=_nmsThreshold - In the implementation block
@property (nonatomic,readonly) NSArray * defaultBoxesSidesNormalized;              //@synthesize defaultBoxesSidesNormalized=_defaultBoxesSidesNormalized - In the implementation block
@property (nonatomic,readonly) NSArray * ratios;                                   //@synthesize ratios=_ratios - In the implementation block
-(id)initWithURL:(id)arg1 ;
-(NSNumber *)nmsThreshold;
-(id)description;
-(NSArray *)ratios;
-(NSNumber *)networkThreshold;
-(NSArray *)defaultBoxesSidesNormalized;
-(NSArray *)filterThresholds;
@end

