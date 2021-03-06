/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
*/

#import <IMAP/IMAP-Structs.h>
#import <libobjc.A.dylib/MFIMAPConnectionDelegate.h>

@class IMAPAccount, NSFileHandle, NSMutableArray, NSString;

@interface MFIMAPOperationCache : NSObject <MFIMAPConnectionDelegate> {

	IMAPAccount* _account;
	NSFileHandle* _handle;
	NSMutableArray* _ops;
	unsigned _lastUid;
	unsigned _lastSave;
	unsigned _lastUidValidity;
	BOOL _opsPending;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setShouldFlattenCacheOperations:(BOOL)arg1 ;
-(id)account;
-(void)deleteMailbox:(id)arg1 ;
-(void)dealloc;
-(void)saveChanges;
-(void)createMailbox:(id)arg1 ;
-(id)initWithIMAPAccount:(id)arg1 ;
-(BOOL)hasPendingOfflineOperations;
-(BOOL)connection:(id)arg1 shouldHandleUntaggedResponse:(id)arg2 forCommand:(id)arg3 ;
-(void)performDeferredOperationsWithConnection:(id)arg1 ;
-(void)_queueDeferredOperation:(id)arg1 ;
-(void)expungeTemporaryUid:(unsigned)arg1 ;
-(void)_performCreateOperation:(id)arg1 withContext:(SCD_Struct_MF4*)arg2 ;
-(void)_performDeleteOperation:(id)arg1 withContext:(SCD_Struct_MF4*)arg2 ;
-(void)_performStoreOperation:(id)arg1 withContext:(SCD_Struct_MF4*)arg2 ;
-(void)_performAppendOperation:(id)arg1 withContext:(SCD_Struct_MF4*)arg2 ;
-(void)_performCopyOperation:(id)arg1 withContext:(SCD_Struct_MF4*)arg2 ;
-(void)setFlags:(id)arg1 andClearFlags:(id)arg2 forMessages:(id)arg3 ;
-(void)setFlags:(id)arg1 andClearFlags:(id)arg2 forUIDs:(id)arg3 forMailbox:(id)arg4 ;
-(unsigned)firstUidForCopyingMessages:(id)arg1 fromMailbox:(id)arg2 toMailbox:(id)arg3 ;
-(unsigned)uidForAppendingMessageData:(id)arg1 withFlags:(id)arg2 andInternalDate:(id)arg3 toMailbox:(id)arg4 ;
-(BOOL)hasOperationsForMailbox:(id)arg1 ;
-(id)deferredOperations;
@end

