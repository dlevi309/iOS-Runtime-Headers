/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_update:(id)arg1 ;
-(CADisplayLink *)displayLink;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(void)start;
-(void)setUpdateHandler:(id)arg1 ;
-(id)updateHandler;
-(id)completionHandler;
-(void)stop;
-(long long)preferredFramesPerSecond;
-(id)initWithUpdateHandler:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setPreferredFramesPerSecond:(long long)arg1 ;
-(void)dealloc;
-(void)_callUpdateHandler;
@end

