/*
* Generated on Thursday, January 14, 2021 at 2:29:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/MediaCapture/H10ISP.mediacapture
*/

#import <H10ISP.mediacapture/H10ISP.mediacapture-Structs.h>
#import <libobjc.A.dylib/JDDepthProcessorDelegate.h>

@class NSString;

@interface JasperDepthProvider : NSObject <JDDepthProcessorDelegate> {

	BOOL _wakupDone;
	H10ISPDevice* _pDevice;
	H10ISPServicesRemote* _pRemote;
	unsigned _channel;
	unsigned short _minFrameRate;
	unsigned short _maxFrameRate;
	BOOL _frameRateChanged;
	int _gmoFlowBitmask;

}

@property (assign) int gmoFlowBitmask;                              //@synthesize gmoFlowBitmask=_gmoFlowBitmask - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isValid;
-(int)getSeqId;
-(void)replaceBank:(int)arg1 frameConfig:(id)arg2 ;
-(void)updateCurrentSequenceAnchors:(const JDJasperAnchors*)arg1 ;
-(void)wakeupHasCompleted:(int)arg1 ;
-(int)startOffsetSequence:(int)arg1 offsets:(const JDBankOffset*)arg2 repeat:(int)arg3 newSequence:(BOOL)arg4 ;
-(void)updateJasperCalib:(const void*)arg1 ;
-(void)updateJasperCalibSpots:(const JasperCalibSpotLocations*)arg1 ;
-(id)initWithDevice:(H10ISPDevice*)arg1 andChannel:(unsigned)arg2 andRemote:(H10ISPServicesRemote*)arg3 ;
-(void)setJasperFrameRateMin:(unsigned short)arg1 ;
-(void)setJasperFrameRateMax:(unsigned short)arg1 ;
-(BOOL)isSameDevice:(H10ISPDevice*)arg1 ;
-(int)gmoFlowBitmask;
-(void)setGmoFlowBitmask:(int)arg1 ;
@end

