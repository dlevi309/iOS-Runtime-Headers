/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@protocol OS_dispatch_queue;
@class MRPlayerPath, NSObject;

@interface MRNowPlayingPlayerPathInvalidationHandler : NSObject {

	MRPlayerPath* _playerPath;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _callback;

}

@property (nonatomic,readonly) MRPlayerPath * playerPath;                       //@synthesize playerPath=_playerPath - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) id callback;                                     //@synthesize callback=_callback - In the implementation block
-(id)callback;
-(id)description;
-(MRPlayerPath *)playerPath;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithPlayerPath:(id)arg1 queue:(id)arg2 invalidationCallback:(/*^block*/id)arg3 ;
@end

