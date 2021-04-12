/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


#import <Celestial/Celestial-Structs.h>
@class NSMutableDictionary;

@interface BWInferenceResultRingBuffers : NSObject {

	OpaqueFigSimpleMutexRef _lock;
	NSMutableDictionary* _rings;

}
-(id)init;
-(void)dealloc;
-(void)insertInferenceResultsFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)setupRingBuffer:(int)arg1 inferencesOfType:(int)arg2 ;
-(id)retrieveInferencesForType:(int)arg1 beginning:(SCD_Struct_BW2)arg2 until:(SCD_Struct_BW2)arg3 ;
-(void)bufferingStatsForType:(int)arg1 firstOut:(SCD_Struct_BW2*)arg2 lastOut:(SCD_Struct_BW2*)arg3 countOut:(int*)arg4 ;
@end

