/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


@protocol VCPBaseTracker
@property (assign) CGPoint* box; 
@property (assign) BOOL stableInd; 
@property (assign) BOOL lostTrackInd; 
@required
-(id)init;
-(void)setBox:(CGPoint*)arg1;
-(void)setupTrackerWithReferenceFrame:(CVBufferRef)arg1 withROI:(CGPoint*)arg2;
-(void)trackInFrame:(CVBufferRef)arg1;
-(BOOL)lostTrackInd;
-(BOOL)stableInd;
-(void)setStableInd:(BOOL)arg1;
-(void)setLostTrackInd:(BOOL)arg1;
-(CGPoint*)box;

@end

