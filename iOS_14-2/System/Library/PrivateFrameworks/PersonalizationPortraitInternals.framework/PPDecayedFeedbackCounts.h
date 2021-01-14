/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSDate, NSSet;

@interface PPDecayedFeedbackCounts : NSObject <MLFeatureProvider> {

	double _engagedExplicitly;
	double _engagedImplicitly;
	double _rejectedExplicitly;
	double _rejectedImplicitly;
	NSDate* _latestDate;

}

@property (nonatomic,readonly) double engagedExplicitly;               //@synthesize engagedExplicitly=_engagedExplicitly - In the implementation block
@property (nonatomic,readonly) double engagedImplicitly;               //@synthesize engagedImplicitly=_engagedImplicitly - In the implementation block
@property (nonatomic,readonly) double rejectedExplicitly;              //@synthesize rejectedExplicitly=_rejectedExplicitly - In the implementation block
@property (nonatomic,readonly) double rejectedImplicitly;              //@synthesize rejectedImplicitly=_rejectedImplicitly - In the implementation block
@property (nonatomic,readonly) NSDate * latestDate;                    //@synthesize latestDate=_latestDate - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(double)engagedExplicitly;
-(double)rejectedExplicitly;
-(double)rejectedImplicitly;
-(id)toDictionary;
-(id)initWithLatestDate:(id)arg1 engagedExplicitly:(double)arg2 engagedImplicitly:(double)arg3 rejectedExplicitly:(double)arg4 rejectedImplicitly:(double)arg5 ;
-(NSDate *)latestDate;
-(double)engagedImplicitly;
@end

