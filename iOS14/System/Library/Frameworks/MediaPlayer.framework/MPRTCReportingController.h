/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <libobjc.A.dylib/ICEnvironmentMonitorObserver.h>

@class MPAVItem, MPQueueFeeder, NSNumber, MPRTCReportingSessionSummaryEvent, NSMutableDictionary, NSString, MPAVController;

@interface MPRTCReportingController : NSObject <ICEnvironmentMonitorObserver> {

	long long _currentInterfaceType;
	MPAVItem* _currentItem;
	BOOL _isReloadingWithPlaybackContext;
	MPQueueFeeder* _pendingFailureQueueFeeder;
	NSNumber* _tracklistStartUptime;
	MPRTCReportingSessionSummaryEvent* _tracklistSummaryEvent;
	NSMutableDictionary* _uniqueIdentifierToReportingSession;
	NSMutableDictionary* _uniqueIdentifierToSummaryEvent;
	int _clientType;
	NSString* _clientName;
	long long _clientVersion;
	MPAVController* _player;

}

@property (nonatomic,copy,readonly) NSString * clientName;                  //@synthesize clientName=_clientName - In the implementation block
@property (nonatomic,readonly) int clientType;                              //@synthesize clientType=_clientType - In the implementation block
@property (nonatomic,readonly) long long clientVersion;                     //@synthesize clientVersion=_clientVersion - In the implementation block
@property (nonatomic,__weak,readonly) MPAVController * player;              //@synthesize player=_player - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newHierarchyTokenFromParentToken:(id)arg1 ;
+(long long)defaultClientVersion;
-(MPAVController *)player;
-(void)_completeSetupForReportingSession:(id)arg1 avItem:(id)arg2 ;
-(void)_handleDeallocationForUniqueIdentifier:(id)arg1 ;
-(id)_newReportingSession;
-(NSString *)clientName;
-(long long)clientVersion;
-(BOOL)_isAVItemReadyForReportingSessionSetupCompletion:(id)arg1 ;
-(void)_avControllerItemWillChangeNotification:(id)arg1 ;
-(void)_avItemTypeDidChangeNotification:(id)arg1 ;
-(void)_avControllerPlaylistManagerFailedToQueueNotification:(id)arg1 ;
-(void)_avControllerDidReloadWithPlaybackContextNotification:(id)arg1 ;
-(id)initWithPlayer:(id)arg1 clientName:(id)arg2 clientType:(int)arg3 clientVersion:(long long)arg4 ;
-(void)_avControllerWillReloadWithPlaybackContextNotification:(id)arg1 ;
-(void)_configureBaseEventPropertiesForEvent:(id)arg1 ;
-(void)_setPerceivedTotalStartupTimeForItem:(id)arg1 withSummaryEvent:(id)arg2 ;
-(id)_reportingSessionForAVItem:(id)arg1 ;
-(BOOL)_isAVItemReadyForReportingSessionInitialization:(id)arg1 ;
-(void)_networkTypeDidChangeNotification:(id)arg1 ;
-(void)_avItemAssetLoadedNotification:(id)arg1 ;
-(id)_uniqueIdentifierForAVItem:(id)arg1 ;
-(void)_configureStartupStateForSummaryEvent:(id)arg1 withItem:(id)arg2 ;
-(int)clientType;
-(void)_avControllerBufferingStateDidChangeNotification:(id)arg1 ;
-(void)_avItemSecureKeyDeliveryRequestDidFinishNotification:(id)arg1 ;
-(id)_preparedSummaryEventForAVItem:(id)arg1 ;
-(void)_completeSetupForReportingSession:(id)arg1 avItem:(id)arg2 fallbackQueueFeeder:(id)arg3 ;
-(void)_initializeReportingSession:(id)arg1 forAVItem:(id)arg2 ;
-(void)dealloc;
@end

