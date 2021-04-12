/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <Email/EMMailboxScope.h>
#import <libobjc.A.dylib/EFCacheable.h>

@class NSString;

@interface _EMSpecialMailboxScope : EMMailboxScope <EFCacheable> {

	NSString* _identifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)mailboxScopeByRemovingMailboxes:(id)arg1 ;
-(id)mailboxTypes;
-(BOOL)scopeContainsMailbox:(id)arg1 ;
-(id)mailboxObjectIDs;
-(BOOL)excludeTypes;
-(id)allMailboxObjectIDsWithMailboxTypeResolver:(id)arg1 forExclusion:(BOOL*)arg2 ;
-(BOOL)scopeContainsMailboxObjectID:(id)arg1 mailboxTypeResolver:(id)arg2 ;
-(id)ef_publicDescription;
-(BOOL)excludeMailboxes;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)debugDescription;
-(id)cachedSelf;
-(NSString *)description;
-(id)mailboxScopeByAddingMailboxes:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

