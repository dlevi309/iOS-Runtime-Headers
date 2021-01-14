/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
*/

#import <libobjc.A.dylib/_KSTextReplacementSyncProtocol.h>

@protocol OS_dispatch_queue, _KSTextReplacementSyncProtocol, _KSMigrationDelegate;
@class NSObject, _KSTextReplacementCKStore, _KSTextReplacementLegacyStore, NSString;

@interface _KSTextReplacementManager : NSObject <_KSTextReplacementSyncProtocol> {

	NSObject*<OS_dispatch_queue> _migrationQueue;
	BOOL _didMigrateForCurrentAccount;
	BOOL _deviceDidMigrateOnCloud;
	BOOL _didCheckMigrationOnCloud;
	_KSTextReplacementCKStore* _ckStore;
	_KSTextReplacementLegacyStore* _legacyStore;
	NSObject*<_KSTextReplacementSyncProtocol> _textReplacementStore;
	NSString* _directoryPath;
	id<_KSMigrationDelegate> _delegate;

}

@property (nonatomic,retain) _KSTextReplacementCKStore * ckStore;                                         //@synthesize ckStore=_ckStore - In the implementation block
@property (nonatomic,retain) _KSTextReplacementLegacyStore * legacyStore;                                 //@synthesize legacyStore=_legacyStore - In the implementation block
@property (nonatomic,retain) NSObject*<_KSTextReplacementSyncProtocol> textReplacementStore;              //@synthesize textReplacementStore=_textReplacementStore - In the implementation block
@property (nonatomic,copy) NSString * directoryPath;                                                      //@synthesize directoryPath=_directoryPath - In the implementation block
@property (assign,nonatomic) BOOL didMigrateForCurrentAccount;                                            //@synthesize didMigrateForCurrentAccount=_didMigrateForCurrentAccount - In the implementation block
@property (assign,nonatomic) BOOL deviceDidMigrateOnCloud;                                                //@synthesize deviceDidMigrateOnCloud=_deviceDidMigrateOnCloud - In the implementation block
@property (assign,nonatomic) BOOL didCheckMigrationOnCloud;                                               //@synthesize didCheckMigrationOnCloud=_didCheckMigrationOnCloud - In the implementation block
@property (assign,nonatomic,__weak) id<_KSMigrationDelegate> delegate;                                    //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)textReplacementStoreWithTestDirectory:(id)arg1 withDelegate:(id)arg2 forceMigration:(BOOL)arg3 forceCloudKitSync:(BOOL)arg4 ;
-(void)checkForMigration;
-(void)accountDidChange:(id)arg1 ;
-(id<_KSMigrationDelegate>)delegate;
-(NSObject*<_KSTextReplacementSyncProtocol>)textReplacementStore;
-(void)recordSyncStatus;
-(void)_migrateEntriesSinceDate:(id)arg1 repeatCount:(unsigned long long)arg2 ;
-(void)setDidMigrateForCurrentAccount:(BOOL)arg1 ;
-(BOOL)didCheckMigrationOnCloud;
-(_KSTextReplacementLegacyStore *)legacyStore;
-(void)setLegacyStore:(_KSTextReplacementLegacyStore *)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(_KSTextReplacementCKStore *)ckStore;
-(void)setDelegate:(id<_KSMigrationDelegate>)arg1 ;
-(BOOL)deviceDidMigrateOnCloud;
-(void)resetMigrationState;
-(void)migrateLegacyStore;
-(void)notifyTextReplacementDidChange;
-(void)setDirectoryPath:(NSString *)arg1 ;
-(double)minimumUptimeRemaining;
-(void)setTextReplacementStore:(NSObject*<_KSTextReplacementSyncProtocol>)arg1 ;
-(void)respondToMigrationCompletion;
-(BOOL)didMigrateForCurrentAccount;
-(void)requestSyncWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)pushAllLocalRecordsOnceIfNeeded;
-(void)setDeviceDidMigrateOnCloud:(BOOL)arg1 ;
-(void)setCkStore:(_KSTextReplacementCKStore *)arg1 ;
-(void)setDidCheckMigrationOnCloud:(BOOL)arg1 ;
-(void)requestSync:(unsigned long long)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(id)initWithDirectoryPath:(id)arg1 ;
-(NSString *)directoryPath;
-(BOOL)deviceDidMigrate;
-(void)dealloc;
@end

