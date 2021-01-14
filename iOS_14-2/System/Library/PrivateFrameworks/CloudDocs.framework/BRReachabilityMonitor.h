/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
*/


@protocol OS_dispatch_queue;
#import <CloudDocs/CloudDocs-Structs.h>
@class NSHashTable, NSObject;

@interface BRReachabilityMonitor : NSObject {

	NSHashTable* _reachabilityObservers;
	SCNetworkReachabilityRef _reachabilityRef;
	unsigned _reachabilityFlags;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign,nonatomic) unsigned reachabilityFlags;              //@synthesize reachabilityFlags=_reachabilityFlags - In the implementation block
@property (nonatomic,readonly) BOOL isNetworkReachable; 
+(id)sharedReachabilityMonitor;
+(BOOL)isNetworkReachableForFlags:(unsigned)arg1 ;
+(unsigned)getReachabilityFlagsByCheckingNetwork;
-(BOOL)isNetworkReachable;
-(void)addObserver:(id)arg1 ;
-(id)init;
-(void)setReachabilityFlags:(unsigned)arg1 ;
-(unsigned)reachabilityFlags;
-(void)removeObserver:(id)arg1 ;
-(void)invalidate;
-(void)dealloc;
@end

