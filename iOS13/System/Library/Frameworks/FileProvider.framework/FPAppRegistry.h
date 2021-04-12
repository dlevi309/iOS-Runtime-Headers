/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/


@protocol OS_dispatch_queue, FPAppRegistryDelegate;
@class NSMutableDictionary, NSNotificationCenter, NSObject, NSArray;

@interface FPAppRegistry : NSObject {

	NSMutableDictionary* _appMetadataByBundleID;
	NSMutableDictionary* _appMetadataByDisplayName;
	NSNotificationCenter* _notificationCenter;
	NSObject*<OS_dispatch_queue> _syncQueue;
	BOOL _keepUpToDate;
	unsigned long long _dataState;
	id<FPAppRegistryDelegate> _delegate;

}

@property (assign) unsigned long long dataState;                                       //@synthesize dataState=_dataState - In the implementation block
@property (nonatomic,readonly) NSNotificationCenter * notificationCenter; 
@property (assign,nonatomic) BOOL keepUpToDate;                                        //@synthesize keepUpToDate=_keepUpToDate - In the implementation block
@property (assign,nonatomic,__weak) id<FPAppRegistryDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * listOfMonitoredApps; 
+(id)sharedRegistry;
+(id)deserializeListOfAppsFromNotification:(id)arg1 ;
+(void)setSharedRegistry:(id)arg1 ;
+(id)notificationCenterOverride;
+(void)setNotificationCenterOverride:(id)arg1 ;
+(id)serializeListOfApps:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id<FPAppRegistryDelegate>)delegate;
-(void)setDelegate:(id<FPAppRegistryDelegate>)arg1 ;
-(NSNotificationCenter *)notificationCenter;
-(id)promoteItemToAppLibraryIfNeeded:(id)arg1 ;
-(id)appForBundleID:(id)arg1 ;
-(void)setKeepUpToDate:(BOOL)arg1 ;
-(void)populateRegistry;
-(unsigned long long)dataState;
-(void)_didUpdateApps:(id)arg1 ;
-(void)_registerForNotification:(id)arg1 handler:(SEL)arg2 ;
-(void)_didRemoveApps:(id)arg1 ;
-(void)setDataState:(unsigned long long)arg1 ;
-(void)_addApps:(id)arg1 ;
-(BOOL)_isAppLibrary:(id)arg1 appMetadata:(id*)arg2 userVisible:(BOOL*)arg3 ;
-(id)_bundleIDForHomonymOfApp:(id)arg1 ;
-(id)appForDisplayName:(id)arg1 ;
-(BOOL)keepUpToDate;
-(void)addApps:(id)arg1 ;
-(id)removeAppsWithBundleIDs:(id)arg1 ;
-(BOOL)isAppLibrary:(id)arg1 ;
-(NSArray *)listOfMonitoredApps;
@end

