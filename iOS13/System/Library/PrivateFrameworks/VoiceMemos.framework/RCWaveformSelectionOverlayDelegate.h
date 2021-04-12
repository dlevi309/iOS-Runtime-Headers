/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/


@protocol RCWaveformSelectionOverlayDelegate <NSObject>
@required
-(void)waveformSelectionOverlay:(id)arg1 willBeginTrackingSelectionBeginTime:(BOOL)arg2 endTime:(BOOL)arg3 assetCurrentTime:(BOOL)arg4;
-(void)waveformSelectionOverlay:(id)arg1 didFinishTrackingSelectionBeginTime:(BOOL)arg2 endTime:(BOOL)arg3 assetCurrentTime:(BOOL)arg4;
-(SCD_Struct_RC3*)waveformSelectionOverlay:(id)arg1 willChangeSelectedTimeRange:(SCD_Struct_RC3)arg2 isTrackingMin:(BOOL)arg3 isTrackingMax:(BOOL)arg4;
-(double)waveformSelectionOverlay:(id)arg1 willChangeAssetCurrentTime:(double)arg2 isTracking:(BOOL)arg3;
-(double)waveformSelectionOverlay:(id)arg1 offsetForTime:(double)arg2;
-(double)waveformSelectionOverlay:(id)arg1 timeForOffset:(double)arg2;
-(double)waveformSelectionOverlayGetCurrentTime:(id)arg1;

@end

