/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isValid;
-(void)updateCurrentSequenceAnchors:(const JDJasperAnchors*)arg1 ;
-(void)updateJasperCalibSpots:(const JasperCalibSpotLocations*)arg1 ;
-(int)startOffsetSequence:(int)arg1 offsets:(const JDBankOffset*)arg2 repeat:(int)arg3 newSequence:(BOOL)arg4 ;
-(int)getSeqId;
-(void)wakeupHasCompleted:(int)arg1 ;
-(id)initWithDevice:(H10ISPDevice*)arg1 andChannel:(unsigned)arg2 andRemote:(H10ISPServicesRemote*)arg3 ;
@end

