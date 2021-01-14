/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HMFoundation/HMFObject.h>

@class NSDictionary, NSNumber;

@interface HMINMSConfiguration : HMFObject {

	NSDictionary* _thresholdWithLabels;
	NSDictionary* _metricWithLabels;
	NSNumber* _thresholdDefault;
	NSNumber* _metricDefault;

}

@property (readonly) NSDictionary * thresholdWithLabels;              //@synthesize thresholdWithLabels=_thresholdWithLabels - In the implementation block
@property (readonly) NSDictionary * metricWithLabels;                 //@synthesize metricWithLabels=_metricWithLabels - In the implementation block
@property (readonly) NSNumber * thresholdDefault;                     //@synthesize thresholdDefault=_thresholdDefault - In the implementation block
@property (readonly) NSNumber * metricDefault;                        //@synthesize metricDefault=_metricDefault - In the implementation block
-(id)initWithThresholdWithLabels:(id)arg1 metricWithLabels:(id)arg2 thresholdDefault:(id)arg3 metricDefault:(id)arg4 ;
-(NSDictionary *)thresholdWithLabels;
-(NSNumber *)thresholdDefault;
-(NSDictionary *)metricWithLabels;
-(NSNumber *)metricDefault;
-(id)thresholdForLabel:(id)arg1 ;
-(long long)metricForLabel:(id)arg1 ;
@end

