/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
*/


@protocol OS_dispatch_queue;
@class NSObject, NSArray, NSMutableArray;

@interface ACDPairedDeviceAccountCache : NSObject {

	NSObject*<OS_dispatch_queue> _synchronizationQueue;
	BOOL _accountsIsValid;
	NSArray* _accounts;
	NSMutableArray* _completions;

}
+(id)sharedInstance;
-(id)init;
-(void)invalidate;
-(void)accountsFromRemoteDeviceProxy:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_didFetchAccounts:(id)arg1 error:(id)arg2 ;
@end

