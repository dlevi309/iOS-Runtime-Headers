/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


@protocol VCPBaseTracker
@property (assign) CGPoint* box; 
@property (assign) BOOL stableInd; 
@property (assign) BOOL lostTrackInd; 
@required
-(id)init;
-(CGPoint*)box;
-(void)setBox:(CGPoint*)arg1;
-(void)setupTrackerWithReferenceFrame:(CVBufferRef)arg1 withROI:(CGPoint*)arg2;
-(void)trackInFrame:(CVBufferRef)arg1;
-(BOOL)lostTrackInd;
-(BOOL)stableInd;
-(void)setStableInd:(BOOL)arg1;
-(void)setLostTrackInd:(BOOL)arg1;

@end

