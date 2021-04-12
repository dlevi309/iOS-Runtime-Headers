/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HMDSnapshotRequestHandlerProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, NSMutableDictionary;

@interface HMDSnapshotCacheRequestHandler : HMFObject <HMFLogging, HMFTimerDelegate, HMDSnapshotRequestHandlerProtocol> {

	NSObject*<OS_dispatch_queue> _workQueue;
	NSString* _logString;
	NSMutableDictionary* _snapshotCacheMap;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) NSString * logString;                                //@synthesize logString=_logString - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * snapshotCacheMap;              //@synthesize snapshotCacheMap=_snapshotCacheMap - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)logIdentifier;
-(void)timerDidFire:(id)arg1 ;
-(NSString *)logString;
-(void)requestSnapshot:(id)arg1 streamingTierType:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithWorkQueue:(id)arg1 logID:(id)arg2 ;
-(void)addSnapshotFileToCache:(id)arg1 ;
-(void)removeSnapshotFileToCache:(id)arg1 error:(id)arg2 ;
-(void)setSnapshotFileToCache:(id)arg1 proactiveSessionID:(id)arg2 ;
-(NSMutableDictionary *)snapshotCacheMap;
@end

