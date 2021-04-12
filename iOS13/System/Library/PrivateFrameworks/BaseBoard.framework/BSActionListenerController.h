/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/


@protocol OS_dispatch_queue;
@class NSObject, BSActionListener;

@interface BSActionListenerController : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _transactionCount;
	BSActionListener* _listener;
	unsigned _listenerCount;
	unsigned _listenerTearDownToken;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)listener;
-(void)beginTransaction;
-(void)endTransaction;
-(void)beginTransactionForListener:(id)arg1 ;
-(void)endTransactionForListener:(id)arg1 ;
@end

