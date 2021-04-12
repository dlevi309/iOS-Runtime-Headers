/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <CoreHAP/HAPAccessoryServerBrowser.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HAPPowerManagerProtocol.h>
#import <libobjc.A.dylib/HAPWACAccessoryBrowserDelegate.h>
#import <libobjc.A.dylib/HAPAccessoryServerNotification.h>

@protocol HAPAccessoryServerBrowserDelegate, OS_dispatch_queue;
@class NSMutableSet, NSObject, HMFTimer, HAPWACAccessoryBrowser, HAPPowerManager, NSString, NSArray;

@interface HAPAccessoryServerBrowserIP : HAPAccessoryServerBrowser <HMFTimerDelegate, HAPPowerManagerProtocol, HAPWACAccessoryBrowserDelegate, HAPAccessoryServerNotification> {

	BonjourBrowserRef _bonjourBrowser;
	NSMutableSet* _discoveredAccessoryServers;
	id<HAPAccessoryServerBrowserDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSMutableSet* _pendingBonjourEvents;
	HMFTimer* _bonjourEventTimer;
	HAPWACAccessoryBrowser* _hapWACBrowser;
	HAPPowerManager* _powerManager;

}

@property (nonatomic,retain) NSMutableSet * discoveredAccessoryServers;                          //@synthesize discoveredAccessoryServers=_discoveredAccessoryServers - In the implementation block
@property (assign,nonatomic,__weak) id<HAPAccessoryServerBrowserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;                         //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,retain) NSMutableSet * pendingBonjourEvents;                                //@synthesize pendingBonjourEvents=_pendingBonjourEvents - In the implementation block
@property (nonatomic,retain) HMFTimer * bonjourEventTimer;                                       //@synthesize bonjourEventTimer=_bonjourEventTimer - In the implementation block
@property (nonatomic,retain) HAPWACAccessoryBrowser * hapWACBrowser;                             //@synthesize hapWACBrowser=_hapWACBrowser - In the implementation block
@property (nonatomic,retain) HAPPowerManager * powerManager;                                     //@synthesize powerManager=_powerManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
-(id)initWithQueue:(id)arg1 ;
-(void)timerDidFire:(id)arg1 ;
-(void)_invalidateAccessoryServers:(BOOL)arg1 ;
-(int)_processPendingBonjourEvent:(id)arg1 ;
-(void)processPendingBonjourRemoveEvents:(id)arg1 ;
-(id<HAPAccessoryServerBrowserDelegate>)delegate;
-(void)_handleBonjourAddOrUpdateWithEventInfo:(id)arg1 ;
-(long long)linkType;
-(void)setBonjourEventTimer:(HMFTimer *)arg1 ;
-(void)wacBrowser:(id)arg1 didFindUnconfiguredPairedHAPWACAccessory:(id)arg2 ;
-(void)_handleBonjourRemoveWithEventInfo:(id)arg1 ;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(void)matchAccessoryServerWithSetupID:(id)arg1 serverIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)wacBrowser:(id)arg1 didFindHAPWACAccessory:(id)arg2 ;
-(void)notifyDelegatesOfWACCompletionWithIdentifier:(id)arg1 error:(id)arg2 ;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setHapWACBrowser:(HAPWACAccessoryBrowser *)arg1 ;
-(void)setDelegate:(id<HAPAccessoryServerBrowserDelegate>)arg1 ;
-(void)_timerDidExpire:(id)arg1 ;
-(void)wacBrowser:(id)arg1 didRemoveHAPWACAccessory:(id)arg2 ;
-(void)setDiscoveredAccessoryServers:(NSMutableSet *)arg1 ;
-(id)visible2Pt4Networks;
-(void)startDiscoveringWACAccessoryServerWithIdentifier:(id)arg1 ;
-(NSMutableSet *)discoveredAccessoryServers;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)_matchAccessoryServerWithSetupID:(id)arg1 serverIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)stopDiscoveringWACAccessoryServersWithInvalidation:(BOOL)arg1 ;
-(int)_purgePendingBonjourEvents:(id)arg1 withProcessing:(BOOL)arg2 ;
-(void)setPowerManager:(HAPPowerManager *)arg1 ;
-(HAPPowerManager *)powerManager;
-(void)indicateNotificationFromServer:(id)arg1 notifyType:(unsigned long long)arg2 withDictionary:(id)arg3 ;
-(HMFTimer *)bonjourEventTimer;
-(NSMutableSet *)pendingBonjourEvents;
-(void)devicePowerStateChanged:(unsigned long long)arg1 ;
-(void)_handleBonjourBrowserEvent:(unsigned)arg1 eventInfo:(id)arg2 ;
-(int)_server:(id*)arg1 forBonjourDevice:(id)arg2 ;
-(void)_invalidateAndRemoveAccessoryServer:(id)arg1 ;
-(void)discoverAccessoryServerWithIdentifier:(id)arg1 ;
-(void)_doReachabilityUpdateForServer:(id)arg1 withDictionary:(id)arg2 ;
-(void)unitTest_handleBonjourBrowserEvent:(unsigned)arg1 eventInfo:(id)arg2 ;
-(void)_pendBonjourEvent:(id)arg1 ;
-(BOOL)_delegateRespondsToSelector:(SEL)arg1 ;
-(void)_server:(id*)arg1 forHAPWACAccessory:(id)arg2 ;
-(void)stopDiscoveringAccessoryServers;
-(void)_invalidateWACServers;
-(void)startDiscoveringAirPlayAccessoriesWithDelegate:(id)arg1 ;
-(void)setPendingBonjourEvents:(NSMutableSet *)arg1 ;
-(void)_pendBonjourRemoveEvent:(id)arg1 ;
-(id)wacBrowser;
-(void)startDiscoveringWACAccessoryServers;
-(HAPWACAccessoryBrowser *)hapWACBrowser;
-(int)_initializeAndStartBonjourBrowser;
-(void)startDiscoveringAccessoryServers;
-(void)_setReachability:(BOOL)arg1 forServer:(id)arg2 ;
-(id)serverWithIdentifier:(id)arg1 ;
@end

