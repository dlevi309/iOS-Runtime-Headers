/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@class NSXPCConnection, NSNumber, NSMutableDictionary, NSLock, NSHashTable, NSMutableArray, NSString, NSUUID;

@interface NTKComplicationCollection : NSObject {

	NSXPCConnection* _connection;
	BOOL _registrationNeeded;
	NSNumber* _seqId;
	NSMutableDictionary* _localizeableSampleDataTemplates;
	NSLock* _templatesLock;
	NSHashTable* _observers;
	NSMutableArray* _loadCallbacks;
	NSLock* _observersLock;
	BOOL _updatesSuspended;
	NSMutableArray* _updatesEnqueuedWhileSuspended;
	BOOL _hasLoaded;
	NSString* _collectionIdentifier;
	NSUUID* _deviceUUID;

}

@property (nonatomic,readonly) NSString * collectionIdentifier;              //@synthesize collectionIdentifier=_collectionIdentifier - In the implementation block
@property (nonatomic,readonly) NSUUID * deviceUUID;                          //@synthesize deviceUUID=_deviceUUID - In the implementation block
@property (nonatomic,readonly) BOOL hasLoaded;                               //@synthesize hasLoaded=_hasLoaded - In the implementation block
+(id)sharedRemoteCollection;
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(NSUUID *)deviceUUID;
-(id)clients;
-(NSString *)collectionIdentifier;
-(void)_handleConnectionInterrupted;
-(void)_performOrEnqueueUpdate:(/*^block*/id)arg1 ;
-(BOOL)hasLoaded;
-(id)supportedTemplateFamiliesForClientIdentifier:(id)arg1 ;
-(id)initWithCollectionIdentifier:(id)arg1 deviceUUID:(id)arg2 ;
-(id)sampleTemplateForClientIdentifier:(id)arg1 applicationID:(id)arg2 family:(long long)arg3 ;
-(void)_throwIfNotLoaded:(SEL)arg1 ;
-(void)_registerIfNeeded;
-(void)_notifyLoaded;
-(void)suspendUpdatesFromDaemon;
-(void)resumeUpdatesFromDaemon;
-(void)_setLocalizedSampleTemplate:(id)arg1 forClientIdentifier:(id)arg2 family:(long long)arg3 ;
-(void)_sendToDaemonUpdatedSampleDataTemplate:(id)arg1 forClientIdentifier:(id)arg2 family:(long long)arg3 ;
-(void)_notifyUpdateComplicationSampleTemplateForClientIdentifier:(id)arg1 ;
-(void)_removeComplicationForClientIdentifier:(id)arg1 ;
-(void)_sendToDaemonRemoveComplicationforClientIdentifier:(id)arg1 ;
-(void)_notifyRemovedComplicationForClientIdentifier:(id)arg1 ;
-(void)removeComplicationForClientIdentifier:(id)arg1 ;
-(void)performAfterLoad:(/*^block*/id)arg1 ;
-(id)clientsSupportingFamily:(long long)arg1 ;
-(id)_bundleForWatchKitAppID:(id)arg1 ;
-(void)setLocalizableSampleTemplate:(id)arg1 forClientIdentifier:(id)arg2 family:(long long)arg3 ;
-(void)removeAllComplicationsExceptThoseWithClientIdentifiers:(id)arg1 ;
-(void)loadFullCollectionWithLocalizableSampleTemplates:(id)arg1 seqId:(id)arg2 ;
-(void)updateLocalizableSampleTemplate:(id)arg1 forClientIdentifier:(id)arg2 family:(long long)arg3 seqId:(id)arg4 ;
-(void)removeComplicationForClientIdentifier:(id)arg1 seqId:(id)arg2 ;
@end

