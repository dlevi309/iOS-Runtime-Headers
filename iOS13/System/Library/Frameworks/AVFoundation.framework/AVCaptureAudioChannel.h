/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@class AVCaptureAudioChannelInternal;

@interface AVCaptureAudioChannel : NSObject {

	AVCaptureAudioChannelInternal* _internal;
	BOOL _enabled;
	float _volume;

}

@property (nonatomic,readonly) float averagePowerLevel; 
@property (nonatomic,readonly) float peakHoldLevel; 
@property (assign,nonatomic) float volume;                               //@synthesize volume=_volume - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
-(void)dealloc;
-(void)invalidate;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(id)initWithConnection:(id)arg1 ;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(float)averagePowerLevel;
-(float)peakHoldLevel;
@end

