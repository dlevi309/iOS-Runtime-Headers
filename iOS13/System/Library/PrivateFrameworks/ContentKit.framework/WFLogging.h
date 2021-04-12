/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/


@class NSMutableSet;

@interface WFLogging : NSObject {

	NSMutableSet* _backends;

}
+(void)logWorkflow:(id)arg1 didFinishRunningWithError:(id)arg2 cancelled:(BOOL)arg3 runClass:(Class)arg4 lastAction:(id)arg5 ;
+(id)sharedInstance;
+(void)logEvent:(id)arg1 ;
+(void)logEvent:(id)arg1 withObjects:(id)arg2 ;
+(void)logEvent:(id)arg1 withObject:(id)arg2 ;
-(id)init;
-(void)registerBackend:(id)arg1 ;
-(void)logEvent:(id)arg1 withProperties:(id)arg2 ;
-(void)registerAllContentKitBackends;
@end

