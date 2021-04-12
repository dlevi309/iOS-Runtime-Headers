/*
* Generated on Thursday, January 14, 2021 at 2:29:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/MediaCapture/H10ISP.mediacapture
*/


@protocol JDDepthProcessorDelegate <NSObject>
@optional
-(void)replaceBank:(int)arg1 frameConfig:(id)arg2;
-(void)wakeupHasCompleted:(int)arg1;
-(void)updateJasperCalib:(const void*)arg1;

@required
-(int)getSeqId;
-(void)updateCurrentSequenceAnchors:(const JDJasperAnchors*)arg1;
-(int)startOffsetSequence:(int)arg1 offsets:(const JDBankOffset*)arg2 repeat:(int)arg3 newSequence:(BOOL)arg4;
-(void)updateJasperCalibSpots:(const JasperCalibSpotLocations*)arg1;

@end

