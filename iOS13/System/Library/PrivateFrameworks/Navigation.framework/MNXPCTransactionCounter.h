/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@protocol OS_os_transaction;
@class NSObject, NSLock;

@interface MNXPCTransactionCounter : NSObject {

	NSObject*<OS_os_transaction> _osTransaction;
	NSLock* _countLock;
	unsigned long long _count;

}
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(void)decrement;
-(void)increment:(id)arg1 ;
@end

