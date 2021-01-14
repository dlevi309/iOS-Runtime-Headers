/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
*/

#import <PhotosPlayer/ISObservable.h>

@class NSMutableSet;

@interface ISLivePhotoPlaybackFilter : ISObservable {

	BOOL _playIsSticky;
	BOOL _isPerformingInputChanges;
	BOOL _playbackDisabled;
	double _hintProgress;
	long long _state;
	NSMutableSet* __playbackDisabledReasons;

}

@property (assign,setter=_setPerformingInputChanges:,nonatomic) BOOL isPerformingInputChanges;                          //@synthesize isPerformingInputChanges=_isPerformingInputChanges - In the implementation block
@property (assign,setter=_setPlaybackDisabled:,getter=isPlaybackDisabled,nonatomic) BOOL playbackDisabled;              //@synthesize playbackDisabled=_playbackDisabled - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _playbackDisabledReasons;                                                 //@synthesize _playbackDisabledReasons=__playbackDisabledReasons - In the implementation block
@property (nonatomic,readonly) double hintProgress;                                                                     //@synthesize hintProgress=_hintProgress - In the implementation block
@property (nonatomic,readonly) long long state;                                                                         //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL playIsSticky;                                                                         //@synthesize playIsSticky=_playIsSticky - In the implementation block
-(void)_setState:(long long)arg1 ;
-(id)init;
-(BOOL)playIsSticky;
-(void)setPlayIsSticky:(BOOL)arg1 ;
-(void)setState:(long long)arg1 ;
-(void)reset;
-(long long)state;
-(id)mutableChangeObject;
-(void)setPlaybackDisabled:(BOOL)arg1 forReason:(id)arg2 ;
-(BOOL)isPlaybackDisabled;
-(void)setHintProgress:(double)arg1 ;
-(double)hintProgress;
-(BOOL)isPerformingInputChanges;
-(void)_setPerformingInputChanges:(BOOL)arg1 ;
-(void)_setPlaybackDisabled:(BOOL)arg1 ;
-(NSMutableSet *)_playbackDisabledReasons;
@end

