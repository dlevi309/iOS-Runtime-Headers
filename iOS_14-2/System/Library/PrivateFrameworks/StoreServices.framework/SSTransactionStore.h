/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@protocol OS_dispatch_queue;
@class NSCountedSet, NSMutableDictionary, NSObject;

@interface SSTransactionStore : NSObject {

	NSCountedSet* _transactionCount;
	NSMutableDictionary* _transactionStore;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}
+(id)defaultStore;
-(id)init;
-(void)takeKeepAliveWithTransactionID:(id)arg1 ;
-(void)releaseKeepAliveWithTransactionID:(id)arg1 ;
@end

