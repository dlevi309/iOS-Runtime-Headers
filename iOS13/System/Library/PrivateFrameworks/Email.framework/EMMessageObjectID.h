/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <Email/Email-Structs.h>
#import <Email/EMObjectID.h>

@class EMMessageCollectionItemID, EMMailboxScope, NSData, ECAngleBracketIDHash;

@interface EMMessageObjectID : EMObjectID {

	EMMessageCollectionItemID* _collectionItemID;
	EMMailboxScope* _mailboxScope;

}

@property (nonatomic,readonly) NSData * serializedRepresentation; 
@property (nonatomic,readonly) EMMessageCollectionItemID * collectionItemID;              //@synthesize collectionItemID=_collectionItemID - In the implementation block
@property (nonatomic,readonly) long long databaseID; 
@property (nonatomic,readonly) ECAngleBracketIDHash * messageIDHeaderHash; 
@property (nonatomic,readonly) EMMailboxScope * mailboxScope;                             //@synthesize mailboxScope=_mailboxScope - In the implementation block
+(id)new;
+(BOOL)supportsSecureCoding;
+(id)log;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)serializedRepresentation;
-(id)initWithSerializedRepresentation:(id)arg1 ;
-(long long)databaseID;
-(ECAngleBracketIDHash *)messageIDHeaderHash;
-(id)initWithMessageIDHeaderHash:(id)arg1 mailboxScope:(id)arg2 ;
-(id)initWithMessageDatabaseID:(long long)arg1 ;
-(EMMailboxScope *)mailboxScope;
-(EMMessageCollectionItemID *)collectionItemID;
-(id)initWithCollectionItemID:(id)arg1 mailboxScope:(id)arg2 ;
-(id)initWithCollectionItemID:(id)arg1 predicate:(id)arg2 mailboxTypeResolver:(id)arg3 ;
@end

