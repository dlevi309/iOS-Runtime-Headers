/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <CoreHAP/HAPAccessoryServerBrowser.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HAPWACAccessoryBrowserDelegate.h>

@protocol HAPAccessoryServerBrowserDelegate, OS_dispatch_queue;
@class NSArray, NSMutableSet, NSObject, HMFTimer, HAPWACAccessoryBrowser, NSString;

@interface HAPAccessoryServerBrowserIP : HAPAccessoryServerBrowser <HMFTimerDelegate, HAPWACAccessoryBrowserDelegate> {

	BonjourBrowserRef _bonjourBrowser;
	NSArray* _scanResults;
	NSMutableSet* _discoveredAccessoryServers;
	id<HAPAccessoryServerBrowserDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSMutableSet* _pendingBonjourEvents;
	HMFTimer* _bonjourEventTimer;
	HAPWACAccessoryBrowser* _hapWACBrowser;

}

@property (nonatomic,retain) NSMutableSet * discoveredAccessoryServers;                          //@synthesize discoveredAccessoryServers=_discoveredAccessoryServers - In the implementation block
@property (assign,nonatomic,__weak) id<HAPAccessoryServerBrowserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;                         //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,retain) NSMutableSet * pendingBonjourEvents;                                //@synthesize pendingBonjourEvents=_pendingBonjourEvents - In the implementation block
@property (nonatomic,retain) HMFTimer * bonjourEventTimer;                                       //@synthesize bonjourEventTimer=_bonjourEventTimer - In the implementation block
@property (nonatomic,retain) HAPWACAccessoryBrowser * hapWACBrowser;                             //@synthesize hapWACBrowser=_hapWACBrowser - In the implementation block
@property (nonatomic,copy) NSArray * scanResults;                                                //@synthesize scanResults=_scanResults - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<HAPAccessoryServerBrowserDelegate>)delegate;
-(void)setDelegate:(id<HAPAccessoryServerBrowserDelegate>)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(long long)linkType;
-(void)timerDidFire:(id)arg1 ;
-(BOOL)_delegateRespondsToSelector:(SEL)arg1 ;
-(HMFTimer *)bonjourEventTimer;
-(void)setBonjourEventTimer:(HMFTimer *)arg1 ;
-(id)visible2Pt4Networks;
-(void)stopDiscoveringWACAccessoryServersWithInvalidation:(BOOL)arg1 ;
-(id)wacBrowser;
-(void)notifyDelegatesOfWACCompletionWithIdentifier:(id)arg1 error:(id)arg2 ;
-(void)startDiscoveringWACAccessoryServers;
-(void)processPendingBonjourRemoveEvents:(id)arg1 ;
-(void)_matchAccessoryServerWithSetupID:(id)arg1 serverIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)startDiscoveringAccessoryServers;
-(void)stopDiscoveringAccessoryServers;
-(void)matchAccessoryServerWithSetupID:(id)arg1 serverIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)discoverAccessoryServerWithIdentifier:(id)arg1 ;
-(void)_handleBonjourBrowserEvent:(unsigned)arg1 eventInfo:(id)arg2 ;
-(int)_initializeAndStartBonjourBrowser;
-(HAPWACAccessoryBrowser *)hapWACBrowser;
-(void)startDiscoveringAirPlayAccessoriesWithDelegate:(id)arg1 ;
-(void)_invalidateWACServers;
-(NSMutableSet *)discoveredAccessoryServers;
-(int)_processPendingBonjourEvent:(id)arg1 ;
-(int)_purgePendingBonjourEvents:(id)arg1 withProcessing:(BOOL)arg2 ;
-(void)_handleBonjourAddOrUpdateWithEventInfo:(id)arg1 ;
-(int)_server:(id*)arg1 forBonjourDevice:(id)arg2 ;
-(void)_pendBonjourRemoveEvent:(id)arg1 ;
-(void)_handleBonjourRemoveWithEventInfo:(id)arg1 ;
-(void)_invalidateAccessoryServers:(BOOL)arg1 ;
-(void)_setReachability:(BOOL)arg1 forServer:(id)arg2 ;
-(void)_invalidateAndRemoveAccessoryServer:(id)arg1 ;
-(NSMutableSet *)pendingBonjourEvents;
-(void)_pendBonjourEvent:(id)arg1 ;
-(void)_timerDidExpire:(id)arg1 ;
-(void)setScanResults:(NSArray *)arg1 ;
-(void)_server:(id*)arg1 forHAPWACAccessory:(id)arg2 ;
-(id)serverWithIdentifier:(id)arg1 ;
-(void)wacBrowser:(id)arg1 didFindHAPWACAccessory:(id)arg2 ;
-(void)wacBrowser:(id)arg1 didRemoveHAPWACAccessory:(id)arg2 ;
-(void)wacBrowser:(id)arg1 didFindUnconfiguredPairedHAPWACAccessory:(id)arg2 ;
-(void)startDiscoveringWACAccessoryServerWithIdentifier:(id)arg1 ;
-(NSArray *)scanResults;
-(void)setDiscoveredAccessoryServers:(NSMutableSet *)arg1 ;
-(void)setPendingBonjourEvents:(NSMutableSet *)arg1 ;
-(void)setHapWACBrowser:(HAPWACAccessoryBrowser *)arg1 ;
@end

