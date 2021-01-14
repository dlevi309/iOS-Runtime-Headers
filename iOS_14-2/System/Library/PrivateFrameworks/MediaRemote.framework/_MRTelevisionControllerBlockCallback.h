/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)callbackBlock;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithCallbackBlock:(/*^block*/id)arg1 queue:(id)arg2 ;
@end

