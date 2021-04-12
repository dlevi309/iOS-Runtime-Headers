/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


@protocol PVLivePlayerSource <NSObject>
@required
-(void)pause;
-(void)play;
-(void)setMuted:(BOOL)arg1;
-(void)seekToTime:(SCD_Struct_PV20)arg1;
-(SCD_Struct_PV20*)itemTimeForHostTime:(double)arg1;
-(id)imageBufferForHostTime:(double)arg1;

@end

