/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@class SSAccount;

@interface SSUpdateAccountResponse : NSObject {

	unsigned long long _credentialSource;
	SSAccount* _updatedAccount;

}

@property (nonatomic,readonly) unsigned long long credentialSource;              //@synthesize credentialSource=_credentialSource - In the implementation block
@property (nonatomic,readonly) SSAccount * updatedAccount;                       //@synthesize updatedAccount=_updatedAccount - In the implementation block
-(SSAccount *)updatedAccount;
-(id)initWithUpdatedAccount:(id)arg1 credentialSource:(unsigned long long)arg2 ;
-(unsigned long long)credentialSource;
@end

