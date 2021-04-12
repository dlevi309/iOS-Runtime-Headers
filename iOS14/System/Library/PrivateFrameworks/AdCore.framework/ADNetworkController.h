/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
*/


@protocol OS_dispatch_queue;
#import <AdCore/AdCore-Structs.h>
@class NSTimer, NSObject;

@interface ADNetworkController : NSObject {

	SCDynamicStoreRef _store;
	NSTimer* _notificationTimer;
	int _networkType;
	SCNetworkReachabilityRef _reachability;
	unsigned _reachabilityFlags;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _canReachTheNetwork;
	BOOL _isUpdating;

}

@property (assign) BOOL canReachTheNetwork;              //@synthesize canReachTheNetwork=_canReachTheNetwork - In the implementation block
@property (assign) BOOL isUpdating;                      //@synthesize isUpdating=_isUpdating - In the implementation block
+(id)sharedNetworkController;
-(int)networkType;
-(BOOL)isUpdating;
-(void)setCanReachTheNetwork:(BOOL)arg1 ;
-(void)start;
-(int)dataIndicatorToConnection:(int)arg1 ;
-(id)getDataContext:(id)arg1 ;
-(void)setIsUpdating:(BOOL)arg1 ;
-(void)_updateStatus:(BOOL)arg1 ;
-(BOOL)canReachTheNetwork;
-(int)cellNetworkType;
-(void)_checkForNetworkAndNotify;
-(void)_checkForNetwork;
@end

