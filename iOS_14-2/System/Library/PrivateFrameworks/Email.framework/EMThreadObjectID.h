/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,copy,readonly) NSString * ef_publicDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(NSString *)ef_publicDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)debugDescription;
-(long long)conversationID;
-(EMThreadCollectionItemID *)collectionItemID;
-(NSString *)description;
-(EMThreadScope *)threadScope;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCollectionItemID:(id)arg1 threadScope:(id)arg2 ;
-(id)initWithConversationID:(long long)arg1 threadScope:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
@end

