/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


#import <CMCapture/CMCapture-Structs.h>
@class NSMutableDictionary;

@interface BWInferenceResultRingBuffers : NSObject {

	OpaqueFigSimpleMutexRef _lock;
	NSMutableDictionary* _rings;

}
-(id)init;
-(id)retrieveInferencesForType:(int)arg1 beginning:(SCD_Struct_BW8)arg2 until:(SCD_Struct_BW8)arg3 ;
-(void)insertInferenceResultsFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)setupRingBuffer:(int)arg1 inferencesOfType:(int)arg2 ;
-(void)bufferingStatsForType:(int)arg1 firstOut:(SCD_Struct_BW8*)arg2 lastOut:(SCD_Struct_BW8*)arg3 countOut:(int*)arg4 ;
-(void)dealloc;
@end

