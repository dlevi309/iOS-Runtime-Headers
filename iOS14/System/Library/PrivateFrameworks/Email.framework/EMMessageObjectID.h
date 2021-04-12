/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <Email/Email-Structs.h>
#import <Email/EMObjectID.h>

@class EMMessageCollectionItemID, EMMailboxScope;

@interface EMMessageObjectID : EMObjectID {

	EMMessageCollectionItemID* _collectionItemID;
	EMMailboxScope* _mailboxScope;

}

@property (nonatomic,readonly) EMMessageCollectionItemID * collectionItemID;              //@synthesize collectionItemID=_collectionItemID - In the implementation block
@property (nonatomic,readonly) long long globalMessageID; 
@property (nonatomic,readonly) EMMailboxScope * mailboxScope;                             //@synthesize mailboxScope=_mailboxScope - In the implementation block
+(id)new;
+(BOOL)supportsSecureCoding;
-(EMMailboxScope *)mailboxScope;
-(id)init;
-(long long)globalMessageID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithGlobalMessageID:(long long)arg1 mailboxScope:(id)arg2 ;
-(EMMessageCollectionItemID *)collectionItemID;
-(id)description;
-(id)initWithCollectionItemID:(id)arg1 predicate:(id)arg2 mailboxTypeResolver:(id)arg3 ;
-(id)initWithCollectionItemID:(id)arg1 mailboxScope:(id)arg2 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

