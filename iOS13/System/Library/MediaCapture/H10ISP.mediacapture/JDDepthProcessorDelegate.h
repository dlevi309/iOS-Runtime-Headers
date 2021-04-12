/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/MediaCapture/H10ISP.mediacapture
*/


@protocol JDDepthProcessorDelegate <NSObject>
@optional
-(void)wakeupHasCompleted:(int)arg1;
-(void)replaceBank:(int)arg1 frameConfig:(id)arg2;

@required
-(void)updateCurrentSequenceAnchors:(const JDJasperAnchors*)arg1;
-(void)updateJasperCalibSpots:(const JasperCalibSpotLocations*)arg1;
-(int)startOffsetSequence:(int)arg1 offsets:(const JDBankOffset*)arg2 repeat:(int)arg3 newSequence:(BOOL)arg4;
-(int)getSeqId;

@end

