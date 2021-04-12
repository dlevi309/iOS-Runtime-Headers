/*
* Generated on Thursday, January 14, 2021 at 2:29:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
*/

#import <libobjc.A.dylib/ANHomeManagerDelegate.h>
#import <libobjc.A.dylib/ANRapportConnectionDeviceDelegate.h>

@protocol ANAnnounceReachabilityManagerDelegate, ANRapportConnectionProvider, OS_dispatch_queue, OS_os_log;
@class NSObject, NSMutableDictionary, NSArray, NSString;

@interface ANAnnounceReachabilityManager : NSObject <ANHomeManagerDelegate, ANRapportConnectionDeviceDelegate> {

	BOOL _started;
	id<ANAnnounceReachabilityManagerDelegate> _delegate;
	id<ANRapportConnectionProvider> _rapportConnection;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableDictionary* _homeReachability;
	NSObject*<OS_os_log> _log;

}

@property (nonatomic,readonly) id<ANRapportConnectionProvider> rapportConnection;                    //@synthesize rapportConnection=_rapportConnection - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serialQueue;                             //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * homeReachability;                               //@synthesize homeReachability=_homeReachability - In the implementation block
@property (assign,nonatomic) BOOL started;                                                           //@synthesize started=_started - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_log> log;                                             //@synthesize log=_log - In the implementation block
@property (nonatomic,readonly) NSArray * monitoredHomes; 
@property (assign,nonatomic,__weak) id<ANAnnounceReachabilityManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)home:(id)arg1 didAddAccessory:(id)arg2 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(NSObject*<OS_os_log>)log;
-(id<ANAnnounceReachabilityManagerDelegate>)delegate;
-(BOOL)started;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)stop;
-(void)setDelegate:(id<ANAnnounceReachabilityManagerDelegate>)arg1 ;
-(void)homeDidUpdateAccessControlForCurrentUser:(id)arg1 ;
-(void)home:(id)arg1 didRemoveAccessory:(id)arg2 ;
-(void)accessoryDidUpdateControllable:(id)arg1 ;
-(void)setStarted:(BOOL)arg1 ;
-(void)dealloc;
-(void)didAddHome:(id)arg1 ;
-(void)didRemoveHome:(id)arg1 ;
-(unsigned long long)reachabilityForHome:(id)arg1 ;
-(unsigned long long)reachabilityForRoom:(id)arg1 inHome:(id)arg2 ;
-(NSArray *)monitoredHomes;
-(id)monitoredRoomsForHome:(id)arg1 ;
-(id<ANRapportConnectionProvider>)rapportConnection;
-(void)_initializeReachabilityStatus;
-(void)_rapportActivationHandler:(id)arg1 ;
-(void)_reevaluateHomeKitReachabilityForHome:(id)arg1 ;
-(unsigned long long)_reachabilityForHome:(id)arg1 ;
-(unsigned long long)_reachabilityForRoom:(id)arg1 inHome:(id)arg2 ;
-(NSMutableDictionary *)homeReachability;
-(unsigned long long)_filteredReachabilityLevelFromReachabilityLevel:(unsigned long long)arg1 forHome:(id)arg2 ;
-(void)_updateReachabilityLevelWithReachabilityLevel:(unsigned long long)arg1 forAccessory:(id)arg2 operation:(unsigned long long)arg3 ;
-(void)_notifyClientsReachabilityChangeForRoom:(id)arg1 inHome:(id)arg2 toLevel:(unsigned long long)arg3 ;
-(void)_notifyClientsReachabilityChangeForHome:(id)arg1 toLevel:(unsigned long long)arg2 ;
-(void)connection:(id)arg1 didFindDevice:(id)arg2 ;
-(void)connection:(id)arg1 didLoseDevice:(id)arg2 ;
@end

