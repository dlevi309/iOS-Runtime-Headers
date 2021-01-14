/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCPushNotificationHandling.h>

@class FCCKPrivateDatabase, NSMapTable, NSString;

@interface FCPushNotificationCenter : NSObject <FCPushNotificationHandling> {

	BOOL _syncingEnabled;
	FCCKPrivateDatabase* _privateDatabase;
	NSMapTable* _recordZoneObservers;

}

@property (nonatomic,retain) FCCKPrivateDatabase * privateDatabase;                    //@synthesize privateDatabase=_privateDatabase - In the implementation block
@property (nonatomic,retain) NSMapTable * recordZoneObservers;                         //@synthesize recordZoneObservers=_recordZoneObservers - In the implementation block
@property (assign,getter=isSyncingEnabled,nonatomic) BOOL syncingEnabled;              //@synthesize syncingEnabled=_syncingEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSyncingEnabled:(BOOL)arg1 ;
-(BOOL)isSyncingEnabled;
-(id)init;
-(void)_saveDatabaseServerChangeToken:(id)arg1 ;
-(void)prepareForUse;
-(void)enableSyncing;
-(void)removeRecordZoneObserver:(id)arg1 ;
-(void)disableSyncing;
-(id)initWithPrivateDatabase:(id)arg1 storeDirectory:(id)arg2 ;
-(void)handleRemoteNotification:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(FCCKPrivateDatabase *)privateDatabase;
-(void)_deleteLocalDataForRecordZoneIDs:(id)arg1 ;
-(void)setPrivateDatabase:(FCCKPrivateDatabase *)arg1 ;
-(void)_handlePrivateDatabaseNotification:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setRecordZoneObservers:(NSMapTable *)arg1 ;
-(NSMapTable *)recordZoneObservers;
-(id)serverChangeTokenKey;
-(void)addObserver:(id)arg1 forChangesToRecordZoneID:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)_fetchChangesForRecordZoneIDs:(id)arg1 ;
@end

