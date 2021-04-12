/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <Email/Email-Structs.h>
#import <libobjc.A.dylib/EFCacheable.h>
#import <libobjc.A.dylib/EFPubliclyDescribable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSet, NSString;

@interface EMMailboxScope : NSObject <EFCacheable, EFPubliclyDescribable, NSCopying, NSSecureCoding> {

	BOOL _excludeTypes;
	BOOL _excludeMailboxes;
	NSSet* _mailboxTypes;
	NSSet* _mailboxObjectIDs;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSSet * mailboxTypes;                         //@synthesize mailboxTypes=_mailboxTypes - In the implementation block
@property (nonatomic,readonly) BOOL excludeTypes;                                 //@synthesize excludeTypes=_excludeTypes - In the implementation block
@property (nonatomic,copy,readonly) NSSet * mailboxObjectIDs;                     //@synthesize mailboxObjectIDs=_mailboxObjectIDs - In the implementation block
@property (nonatomic,readonly) BOOL excludeMailboxes;                             //@synthesize excludeMailboxes=_excludeMailboxes - In the implementation block
@property (nonatomic,copy,readonly) NSString * ef_publicDescription; 
+(BOOL)supportsSecureCoding;
+(id)mailboxScopeForMailboxObjectIDs:(id)arg1 forExclusion:(BOOL)arg2 ;
+(id)allMailboxesScope;
+(id)noMailboxesScope;
+(id)mailboxScopeForMailboxType:(long long)arg1 forExclusion:(BOOL)arg2 ;
+(id)mailboxScopeForMailboxTypes:(id)arg1 forExclusion:(BOOL)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)ef_publicDescription;
-(id)allMailboxObjectIDsWithMailboxTypeResolver:(id)arg1 forExclusion:(BOOL*)arg2 ;
-(BOOL)scopeContainsMailbox:(id)arg1 ;
-(id)cachedSelf;
-(id)initWithMailboxTypes:(id)arg1 excludeTypes:(BOOL)arg2 mailboxObjectIDs:(id)arg3 excludeMailboxes:(BOOL)arg4 ;
-(id)initWithMailboxTypes:(id)arg1 excludeTypes:(BOOL)arg2 mailboxObjectIDs:(id)arg3 excludeMailboxes:(BOOL)arg4 cached:(BOOL)arg5 ;
-(NSSet *)mailboxTypes;
-(BOOL)excludeTypes;
-(NSSet *)mailboxObjectIDs;
-(BOOL)excludeMailboxes;
-(id)_mailboxTypesDescription;
-(id)_mailboxObjectIDsDescriptionIsDebug:(BOOL)arg1 ;
-(id)_mailboxObjectIDsForTypesWithMailboxTypeResolver:(id)arg1 ;
-(BOOL)_scopeContainsMailboxWithObjectID:(id)arg1 mailboxTypeBlock:(/*^block*/id)arg2 ;
-(id)mailboxScopeByAddingMailboxes:(id)arg1 ;
-(id)mailboxScopeByRemovingMailboxes:(id)arg1 ;
-(BOOL)scopeContainsMailboxObjectID:(id)arg1 mailboxTypeResolver:(id)arg2 ;
@end

