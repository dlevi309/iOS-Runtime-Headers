/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@protocol OS_dispatch_queue;
@class ACAccountStore, NSObject, ACAccount;

@interface SSVAppleAccountStore : NSObject {

	ACAccountStore* _accountStore;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	ACAccount* _primaryAppleAccount;

}

@property (readonly) ACAccount * primaryAppleAccount; 
+(id)sharedAccountStore;
-(id)init;
-(ACAccount *)primaryAppleAccount;
-(void)_accountStoreDidChangeNotification:(id)arg1 ;
@end

