/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface IDSDaemonResponseHandler : NSObject {

	id _block;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) id block;                                        //@synthesize block=_block - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(id)block;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithBlock:(id)arg1 queue:(id)arg2 ;
@end

