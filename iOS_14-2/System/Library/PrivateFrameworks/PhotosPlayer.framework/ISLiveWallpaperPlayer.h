/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
*/

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <PhotosPlayer/ISBasePlayer.h>

@class ISDisplayLink;

@interface ISLiveWallpaperPlayer : ISBasePlayer {

	SCD_Struct_IS1 _videoDuration;
	double _smoothedVelocity;
	BOOL _touching;
	BOOL __active;
	BOOL __seeking;
	float __playRate;
	double _force;
	ISDisplayLink* __displayLink;

}

@property (assign,setter=_setActive:,nonatomic) BOOL _active;                                   //@synthesize _active=__active - In the implementation block
@property (assign,setter=_setDisplayLink:,nonatomic) ISDisplayLink * _displayLink;              //@synthesize _displayLink=__displayLink - In the implementation block
@property (assign,setter=_setSeeking:,getter=_isSeeking,nonatomic) BOOL _seeking;               //@synthesize _seeking=__seeking - In the implementation block
@property (assign,setter=_setPlayRate:,nonatomic) float _playRate;                              //@synthesize _playRate=__playRate - In the implementation block
@property (assign,getter=isTouching,nonatomic) BOOL touching;                                   //@synthesize touching=_touching - In the implementation block
@property (assign,nonatomic) double force;                                                      //@synthesize force=_force - In the implementation block
@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
-(BOOL)_active;
-(double)force;
-(BOOL)isPlaying;
-(void)didPerformChanges;
-(void)setForce:(double)arg1 ;
-(void)statusDidChange;
-(void)setPlayerItem:(id)arg1 ;
-(ISDisplayLink *)_displayLink;
-(BOOL)_isSeeking;
-(void)_setDisplayLink:(id)arg1 ;
-(void)_update;
-(void)_setActive:(BOOL)arg1 ;
-(BOOL)isTouching;
-(float)_playRate;
-(void)setTouching:(BOOL)arg1 ;
-(void)_setPlayRate:(float)arg1 ;
-(void)_updatePlayer;
-(void)_seekVideoToBeginning;
-(void)_seekVideoToEnd;
-(void)_handleDidFinishSeeking:(BOOL)arg1 ;
-(void)_setSeeking:(BOOL)arg1 ;
@end

