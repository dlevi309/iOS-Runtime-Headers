/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
*/


@class CADisplayLink;

@interface ISDisplayLink : NSObject {

	long long _preferredFramesPerSecond;
	/*^block*/id _updateHandler;
	/*^block*/id _completionHandler;
	CADisplayLink* _displayLink;

}

@property (nonatomic,copy) id updateHandler;                                  //@synthesize updateHandler=_updateHandler - In the implementation block
@property (nonatomic,copy) id completionHandler;                              //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;                     //@synthesize displayLink=_displayLink - In the implementation block
@property (assign,nonatomic) long long preferredFramesPerSecond;              //@synthesize preferredFramesPerSecond=_preferredFramesPerSecond - In the implementation block
-(void)dealloc;
-(void)stop;
-(void)start;
-(void)_update:(id)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setUpdateHandler:(id)arg1 ;
-(id)updateHandler;
-(CADisplayLink *)displayLink;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(void)setPreferredFramesPerSecond:(long long)arg1 ;
-(long long)preferredFramesPerSecond;
-(id)initWithUpdateHandler:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_callUpdateHandler;
@end

