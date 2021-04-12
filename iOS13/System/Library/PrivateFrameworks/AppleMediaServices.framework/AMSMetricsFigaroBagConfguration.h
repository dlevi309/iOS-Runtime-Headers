/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@protocol OS_dispatch_queue;
@class NSArray, NSDictionary, AMSMetricsFigaroEventModifier, NSObject;

@interface AMSMetricsFigaroBagConfguration : NSObject {

	NSArray* _overrides;
	NSDictionary* _metricsDictionary;
	AMSMetricsFigaroEventModifier* _defaultModifier;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSDictionary * metricsDictionary;                             //@synthesize metricsDictionary=_metricsDictionary - In the implementation block
@property (nonatomic,readonly) NSArray * overrides;                                          //@synthesize overrides=_overrides - In the implementation block
@property (nonatomic,readonly) AMSMetricsFigaroEventModifier * defaultModifier;              //@synthesize defaultModifier=_defaultModifier - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                           //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) double flushInterval; 
+(id)configurationWithBag:(id)arg1 error:(id*)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSArray *)overrides;
-(NSDictionary *)metricsDictionary;
-(double)flushInterval;
-(id)initWithMetricsDictionary:(id)arg1 ;
-(id)_generateModifiersIfNeeded;
-(AMSMetricsFigaroEventModifier *)defaultModifier;
-(void)prepareForFlush;
-(id)modifierForEvent:(id)arg1 ;
@end

