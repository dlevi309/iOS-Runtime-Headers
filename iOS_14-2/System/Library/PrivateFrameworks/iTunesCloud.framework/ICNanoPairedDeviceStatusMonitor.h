/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <libobjc.A.dylib/PSYInitialSyncStateObserverDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMapTable, NSString, PSYInitialSyncStateObserver, NSArray, NSUUID;

@interface ICNanoPairedDeviceStatusMonitor : NSObject <PSYInitialSyncStateObserverDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _callBackQueue;
	NSMapTable* _observers;
	NSString* _pairingIDPropertyName;
	NSString* _pairedDeviceGUID;
	NSString* _pairedDeviceMediaGUID;
	PSYInitialSyncStateObserver* _initialSyncStateObserver;
	BOOL _isInitialSyncComplete;

}

@property (nonatomic,copy,readonly) NSArray * allPairedDevicePairingIDs; 
@property (nonatomic,copy,readonly) NSUUID * activePairedDevicePairingID; 
@property (nonatomic,copy,readonly) NSUUID * pairedDevicePairingID; 
@property (nonatomic,copy,readonly) NSString * pairedDeviceGUID; 
@property (nonatomic,copy,readonly) NSString * pairedDeviceMediaGUID; 
@property (assign,nonatomic) BOOL isInitialSyncComplete;                                               //@synthesize isInitialSyncComplete=_isInitialSyncComplete - In the implementation block
@property (getter=isMediaSyncingSupported,nonatomic,readonly) BOOL mediaSyncingSupported; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedMonitor;
-(void)addObserver:(id)arg1 ;
-(id)_allObservers;
-(id)_activePairedDevice;
-(void)initialSyncStateObserver:(id)arg1 initialSyncDidCompleteForPairingIdentifier:(id)arg2 ;
-(NSString *)pairedDeviceGUID;
-(NSUUID *)activePairedDevicePairingID;
-(void)removeObserver:(id)arg1 ;
-(void)setIsInitialSyncComplete:(BOOL)arg1 ;
-(BOOL)isInitialSyncComplete;
-(void)deviceBecameActive:(id)arg1 ;
-(BOOL)isMediaSyncingSupported;
-(id)_init;
-(NSArray *)allPairedDevicePairingIDs;
-(void)_handlePairedDeviceChangedNotification;
-(NSString *)pairedDeviceMediaGUID;
-(NSUUID *)pairedDevicePairingID;
-(void)dealloc;
@end

