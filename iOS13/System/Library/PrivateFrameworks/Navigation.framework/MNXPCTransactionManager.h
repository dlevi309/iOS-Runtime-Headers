/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@protocol OS_os_transaction;
@class NSObject, NSHashTable;

@interface MNXPCTransactionManager : NSObject {

	NSObject*<OS_os_transaction> _xpcTransaction;
	NSHashTable* _requesters;

}
+(id)sharedInstance;
-(void)addHighMemoryThresholdRequest:(id)arg1 ;
-(void)removeHighMemoryThresholdRequest:(id)arg1 afterDelay:(double)arg2 ;
@end

