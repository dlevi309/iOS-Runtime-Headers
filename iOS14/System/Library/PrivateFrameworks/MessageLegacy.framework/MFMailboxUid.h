/*
* Generated on Thursday, January 14, 2021 at 2:26:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,copy,readonly) NSString * ef_publicDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * URLString; 
@property (nonatomic,copy,readonly) NSString * persistentID; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) NSURL * URL; 
+(id)specialNameForType:(int)arg1 ;
+(id)defaultScheduler;
+(BOOL)isStandardizedMailboxUidType:(int)arg1 ;
+(BOOL)isSentMailboxType:(int)arg1 ;
+(BOOL)isOutgoingMailboxType:(int)arg1 ;
+(id)fileURLForMailboxURL:(id)arg1 ;
+(BOOL)isDraftsMailboxType:(int)arg1 ;
+(BOOL)typeIsValidTransferDestination:(int)arg1 ;
-(unsigned long long)unreadCount;
-(NSString *)URLString;
-(id)fullPath;
-(id)children;
-(id)dictionaryRepresentation;
-(id)account;
-(id)childWithExtraAttribute:(id)arg1 ;
-(id)pathRelativeToMailbox:(id)arg1 ;
-(id)parent;
-(BOOL)isContainer;
-(id)rootMailbox;
-(id)init;
-(id)store;
-(id)topMailbox;
-(NSString *)ef_publicDescription;
-(id)_initWithName:(id)arg1 attributes:(unsigned)arg2 forAccount:(id)arg3 ;
-(id)representedAccount;
-(unsigned long long)numberOfDescendants;
-(id)childEnumeratorIncludingHiddenChildren:(BOOL)arg1 ;
-(id)URLStringNonNil;
-(id)fullPathNonNil;
-(id)ancestralAccount;
-(void)addToPostOrderTraversal:(id)arg1 ;
-(id)displayNameUsingSpecialNames;
-(id)accountDisplayName;
-(unsigned long long)nonDeletedCount;
-(long long)statusCountDelta;
-(void)updateMostRecentStatusCount:(unsigned long long)arg1 ;
-(BOOL)shouldUseNonDeletedForUnreadCount;
-(id)childEnumerator;
-(id)childAtIndex:(unsigned long long)arg1 ;
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
-(BOOL)alwaysWriteFullMessageFile;
-(void)updateSuggestionsLostMessageSearchResultCount:(unsigned long long)arg1 ;
-(id)redactedName:(id)arg1 ;
-(void)setAttributes:(unsigned)arg1 ;
-(NSString *)debugDescription;
-(id)_dictionaryRepresentation;
-(void)setParent:(id)arg1 ;
-(EMObjectID *)objectID;
-(NSString *)name;
-(unsigned)attributes;
-(void)saveUserInfo;
-(BOOL)isStore;
-(NSString *)description;
-(unsigned long long)numberOfChildren;
-(BOOL)isValid;
-(id)userInfoObjectForKey:(id)arg1 ;
-(BOOL)hasChildren;
-(int)mailboxType;
-(BOOL)isVisible;
-(id)_privacySafeDescription;
-(NSString *)persistentID;
-(void)setUserInfoObject:(id)arg1 forKey:(id)arg2 ;
-(long long)type;
-(MFInvocationQueue *)attachmentDownloadQueue;
-(NSURL *)URL;
-(void)setExtraAttributes:(NSArray *)arg1 ;
-(id)uniqueId;
-(void)invalidate;
-(void)removeChild:(id)arg1 ;
-(BOOL)isShared;
-(void)setRepresentedAccount:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)initWithAccount:(id)arg1 ;
-(BOOL)shouldRestoreMessagesAfterFailedDelete;
-(id)initWithName:(id)arg1 attributes:(unsigned)arg2 forAccount:(id)arg3 extraAttributes:(id)arg4 ;
-(BOOL)mergeWithUserInfo:(id)arg1 ;
-(void)flushCriteria;
-(id)mutableDictionaryRepresentation;
-(id)URLWithAccount:(id)arg1 ;
-(BOOL)setChildren:(id)arg1 ;
-(long long)mailboxID;
-(id)_loadUserInfo;
-(id)criterion;
-(void)setMailboxType:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)displayName;
-(unsigned long long)serverUnreadOnlyOnServerCount;
-(unsigned long long)unreadCountMatchingCriterion:(id)arg1 ;
-(void)setCriterion:(id)arg1 ;
-(id)childWithName:(id)arg1 ;
-(id)mutableCopyOfChildren;
-(id)_mutableChildren;
-(NSArray *)extraAttributes;
-(BOOL)isStandardizedMailboxUid;
-(double)suggestionsLostMessageSearchTimestamp;
-(unsigned long long)suggestionsLostMessageSearchResultCount;
-(id)depthFirstEnumerator;
-(id)accountRelativePath;
@end

