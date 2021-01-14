/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <libobjc.A.dylib/HMFLogging.h>

@class HMFUnfairLock, NSMutableArray, NSString;

@interface HMDMemoryUtilizationTracker : NSObject <HMFLogging> {

	HMFUnfairLock* _lock;
	NSMutableArray* _memoryUseSnapshots;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)memoryTracker;
-(id)init;
-(void)log;
-(id)dumpState;
-(NSString *)description;
-(void)reset;
-(id)__init;
-(id)snapshots;
-(void)trackMemoryUsageWithReason:(id)arg1 ;
@end

