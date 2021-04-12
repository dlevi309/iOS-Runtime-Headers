/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/


@interface BurstClusterDivider : NSObject {

	float dividerScore;
	int trueLocalMaximum;
	int leftImage;
	float actionAmount;
	float noiseThreshold;
	float highNoiseThreshold;

}

@property (assign) float dividerScore; 
@property (assign) int trueLocalMaximum; 
@property (assign) int leftImage; 
@property (assign) float actionAmount; 
@property (assign) float noiseThreshold; 
@property (assign) float highNoiseThreshold; 
-(float)dividerScore;
-(int)leftImage;
-(float)actionAmount;
-(long long)compareDividers:(id)arg1 ;
-(long long)compareIndices:(id)arg1 ;
-(long long)compareActionAmounts:(id)arg1 ;
-(void)setDividerScore:(float)arg1 ;
-(void)setLeftImage:(int)arg1 ;
-(int)trueLocalMaximum;
-(void)setTrueLocalMaximum:(int)arg1 ;
-(void)setActionAmount:(float)arg1 ;
-(float)noiseThreshold;
-(void)setNoiseThreshold:(float)arg1 ;
-(float)highNoiseThreshold;
-(void)setHighNoiseThreshold:(float)arg1 ;
@end

