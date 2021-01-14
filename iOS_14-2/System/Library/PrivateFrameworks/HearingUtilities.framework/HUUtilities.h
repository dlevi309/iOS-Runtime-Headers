/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
*/


@protocol OS_dispatch_queue;
#import <HearingUtilities/HearingUtilities-Structs.h>
@class NSDictionary, NSObject;

@interface HUUtilities : NSObject {

	NSDictionary* _pickableRoutes;
	int _wirelessSplitterNotifyToken;
	BOOL _wirelessSplitterEnabled;
	os_unfair_lock_s _routingLock;
	BOOL _takingConnection;
	NSObject*<OS_dispatch_queue> _routingQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> routingQueue;              //@synthesize routingQueue=_routingQueue - In the implementation block
@property (assign,nonatomic) BOOL takingConnection;                                  //@synthesize takingConnection=_takingConnection - In the implementation block
+(id)objectFromXDCObject:(id)arg1 ;
+(id)sharedUtilities;
+(id)XDCObjectFromObject:(id)arg1 ;
-(void)setTakingConnection:(BOOL)arg1 ;
-(void)setRoutingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
-(void)updateHearingFeatureUsage;
-(id)currentPickableAudioRoutes;
-(BOOL)hearingAidRouteAvailable;
-(void)mediaServerDied;
-(void)checkAudioPlayingWithQueue:(id)arg1 andCompletion:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)routingQueue;
-(void)registerNotifications;
-(BOOL)hearingAidStreamSelected;
-(void)clearAudioRoutes;
-(void)addHearingFeatureUsage:(unsigned long long)arg1 ;
-(void)pauseNowPlaying:(BOOL)arg1 withQueue:(id)arg2 andCompletion:(/*^block*/id)arg3 ;
-(BOOL)wirelessSplitterEnabled;
-(void)pickableAudioRoutesDidChange:(id)arg1 ;
-(BOOL)oldRoutes:(id)arg1 equalToNewRoutes:(id)arg2 ;
-(BOOL)liveListenRouteSelected;
-(id)currentPickableAudioRoutesIfExist;
-(BOOL)takingConnection;
-(void)updateWirelessSplitterState;
-(void)dealloc;
@end

