/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@protocol OS_dispatch_queue;
@class _MRNowPlayingPlayerPathProtobuf, NSObject;

@interface MRNowPlayingPlayerPathInvalidationHandler : NSObject {

	_MRNowPlayingPlayerPathProtobuf* _playerPath;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _callback;

}

@property (nonatomic,readonly) _MRNowPlayingPlayerPathProtobuf * playerPath;              //@synthesize playerPath=_playerPath - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                        //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) id callback;                                               //@synthesize callback=_callback - In the implementation block
-(id)description;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)callback;
-(_MRNowPlayingPlayerPathProtobuf *)playerPath;
-(id)initWithPlayerPath:(id)arg1 queue:(id)arg2 invalidationCallback:(/*^block*/id)arg3 ;
@end

