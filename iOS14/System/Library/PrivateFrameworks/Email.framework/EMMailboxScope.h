/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <Email/Email-Structs.h>
#import <libobjc.A.dylib/EFCacheable.h>
#import <libobjc.A.dylib/EFPubliclyDescribable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSet, NSString;

@interface EMMailboxScope : NSObject <EFCacheable, EFPubliclyDescribable, NSCopying, NSSecureCoding> {

	unsigned long long _hash;
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
+(id)allMailboxesScope;
+(id)noMailboxesScope;
+(id)mailboxScopeForMailboxTypes:(id)arg1 forExclusion:(BOOL)arg2 ;
+(id)mailboxScopeForMailboxObjectIDs:(id)arg1 forExclusion:(BOOL)arg2 ;
+(id)mailboxScopeForMailboxType:(long long)arg1 forExclusion:(BOOL)arg2 ;
-(void)_calculateHash;
-(id)_mailboxObjectIDsForTypesWithMailboxTypeResolver:(id)arg1 ;
-(id)_mailboxObjectIDsDescriptionIsDebug:(BOOL)arg1 ;
-(id)mailboxScopeByRemovingMailboxes:(id)arg1 ;
-(NSSet *)mailboxTypes;
-(BOOL)scopeContainsMailbox:(id)arg1 ;
-(BOOL)_scopeContainsMailboxWithObjectID:(id)arg1 mailboxTypeBlock:(/*^block*/id)arg2 ;
-(NSSet *)mailboxObjectIDs;
-(BOOL)excludeTypes;
-(id)allMailboxObjectIDsWithMailboxTypeResolver:(id)arg1 forExclusion:(BOOL*)arg2 ;
-(id)initWithMailboxTypes:(id)arg1 excludeTypes:(BOOL)arg2 mailboxObjectIDs:(id)arg3 excludeMailboxes:(BOOL)arg4 cached:(BOOL)arg5 ;
-(id)init;
-(BOOL)scopeContainsMailboxObjectID:(id)arg1 mailboxTypeResolver:(id)arg2 ;
-(id)_mailboxTypesDescription;
-(id)initWithMailboxTypes:(id)arg1 excludeTypes:(BOOL)arg2 mailboxObjectIDs:(id)arg3 excludeMailboxes:(BOOL)arg4 ;
-(NSString *)ef_publicDescription;
-(BOOL)excludeMailboxes;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)debugDescription;
-(id)cachedSelf;
-(NSString *)description;
-(id)mailboxScopeByAddingMailboxes:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

