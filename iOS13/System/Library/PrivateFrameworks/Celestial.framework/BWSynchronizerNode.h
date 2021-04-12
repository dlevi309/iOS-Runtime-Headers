/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@interface BWSynchronizerNode : BWNode {

	OpaqueCMClockRef _sourceClock;
	OpaqueCMClockRef _masterClock;
	SCD_Struct_BW11 _ptsSyncHistory[16];
	int _oldestPTSSyncHistoryElement;
	int _newestPTSSyncHistoryElement;

}
+(void)initialize;
-(void)dealloc;
-(id)nodeType;
-(OpaqueCMClockRef)masterClock;
-(void)setMasterClock:(OpaqueCMClockRef)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(id)initWithMediaType:(unsigned)arg1 ;
-(void)setSourceClock:(OpaqueCMClockRef)arg1 ;
-(opaqueCMSampleBufferRef)_newRetimedVideoSampleBuffer:(opaqueCMSampleBufferRef)arg1 updatePTSSyncHistory:(BOOL)arg2 ;
-(SCD_Struct_BW2)_getSyncedTimeForSourceTime:(SCD_Struct_BW2)arg1 ;
-(void)_updatePTSSyncHistoryWithSourceTime:(SCD_Struct_BW2)arg1 syncedTime:(SCD_Struct_BW2)arg2 ;
-(void)_synchronizeDetectedFaces:(id)arg1 metadata:(id)arg2 timescale:(int)arg3 ;
-(OpaqueCMClockRef)sourceClock;
@end

