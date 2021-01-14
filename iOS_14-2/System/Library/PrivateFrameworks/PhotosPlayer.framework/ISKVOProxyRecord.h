/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
*/


@protocol OS_dispatch_queue;
@class ISKVOProxy, NSObject;

@interface ISKVOProxyRecord : NSObject {

	ISKVOProxy* _proxy;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) ISKVOProxy * proxy;                              //@synthesize proxy=_proxy - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(ISKVOProxy *)proxy;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithProxy:(id)arg1 queue:(id)arg2 ;
@end

