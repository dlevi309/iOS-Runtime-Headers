/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/

#import <libobjc.A.dylib/VCDatabaseProvider.h>

@protocol OS_dispatch_queue;
@class WFDatabase, NSPersistentStoreDescription, NSObject, NSString;

@interface VCDaemonDatabaseProvider : NSObject <VCDatabaseProvider> {

	WFDatabase* _database;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) WFDatabase * database;                                             //@synthesize database=_database - In the implementation block
@property (nonatomic,copy,readonly) NSPersistentStoreDescription * storeDescription; 
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(WFDatabase *)database;
-(NSPersistentStoreDescription *)storeDescription;
-(BOOL)migrateDatabasesToShortcutsFolderIfNeeded;
@end

