/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/


@protocol _LTTranslationEngine, OS_dispatch_queue;
@class _LTPlaybackService, NSObject;

@interface _LTServerSpeakSession : NSObject {

	id<_LTTranslationEngine> _engine;
	_LTPlaybackService* _player;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)initWithEngine:(id)arg1 ;
-(void)cancel;
-(void)_playback:(id)arg1 context:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)speak:(id)arg1 context:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

