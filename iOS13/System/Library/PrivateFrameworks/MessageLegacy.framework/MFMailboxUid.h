/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
*/

#import <MessageLegacy/MessageLegacy-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/EFPubliclyDescribable.h>
#import <libobjc.A.dylib/EDIndexableMailbox.h>

@class NSString, MailAccount, MFWeakReferenceHolder, NSMutableArray, MFMessageCriterion, NSArray, NSNumber, NSMutableDictionary, MFInvocationQueue, EMObjectID, NSURL;

@interface MFMailboxUid : NSObject <NSCopying, EFPubliclyDescribable, EDIndexableMailbox> {

	NSString* uniqueId;
	long long _mailboxID;
	MailAccount* _account;
	NSString* _pathComponent;
	unsigned _attributes;
	MFWeakReferenceHolder* _parent;
	NSMutableArray* _children;
	MailAccount* _representedAccount;
	MFMessageCriterion* _criterion;
	BOOL allCriteriaMustBeSatisfied;
	NSString* _realFullPath;
	NSArray* _extraAttributes;
	NSNumber* _pendingLevel;
	Ai _type;
	NSMutableDictionary* _userInfo;

}

@property (nonatomic,readonly) MFInvocationQueue * attachmentDownloadQueue; 
@property (nonatomic,readonly) EMObjectID * objectID; 
@property (nonatomic,retain) NSArray * extraAttributes;                                                 //@synthesize extraAttributes=_extraAttributes - In the implementation block
@property (nonatomic,readonly) unsigned long long suggestionsLostMessageSearchResultCount; 
@property (nonatomic,readonly) double suggestionsLostMessageSearchTimestamp; 
@property (assign) int mailboxType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * ef_publicDescription; 
@property (nonatomic,copy,readonly) NSString * persistentID; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,copy,readonly) NSString * URLString; 
+(id)defaultScheduler;
+(id)specialNameForType:(int)arg1 ;
+(BOOL)isStandardizedMailboxUidType:(int)arg1 ;
+(BOOL)isSentMailboxType:(int)arg1 ;
+(BOOL)isOutgoingMailboxType:(int)arg1 ;
+(id)fileURLForMailboxURL:(id)arg1 ;
+(BOOL)isDraftsMailboxType:(int)arg1 ;
+(BOOL)typeIsValidTransferDestination:(int)arg1 ;
-(id)init;
-(NSString *)description;
-(NSString *)debugDescription;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)invalidate;
-(id)parent;
-(long long)type;
-(void)setParent:(id)arg1 ;
-(BOOL)isValid;
-(void)setName:(NSString *)arg1 ;
-(unsigned)attributes;
-(id)dictionaryRepresentation;
-(void)setAttributes:(unsigned)arg1 ;
-(NSURL *)URL;
-(void)setUserInfoObject:(id)arg1 forKey:(id)arg2 ;
-(id)displayName;
-(id)store;
-(EMObjectID *)objectID;
-(id)account;
-(id)fullPath;
-(NSString *)persistentID;
-(NSString *)URLString;
-(id)_dictionaryRepresentation;
-(BOOL)isVisible;
-(id)initWithAccount:(id)arg1 ;
-(id)children;
-(BOOL)setChildren:(id)arg1 ;
-(void)removeChild:(id)arg1 ;
-(id)_loadUserInfo;
-(id)uniqueId;
-(BOOL)isShared;
-(BOOL)hasChildren;
-(NSArray *)extraAttributes;
-(void)setExtraAttributes:(NSArray *)arg1 ;
-(unsigned long long)numberOfChildren;
-(id)childAtIndex:(unsigned long long)arg1 ;
-(BOOL)isContainer;
-(id)_privacySafeDescription;
-(NSString *)ef_publicDescription;
-(void)setRepresentedAccount:(id)arg1 ;
-(BOOL)shouldRestoreMessagesAfterFailedDelete;
-(id)initWithName:(id)arg1 attributes:(unsigned)arg2 forAccount:(id)arg3 extraAttributes:(id)arg4 ;
-(BOOL)mergeWithUserInfo:(id)arg1 ;
-(void)saveUserInfo;
-(void)flushCriteria;
-(id)userInfoObjectForKey:(id)arg1 ;
-(id)mutableDictionaryRepresentation;
-(id)URLWithAccount:(id)arg1 ;
-(long long)mailboxID;
-(id)criterion;
-(int)mailboxType;
-(unsigned long long)serverUnreadOnlyOnServerCount;
-(unsigned long long)unreadCount;
-(unsigned long long)unreadCountMatchingCriterion:(id)arg1 ;
-(id)childWithName:(id)arg1 ;
-(BOOL)isStore;
-(void)setMailboxType:(int)arg1 ;
-(id)mutableCopyOfChildren;
-(BOOL)isStandardizedMailboxUid;
-(double)suggestionsLostMessageSearchTimestamp;
-(unsigned long long)suggestionsLostMessageSearchResultCount;
-(id)depthFirstEnumerator;
-(id)accountRelativePath;
-(id)childWithExtraAttribute:(id)arg1 ;
-(id)pathRelativeToMailbox:(id)arg1 ;
-(id)_initWithName:(id)arg1 attributes:(unsigned)arg2 forAccount:(id)arg3 ;
-(id)representedAccount;
-(id)_mutableChildren;
-(id)childEnumeratorIncludingHiddenChildren:(BOOL)arg1 ;
-(unsigned long long)numberOfDescendants;
-(id)URLStringNonNil;
-(id)fullPathNonNil;
-(id)topMailbox;
-(id)rootMailbox;
-(id)ancestralAccount;
-(void)addToPostOrderTraversal:(id)arg1 ;
-(id)displayNameUsingSpecialNames;
-(id)accountDisplayName;
-(unsigned long long)nonDeletedCount;
-(long long)statusCountDelta;
-(void)updateMostRecentStatusCount:(unsigned long long)arg1 ;
-(BOOL)shouldUseNonDeletedForUnreadCount;
-(id)childEnumerator;
-(unsigned long long)indexOfChild:(id)arg1 ;
-(id)descendantWithExtraAttribute:(id)arg1 ;
-(void)sortChildren;
-(BOOL)isSpecialMailboxUid;
-(BOOL)isSentMailboxUid;
-(BOOL)isOutgoingMailboxUid;
-(BOOL)isNotesMailboxUid;
-(id)realFullPath;
-(id)pathRelativeToMailboxForDisplay:(id)arg1 ;
-(id)oldURLString;
-(long long)compareWithMailboxUid:(id)arg1 ;
-(long long)indexToInsertChildMailboxUid:(id)arg1 ;
-(BOOL)isDescendantOfMailbox:(id)arg1 ;
-(BOOL)userInfoBoolForKey:(id)arg1 ;
-(void)setUserInfoBool:(BOOL)arg1 forKey:(id)arg2 ;
-(id)userInfoDictionary;
-(void)setUserInfoWithDictionary:(id)arg1 ;
-(id)userInfoForSerialization;
-(void)setCriterion:(id)arg1 ;
-(BOOL)alwaysWriteFullMessageFile;
-(void)updateSuggestionsLostMessageSearchResultCount:(unsigned long long)arg1 ;
-(MFInvocationQueue *)attachmentDownloadQueue;
@end

