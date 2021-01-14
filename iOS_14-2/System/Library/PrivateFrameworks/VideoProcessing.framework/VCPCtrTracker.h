/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <libobjc.A.dylib/VCPBaseTracker.h>

@interface VCPCtrTracker : NSObject <VCPBaseTracker> {

	CGPoint* P;
	SCD_Struct_VC72* context;
	BOOL stable;
	BOOL lostTrack;
	float _confidence;

}

@property (assign) CGPoint* box; 
@property (assign) BOOL stableInd; 
@property (assign) BOOL lostTrackInd; 
@property (assign) float confidence;               //@synthesize confidence=_confidence - In the implementation block
-(float)confidence;
-(id)init;
-(void)setBox:(CGPoint*)arg1 ;
-(void)setConfidence:(float)arg1 ;
-(void)setupTrackerWithReferenceFrame:(CVBufferRef)arg1 withROI:(CGPoint*)arg2 ;
-(void)trackInFrame:(CVBufferRef)arg1 ;
-(BOOL)lostTrackInd;
-(BOOL)stableInd;
-(void)setStableInd:(BOOL)arg1 ;
-(void)setLostTrackInd:(BOOL)arg1 ;
-(CGPoint*)box;
-(void)dealloc;
@end

