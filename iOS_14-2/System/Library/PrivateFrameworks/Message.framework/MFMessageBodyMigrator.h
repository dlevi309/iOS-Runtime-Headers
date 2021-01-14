/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <Message/Message-Structs.h>
#import <libobjc.A.dylib/EFLoggable.h>

@protocol EFScheduler;
@class MFMailMessageLibrary, EFLazyCache, NSMutableArray, NSString;

@interface MFMessageBodyMigrator : NSObject <EFLoggable> {

	os_unfair_lock_s _upgradeLock;
	MFMailMessageLibrary* _library;
	EFLazyCache* _directoryContentCache;
	id<EFScheduler> _backgroundMigrationScheduler;
	NSMutableArray* _mailboxesToCheck;

}

@property (assign,nonatomic,__weak) MFMailMessageLibrary * library;                     //@synthesize library=_library - In the implementation block
@property (nonatomic,retain) EFLazyCache * directoryContentCache;                       //@synthesize directoryContentCache=_directoryContentCache - In the implementation block
@property (nonatomic,retain) id<EFScheduler> backgroundMigrationScheduler;              //@synthesize backgroundMigrationScheduler=_backgroundMigrationScheduler - In the implementation block
@property (nonatomic,retain) NSMutableArray * mailboxesToCheck;                         //@synthesize mailboxesToCheck=_mailboxesToCheck - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
-(MFMailMessageLibrary *)library;
-(void)startMigratingBodies;
-(void)migrateBodyForMessageIfNecessary:(id)arg1 ;
-(id)initWithLibrary:(id)arg1 ;
-(void)setLibrary:(MFMailMessageLibrary *)arg1 ;
-(id<EFScheduler>)backgroundMigrationScheduler;
-(NSMutableArray *)mailboxesToCheck;
-(BOOL)_mailboxHasUnmigratedFiles:(id)arg1 ;
-(void)_migrateAllFilesForMailbox:(id)arg1 ;
-(void)_migrateDataFilesForMessage:(id)arg1 ;
-(id)_filesForMessage:(id)arg1 ;
-(id)legacyAttachmentDirectoryForMessage:(id)arg1 ;
-(id)_directoryContentsForPath:(id)arg1 ;
-(EFLazyCache *)directoryContentCache;
-(void)setDirectoryContentCache:(EFLazyCache *)arg1 ;
-(void)setBackgroundMigrationScheduler:(id<EFScheduler>)arg1 ;
-(void)setMailboxesToCheck:(NSMutableArray *)arg1 ;
@end

