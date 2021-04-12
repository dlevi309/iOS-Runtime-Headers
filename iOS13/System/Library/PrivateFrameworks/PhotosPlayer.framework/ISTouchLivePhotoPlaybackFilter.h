/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
*/

#import <PhotosPlayer/ISLivePhotoPlaybackFilter.h>

@class ISDisplayLink, NSDate;

@interface ISTouchLivePhotoPlaybackFilter : ISLivePhotoPlaybackFilter {

	BOOL _touchActive;
	long long __playbackRequestID;
	ISDisplayLink* __displayLink;
	NSDate* __playbackStartDate;

}

@property (assign,setter=_setPlaybackReaquestID:,nonatomic) long long _playbackRequestID;              //@synthesize _playbackRequestID=__playbackRequestID - In the implementation block
@property (assign,setter=_setDisplayLink:,nonatomic) ISDisplayLink * _displayLink;                     //@synthesize _displayLink=__displayLink - In the implementation block
@property (setter=_setPlaybackStartDate:,nonatomic,retain) NSDate * _playbackStartDate;                //@synthesize _playbackStartDate=__playbackStartDate - In the implementation block
@property (assign,getter=isTouchActive,nonatomic) BOOL touchActive;                                    //@synthesize touchActive=_touchActive - In the implementation block
-(void)reset;
-(ISDisplayLink *)_displayLink;
-(void)didPerformChanges;
-(void)_setDisplayLink:(id)arg1 ;
-(void)setTouchActive:(BOOL)arg1 ;
-(long long)_nextPlaybackRequestID;
-(void)_handleDisplayLink;
-(BOOL)isTouchActive;
-(long long)_playbackRequestID;
-(void)_setPlaybackReaquestID:(long long)arg1 ;
-(NSDate *)_playbackStartDate;
-(void)_setPlaybackStartDate:(id)arg1 ;
@end

