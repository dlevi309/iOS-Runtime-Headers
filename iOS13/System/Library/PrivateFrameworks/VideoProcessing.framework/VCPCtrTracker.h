/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <libobjc.A.dylib/VCPBaseTracker.h>

@interface VCPCtrTracker : NSObject <VCPBaseTracker> {

	CGPoint* P;
	SCD_Struct_VC64* context;
	BOOL stable;
	BOOL lostTrack;
	float _confidence;

}

@property (assign) CGPoint* box; 
@property (assign) BOOL stableInd; 
@property (assign) BOOL lostTrackInd; 
@property (assign) float confidence;               //@synthesize confidence=_confidence - In the implementation block
-(id)init;
-(void)dealloc;
-(float)confidence;
-(void)setConfidence:(float)arg1 ;
-(CGPoint*)box;
-(void)setBox:(CGPoint*)arg1 ;
-(void)setupTrackerWithReferenceFrame:(CVBufferRef)arg1 withROI:(CGPoint*)arg2 ;
-(void)trackInFrame:(CVBufferRef)arg1 ;
-(BOOL)lostTrackInd;
-(BOOL)stableInd;
-(void)setStableInd:(BOOL)arg1 ;
-(void)setLostTrackInd:(BOOL)arg1 ;
@end

