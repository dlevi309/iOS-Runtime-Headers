/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <TextInputCore/TIUserModelMetricsDescriptor.h>

@class NSString, NSArray;

@interface TIUserModelFeatureDescriptor : TIUserModelMetricsDescriptor {

	long long _discoveryThreshold;
	NSString* _discoveryCounterName;
	NSString* _configString;
	NSArray* _thresholds;

}

@property (nonatomic,readonly) long long discoveryThreshold;                 //@synthesize discoveryThreshold=_discoveryThreshold - In the implementation block
@property (nonatomic,readonly) NSString * discoveryCounterName;              //@synthesize discoveryCounterName=_discoveryCounterName - In the implementation block
@property (nonatomic,readonly) NSString * configString;                      //@synthesize configString=_configString - In the implementation block
@property (nonatomic,readonly) NSArray * thresholds;                         //@synthesize thresholds=_thresholds - In the implementation block
+(id)configureFeatureDescriptors;
-(NSArray *)thresholds;
-(id)initWithFeatureName:(id)arg1 discoveryThreshold:(long long)arg2 discoveryCounterName:(id)arg3 configString:(id)arg4 counterNames:(id)arg5 thresholds:(id)arg6 ;
-(long long)discoveryThreshold;
-(NSString *)discoveryCounterName;
-(NSString *)configString;
@end

