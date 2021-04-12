/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@class SSAccount;

@interface SSUpdateAccountResponse : NSObject {

	unsigned long long _credentialSource;
	SSAccount* _updatedAccount;

}

@property (nonatomic,readonly) unsigned long long credentialSource;              //@synthesize credentialSource=_credentialSource - In the implementation block
@property (nonatomic,readonly) SSAccount * updatedAccount;                       //@synthesize updatedAccount=_updatedAccount - In the implementation block
-(unsigned long long)credentialSource;
-(SSAccount *)updatedAccount;
-(id)initWithUpdatedAccount:(id)arg1 credentialSource:(unsigned long long)arg2 ;
@end

