/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)start;
-(int)networkType;
-(BOOL)isUpdating;
-(void)_updateStatus:(BOOL)arg1 ;
-(void)setIsUpdating:(BOOL)arg1 ;
-(BOOL)canReachTheNetwork;
-(void)setCanReachTheNetwork:(BOOL)arg1 ;
-(void)_checkForNetworkAndNotify;
-(id)getDataContext:(id)arg1 ;
-(int)dataIndicatorToConnection:(int)arg1 ;
-(int)cellNetworkType;
-(void)_checkForNetwork;
@end

