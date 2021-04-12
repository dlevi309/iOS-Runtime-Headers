/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)name;
-(NSString *)hostname;
-(NSString *)username;
-(id)ef_publicDescription;
-(BOOL)isPrimaryiCloudAccount;
@end

