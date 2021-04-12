/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDCloudSyncManagerPipelineTask.h>

@class NSMutableString, NSString;

@interface HDCloudSyncManagerShowTask : HDCloudSyncManagerPipelineTask {

	os_unfair_lock_s _lock;
	NSMutableString* _accumulatedDescription;
	NSString* _cloudDescription;

}

@property (copy) NSString * cloudDescription;              //@synthesize cloudDescription=_cloudDescription - In the implementation block
-(void)didFinishWithSuccess;
-(void)didFailWithErrors:(id)arg1 ;
-(id)pipelineForRepository:(id)arg1 ;
-(id)initWithManager:(id)arg1 context:(id)arg2 accessibilityAssertion:(id)arg3 completion:(/*^block*/id)arg4 ;
-(NSString *)cloudDescription;
-(void)setCloudDescription:(NSString *)arg1 ;
@end

