/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface ARDaemonMetrics : NSObject {

	unsigned long long _peakMemoryUsage;
	NSObject*<OS_dispatch_queue> _reportingQueue;
	NSMutableDictionary* _activeServiceCountPerClient;
	NSMutableDictionary* _allServicesUsedPerClient;

}
+(id)sharedDaemonMetrics;
-(id)init;
-(void)reportServiceAddedWithName:(id)arg1 clientBundleIdentifier:(id)arg2 ;
-(void)reportServiceRemovedWithName:(id)arg1 clientBundleIdentifier:(id)arg2 ;
-(void)reportMemoryFootprint:(unsigned long long)arg1 ;
@end

