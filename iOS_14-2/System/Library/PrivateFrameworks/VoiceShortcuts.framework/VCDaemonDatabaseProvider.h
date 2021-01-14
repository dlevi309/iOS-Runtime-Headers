/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/

#import <libobjc.A.dylib/VCDatabaseProvider.h>

@protocol OS_dispatch_queue;
@class WFDatabase, NSObject, NSString;

@interface VCDaemonDatabaseProvider : NSObject <VCDatabaseProvider> {

	WFDatabase* _database;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) WFDatabase * database;                           //@synthesize database=_database - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)migrateDatabasesToShortcutsFolderIfNeeded;
-(void)migrateVoiceShortcutsToShortcutsInDatabase:(id)arg1 ;
-(id)init;
-(BOOL)isShortcutsAppInstalled;
-(id)databaseWithError:(id*)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(WFDatabase *)database;
@end

