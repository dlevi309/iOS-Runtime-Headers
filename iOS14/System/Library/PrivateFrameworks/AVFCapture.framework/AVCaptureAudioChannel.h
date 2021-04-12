/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
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
+(void)initialize;
-(void)setVolume:(float)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(float)averagePowerLevel;
-(void)invalidate;
-(BOOL)isEnabled;
-(float)volume;
-(float)peakHoldLevel;
-(void)dealloc;
@end

