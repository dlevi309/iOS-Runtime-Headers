/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
*/


@protocol PGMutablePlaybackStateFaceTimeSupport <NSObject>
@property (assign,nonatomic) BOOL supportsFaceTimeActions; 
@property (assign,getter=isCameraActive,nonatomic) BOOL cameraActive; 
@property (assign,nonatomic) BOOL canSwitchCamera; 
@property (assign,getter=isMicrophoneMuted,nonatomic) BOOL microphoneMuted; 
@required
-(void)setMicrophoneMuted:(BOOL)arg1;
-(BOOL)isMicrophoneMuted;
-(BOOL)supportsFaceTimeActions;
-(void)setSupportsFaceTimeActions:(BOOL)arg1;
-(BOOL)isCameraActive;
-(void)setCameraActive:(BOOL)arg1;
-(BOOL)canSwitchCamera;
-(void)setCanSwitchCamera:(BOOL)arg1;

@end

