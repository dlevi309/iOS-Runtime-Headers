/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
*/


@protocol OS_dispatch_queue, TSBonjourAdvertiseDelegate;
#import <TimeSync/TimeSync-Structs.h>
@class NSObject;

@interface TSBonjourAdvertise : NSObject {

	DNSServiceRef_tRef _sdRef;
	NSObject*<OS_dispatch_queue> _queue;
	id<TSBonjourAdvertiseDelegate> _delegate;

}

@property (assign,nonatomic) id<TSBonjourAdvertiseDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)dealloc;
-(id<TSBonjourAdvertiseDelegate>)delegate;
-(void)setDelegate:(id<TSBonjourAdvertiseDelegate>)arg1 ;
-(BOOL)stopAdvertising;
-(void)registeredServiceWithName:(const char*)arg1 regType:(const char*)arg2 domain:(const char*)arg3 withFlags:(unsigned)arg4 ;
-(BOOL)startAdvertisingWithError:(id*)arg1 ;
@end

