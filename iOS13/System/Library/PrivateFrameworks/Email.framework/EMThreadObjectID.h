/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <Email/Email-Structs.h>
#import <Email/EMObjectID.h>
#import <libobjc.A.dylib/EFPubliclyDescribable.h>

@class EMThreadCollectionItemID, EMThreadScope, NSString;

@interface EMThreadObjectID : EMObjectID <EFPubliclyDescribable> {

	EMThreadCollectionItemID* _collectionItemID;
	EMThreadScope* _threadScope;

}

@property (nonatomic,readonly) EMThreadCollectionItemID * collectionItemID;              //@synthesize collectionItemID=_collectionItemID - In the implementation block
@property (nonatomic,readonly) long long conversationID; 
@property (nonatomic,copy,readonly) EMThreadScope * threadScope;                         //@synthesize threadScope=_threadScope - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * ef_publicDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)ef_publicDescription;
-(long long)conversationID;
-(EMThreadCollectionItemID *)collectionItemID;
-(EMThreadScope *)threadScope;
-(id)initWithCollectionItemID:(id)arg1 threadScope:(id)arg2 ;
-(id)initWithConversationID:(long long)arg1 threadScope:(id)arg2 ;
@end

