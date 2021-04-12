/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
*/


@protocol DDSReachabilityObserverDelegate, OS_dispatch_queue;
#import <DataDeliveryServices/DataDeliveryServices-Structs.h>
@class NSObject;

@interface DDSReachabilityObserver : NSObject {

	BOOL _reachable;
	BOOL _isInternetReachable;
	id<DDSReachabilityObserverDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	SCNetworkReachabilityRef _reachabilityRef;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                        //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) SCNetworkReachabilityRef reachabilityRef;                //@synthesize reachabilityRef=_reachabilityRef - In the implementation block
@property (assign,nonatomic) BOOL isInternetReachable;                                  //@synthesize isInternetReachable=_isInternetReachable - In the implementation block
@property (nonatomic,retain) id<DDSReachabilityObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL reachable;                                          //@synthesize reachable=_reachable - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<DDSReachabilityObserverDelegate>)delegate;
-(void)setDelegate:(id<DDSReachabilityObserverDelegate>)arg1 ;
-(SCNetworkReachabilityRef)reachabilityRef;
-(void)reachabilityDidChange:(BOOL)arg1 ;
-(id)serverURL;
-(BOOL)isInternetReachable;
-(BOOL)reachable;
-(void)queryInitialState;
-(void)setIsInternetReachable:(BOOL)arg1 ;
@end

