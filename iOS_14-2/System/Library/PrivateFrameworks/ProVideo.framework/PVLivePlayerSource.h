/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


@protocol PVLivePlayerSource <NSObject>
@required
-(void)pause;
-(void)play;
-(SCD_Struct_PV22*)itemTimeForHostTime:(double)arg1;
-(void)setMuted:(BOOL)arg1;
-(void)seekToTime:(SCD_Struct_PV22)arg1;
-(id)imageBufferForHostTime:(double)arg1;

@end

