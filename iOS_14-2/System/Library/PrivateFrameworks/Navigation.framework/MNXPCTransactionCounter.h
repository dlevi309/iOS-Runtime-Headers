/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@protocol OS_os_transaction;
@class NSObject, NSLock;

@interface MNXPCTransactionCounter : NSObject {

	NSObject*<OS_os_transaction> _osTransaction;
	NSLock* _countLock;
	unsigned long long _count;

}
-(void)decrement;
-(id)init;
-(unsigned long long)count;
-(void)dealloc;
-(void)increment:(id)arg1 ;
@end

