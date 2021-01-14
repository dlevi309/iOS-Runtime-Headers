/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)configurationWithBag:(id)arg1 error:(id*)arg2 ;
-(id)_generateModifiersIfNeeded;
-(id)modifierForEvent:(id)arg1 ;
-(NSDictionary *)metricsDictionary;
-(id)initWithMetricsDictionary:(id)arg1 ;
-(NSArray *)overrides;
-(AMSMetricsFigaroEventModifier *)defaultModifier;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)prepareForFlush;
@end

