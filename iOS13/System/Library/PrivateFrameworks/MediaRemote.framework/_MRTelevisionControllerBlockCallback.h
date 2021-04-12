/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface _MRTelevisionControllerBlockCallback : NSObject {

	/*^block*/id _callbackBlock;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) id callbackBlock;                                //@synthesize callbackBlock=_callbackBlock - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithCallbackBlock:(/*^block*/id)arg1 queue:(id)arg2 ;
-(id)callbackBlock;
@end

