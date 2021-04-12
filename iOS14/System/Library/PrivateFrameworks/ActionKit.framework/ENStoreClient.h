/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface ENStoreClient : NSObject {

	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(id)init;
-(void)handleError:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)invokeAsyncBoolBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)invokeAsyncInt32Block:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)invokeAsyncObjectBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)invokeAsyncBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
@end

