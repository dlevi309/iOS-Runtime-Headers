/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject;

@interface HDOperation : NSOperation {

	NSMutableSet* _dependenciesForCancelationPolicyAllMustBeCanceled;
	NSMutableSet* _dependenciesForCancelationPolicyAnyCancels;
	NSObject*<OS_dispatch_queue> _dependencyQueue;

}
-(id)init;
-(void)start;
-(id)dependencies;
-(void)addDependency:(id)arg1 ;
-(void)removeDependency:(id)arg1 ;
-(void)_evaluateDependencyCancelations;
-(void)_dependencyQueue_addDependency:(id)arg1 ;
-(id)_dependencyQueue_dependencies;
-(void)_dependencyQueue_removeDependency:(id)arg1 ;
-(void)addDependency:(id)arg1 cancelationPolicy:(long long)arg2 ;
@end

