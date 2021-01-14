/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

