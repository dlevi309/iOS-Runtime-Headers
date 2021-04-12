/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <libobjc.A.dylib/EFContentProtectionObserver.h>
#import <libobjc.A.dylib/EFLoggable.h>

@protocol MFMailMessageLibraryMigratorDelegate, OS_dispatch_queue;
@class NSMutableArray, NSObject, NSConditionLock, NSString;

@interface MFMailMessageLibraryMigrator : NSObject <EFContentProtectionObserver, EFLoggable> {

	BOOL _needsSpotlightReindex;
	BOOL _needsRebuildTriggers;
	BOOL _needsRebuildMessageInfoIndex;
	NSMutableArray* _postMigrationBlocks;
	id<MFMailMessageLibraryMigratorDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _contentProtectionQueue;
	NSConditionLock* _migrationState;

}

@property (nonatomic,__weak,readonly) id<MFMailMessageLibraryMigratorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> contentProtectionQueue;                   //@synthesize contentProtectionQueue=_contentProtectionQueue - In the implementation block
@property (nonatomic,readonly) NSConditionLock * migrationState;                                      //@synthesize migrationState=_migrationState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
+(int)currentVersion;
-(id<MFMailMessageLibraryMigratorDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(NSConditionLock *)migrationState;
-(long long)_runMigrationStepsFromVersion:(int)arg1 connection:(id)arg2 schema:(id)arg3 ;
-(long long)attachProtectedDatabaseWithConnection:(id)arg1 ;
-(void)detachProtectedDatabaseWithConnection:(id)arg1 ;
-(void)addPostMigrationBlock:(/*^block*/id)arg1 ;
-(void)noteNeedsSpotlightReindex;
-(void)noteRebuildMessageInfoIndex;
-(void)noteNeedsRebuildTriggers;
-(void)resetTTRPromptAndForceReindex;
-(BOOL)_checkForeignKeysWithConnection:(id)arg1 ;
-(BOOL)needsRebuildTriggers;
-(BOOL)needsRebuildMessageInfoIndex;
-(void)runPostMigrationBlocksWithConnection:(id)arg1 ;
-(BOOL)needsSpotlightReindex;
-(long long)_checkContentProtectionState;
-(NSObject*<OS_dispatch_queue>)contentProtectionQueue;
-(BOOL)migrateWithDatabaseConnection:(id)arg1 schema:(id)arg2 ;
-(void)contentProtectionStateChanged:(int)arg1 previousState:(int)arg2 ;
@end

