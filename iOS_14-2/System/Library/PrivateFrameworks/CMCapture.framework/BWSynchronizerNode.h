/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@interface BWSynchronizerNode : BWNode {

	OpaqueCMClockRef _sourceClock;
	OpaqueCMClockRef _masterClock;
	SCD_Struct_BW39 _ptsSyncHistory[16];
	int _oldestPTSSyncHistoryElement;
	int _newestPTSSyncHistoryElement;

}
+(void)initialize;
-(OpaqueCMClockRef)masterClock;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(id)nodeType;
-(id)nodeSubType;
-(opaqueCMSampleBufferRef)_newRetimedVideoSampleBuffer:(opaqueCMSampleBufferRef)arg1 updatePTSSyncHistory:(BOOL)arg2 ;
-(SCD_Struct_BW8)_getSyncedTimeForSourceTime:(SCD_Struct_BW8)arg1 ;
-(void)setMasterClock:(OpaqueCMClockRef)arg1 ;
-(void)_synchronizeDetectedFaces:(id)arg1 metadata:(id)arg2 timescale:(int)arg3 ;
-(void)setSourceClock:(OpaqueCMClockRef)arg1 ;
-(id)initWithMediaType:(unsigned)arg1 ;
-(void)_updatePTSSyncHistoryWithSourceTime:(SCD_Struct_BW8)arg1 syncedTime:(SCD_Struct_BW8)arg2 ;
-(OpaqueCMClockRef)sourceClock;
-(void)dealloc;
@end

