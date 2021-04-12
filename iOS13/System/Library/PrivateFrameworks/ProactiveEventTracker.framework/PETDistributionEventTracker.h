/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
*/

#import <ProactiveEventTracker/PETEventTracker.h>

@class NSString;

@interface PETDistributionEventTracker : PETEventTracker {

	NSString* _event;

}

@property (nonatomic,readonly) NSString * event;              //@synthesize event=_event - In the implementation block
-(NSString *)event;
-(id)initWithFeatureId:(id)arg1 event:(id)arg2 registerProperties:(id)arg3 ;
-(void)trackEventWithPropertyValues:(id)arg1 value:(double)arg2 ;
-(void)_logValue:(id)arg1 forEvent:(id)arg2 stringifiedProperties:(id)arg3 metaData:(id)arg4 ;
-(id)initWithFeatureId:(id)arg1 event:(id)arg2 registerProperties:(id)arg3 propertySubsets:(id)arg4 ;
@end

