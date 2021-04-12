/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <Message/MailAccount.h>

@interface LocalAccount : MailAccount
+(id)accountTypeString;
+(id)accountTypeIdentifier;
+(id)localAccount;
+(id)csAccountTypeString;
+(id)legacyPathNameForAccountWithHostname:(id)arg1 username:(id)arg2 ;
-(id)uniqueID;
-(void)setUsername:(id)arg1 ;
-(BOOL)isActive;
-(BOOL)isLocalAccount;
-(void)setHostname:(id)arg1 ;
-(void)setPassword:(id)arg1 ;
-(BOOL)canGoOffline;
-(BOOL)canFetch;
-(id)initWithLibrary:(id)arg1 persistentAccount:(id)arg2 ;
-(void)resetSpecialMailboxes;
-(id)_copyMailboxUidWithParent:(id)arg1 name:(id)arg2 attributes:(unsigned)arg3 existingMailboxUid:(id)arg4 dictionary:(id)arg5 ;
-(id)_URLScheme;
-(id)mailboxUidForRelativePath:(id)arg1 create:(BOOL)arg2 withOption:(int)arg3 ;
-(id)primaryMailboxUid;
-(Class)storeClass;
-(BOOL)renameMailbox:(id)arg1 newName:(id)arg2 parent:(id)arg3 ;
-(void)_synchronouslyLoadListingForParent:(id)arg1 ;
-(id)mailboxPathExtension;
-(id)_infoForMatchingURL:(id)arg1 ;
-(id)pushedMailboxUids;
-(BOOL)supportsPurge;
-(id)displayName;
-(BOOL)_setChildren:(id)arg1 forMailboxUid:(id)arg2 ;
-(id)transientDraftsFolderShouldCreate:(BOOL)arg1 ;
-(id)legacySQLExpressionToMatchAllMailboxes;
-(id)transientDraftsFolder;
-(BOOL)_shouldConfigureMailboxCache;
-(id)mailboxUidForFileSystemPath:(id)arg1 ;
-(BOOL)deleteInPlaceForMailbox:(id)arg1 ;
-(BOOL)supportsAppend;
-(BOOL)supportsArchiving;
@end

