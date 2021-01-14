/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
*/


@class DBManager;

@interface CallDBManager : NSObject {

	BOOL _deviceUnlocked;
	unsigned char _dataStoreType;
	unsigned char _notifyDataStoreChangeReason;
	DBManager* _dbManager;
	id _deviceUnlockNotificationRef;

}

@property (retain) id deviceUnlockNotificationRef;                         //@synthesize deviceUnlockNotificationRef=_deviceUnlockNotificationRef - In the implementation block
@property (nonatomic,retain) DBManager * dbManager;                        //@synthesize dbManager=_dbManager - In the implementation block
@property (assign) BOOL deviceUnlocked;                                    //@synthesize deviceUnlocked=_deviceUnlocked - In the implementation block
@property (assign) unsigned char dataStoreType;                            //@synthesize dataStoreType=_dataStoreType - In the implementation block
@property (assign) unsigned char notifyDataStoreChangeReason;              //@synthesize notifyDataStoreChangeReason=_notifyDataStoreChangeReason - In the implementation block
+(id)modelURL;
+(id)dataStoreName;
+(id)getDBLocationIsSandboxed:(BOOL)arg1 isTemporary:(BOOL)arg2 error:(unsigned char*)arg3 ;
-(void)createPermanent;
-(id)init;
-(BOOL)deviceUnlocked;
-(void)setDeviceUnlocked:(BOOL)arg1 ;
-(void)handlePermanentCreated;
-(DBManager *)dbManager;
-(void)moveCallsFromTempDatabase;
-(id)createManagedObjectContext;
-(void)registerForNotifications;
-(BOOL)notifyDataStoreChanged;
-(unsigned char)notifyDataStoreChangeReason;
-(unsigned char)dataStoreType;
-(void)setNotifyDataStoreChangeReason:(unsigned char)arg1 ;
-(void)createDataStore;
-(void)handleTemporaryCreated;
-(void)reFetchState;
-(BOOL)shouldCreatePermanent;
-(BOOL)shouldCreateTemporary;
-(void)setDeviceUnlockNotificationRef:(id)arg1 ;
-(void)setDataStoreType:(unsigned char)arg1 ;
-(id)deviceUnlockNotificationRef;
-(void)setDbManager:(DBManager *)arg1 ;
-(id)tempDBLocation:(unsigned char*)arg1 ;
-(id)permDBLocation:(unsigned char*)arg1 ;
-(void)createTemporary;
-(void)dealloc;
@end

