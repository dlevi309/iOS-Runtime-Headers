/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
*/

#import <libobjc.A.dylib/PETLoggingOutlet.h>

@class NSString;

@interface PETAggdLoggingOutlet : NSObject <PETLoggingOutlet>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)logDoubleValue:(double)arg1 forEvent:(id)arg2 featureId:(id)arg3 stringifiedProperties:(id)arg4 metaData:(id)arg5 ;
-(void)logErrorForEvent:(id)arg1 featureId:(id)arg2 reason:(id)arg3 ;
-(void)setUnsignedIntegerValue:(unsigned long long)arg1 forEvent:(id)arg2 featureId:(id)arg3 stringifiedProperties:(id)arg4 metaData:(id)arg5 ;
-(void)logUnsignedIntegerValue:(unsigned long long)arg1 forEvent:(id)arg2 featureId:(id)arg3 stringifiedProperties:(id)arg4 metaData:(id)arg5 ;
@end

