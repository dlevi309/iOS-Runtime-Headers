/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
*/

#import <ProactiveEventTracker/PETEventTracker.h>

@class NSString;

@interface PETScalarEventTracker : PETEventTracker {

	NSString* _event;

}

@property (nonatomic,readonly) NSString * event;              //@synthesize event=_event - In the implementation block
-(void)_logValue:(id)arg1 forEvent:(id)arg2 stringifiedProperties:(id)arg3 metaData:(id)arg4 ;
-(void)trackEventWithPropertyValues:(id)arg1 value:(unsigned long long)arg2 ;
-(id)initWithFeatureId:(id)arg1 event:(id)arg2 registerProperties:(id)arg3 propertySubsets:(id)arg4 ;
-(id)initWithFeatureId:(id)arg1 event:(id)arg2 registerProperties:(id)arg3 ;
-(NSString *)event;
-(void)trackEventWithPropertyValues:(id)arg1 setValue:(unsigned long long)arg2 ;
-(void)_setValue:(id)arg1 forEvent:(id)arg2 stringifiedProperties:(id)arg3 metaData:(id)arg4 ;
-(void)trackEventWithPropertyValues:(id)arg1 ;
@end

