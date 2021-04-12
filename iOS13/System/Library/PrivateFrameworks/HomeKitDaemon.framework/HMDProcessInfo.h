/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMFLocking, OS_dispatch_queue;
@class HMDApplicationInfo, HMFLocationAuthorization, NSArray, NSObject, NSHashTable, NSString;

@interface HMDProcessInfo : HMFObject <HMFLogging> {

	id<HMFLocking> _lock;
	BOOL _viewService;
	int _pid;
	unsigned long long _state;
	HMDApplicationInfo* _appInfo;
	HMFLocationAuthorization* _locationAuthorization;
	NSArray* _runningReasons;
	NSObject*<OS_dispatch_queue> _xpcQueue;
	NSHashTable* _connectionProxies;

}

@property (nonatomic,readonly) int pid;                                                                                  //@synthesize pid=_pid - In the implementation block
@property (nonatomic,retain) NSArray * runningReasons;                                                                   //@synthesize runningReasons=_runningReasons - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                                                   //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> xpcQueue;                                                    //@synthesize xpcQueue=_xpcQueue - In the implementation block
@property (nonatomic,readonly) NSHashTable * connectionProxies;                                                          //@synthesize connectionProxies=_connectionProxies - In the implementation block
@property (getter=isViewService,nonatomic,readonly) BOOL viewService;                                                    //@synthesize viewService=_viewService - In the implementation block
@property (getter=isForegrounded,nonatomic,readonly) BOOL foreground; 
@property (getter=isBackgroundUpgradedToForeground,nonatomic,readonly) BOOL backgroundUpgradedToForeground; 
@property (getter=isBackgrounded,nonatomic,readonly) BOOL background; 
@property (getter=isSuspended,nonatomic,readonly) BOOL suspended; 
@property (getter=isTerminated,nonatomic,readonly) BOOL terminated; 
@property (nonatomic,__weak,readonly) HMDApplicationInfo * appInfo;                                                      //@synthesize appInfo=_appInfo - In the implementation block
@property (readonly) HMFLocationAuthorization * locationAuthorization;                                                   //@synthesize locationAuthorization=_locationAuthorization - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)init;
-(NSString *)description;
-(BOOL)isSuspended;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(int)pid;
-(void)activate;
-(void)deactivate;
-(NSObject*<OS_dispatch_queue>)xpcQueue;
-(BOOL)isBackgrounded;
-(id)logIdentifier;
-(id)_activeRequestIdentifiers;
-(HMDApplicationInfo *)appInfo;
-(HMFLocationAuthorization *)locationAuthorization;
-(BOOL)isForegrounded;
-(void)initiateRefresh;
-(NSHashTable *)connectionProxies;
-(BOOL)isTerminated;
-(void)setRunningReasons:(NSArray *)arg1 ;
-(NSArray *)runningReasons;
-(BOOL)isBackgroundUpgradedToForeground;
-(id)initWithConnectionProxy:(id)arg1 application:(id)arg2 processId:(int)arg3 xpcQueue:(id)arg4 ;
-(void)addConnectionProxy:(id)arg1 ;
-(void)removeConnectionProxy:(id)arg1 ;
-(unsigned long long)proxyCount;
-(BOOL)isViewService;
@end

