/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <Email/EMObject.h>

@class NSString;

@interface EMAccount : EMObject {

	BOOL _primaryiCloudAccount;
	NSString* _name;
	NSString* _username;
	NSString* _hostname;

}

@property (nonatomic,copy,readonly) NSString * name;                                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * username;                                             //@synthesize username=_username - In the implementation block
@property (nonatomic,copy,readonly) NSString * hostname;                                             //@synthesize hostname=_hostname - In the implementation block
@property (getter=isPrimaryiCloudAccount,nonatomic,readonly) BOOL primaryiCloudAccount;              //@synthesize primaryiCloudAccount=_primaryiCloudAccount - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)predicateForReceivingAccounts;
+(id)predicateForDeliveryAccounts;
+(id)sortDescriptorForNameAscending:(BOOL)arg1 ;
-(id)ef_publicDescription;
-(NSString *)username;
-(NSString *)name;
-(NSString *)hostname;
-(BOOL)isPrimaryiCloudAccount;
-(BOOL)isEqual:(id)arg1 ;
@end

