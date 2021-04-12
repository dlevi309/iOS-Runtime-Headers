/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)isNetworkReachableForFlags:(unsigned)arg1 ;
+(id)sharedReachabilityMonitor;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(BOOL)isNetworkReachable;
-(void)setReachabilityFlags:(unsigned)arg1 ;
-(unsigned)reachabilityFlags;
@end

