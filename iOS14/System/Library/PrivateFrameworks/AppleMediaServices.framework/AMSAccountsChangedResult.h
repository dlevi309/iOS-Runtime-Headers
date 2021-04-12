/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <libobjc.A.dylib/AMSHashable.h>

@class NSString, ACAccount;

@interface AMSAccountsChangedResult : NSObject <AMSHashable> {

	ACAccount* _account;

}

@property (nonatomic,readonly) ACAccount * account;                       //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) NSString * hashedDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(ACAccount *)account;
-(NSString *)hashedDescription;
-(id)initWithAccount:(id)arg1 ;
@end
