/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <PhotoImaging/PIVideoReframeDebugSubject.h>

@interface PIVideoReframeDebugSubjectV1 : PIVideoReframeDebugSubject {

	BOOL _usedInReframing;
	double _frameDominance;
	double _cameraCorrelation;

}

@property (assign) double frameDominance;                 //@synthesize frameDominance=_frameDominance - In the implementation block
@property (assign) double cameraCorrelation;              //@synthesize cameraCorrelation=_cameraCorrelation - In the implementation block
@property (assign) BOOL usedInReframing;                  //@synthesize usedInReframing=_usedInReframing - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)frameDominance;
-(void)setFrameDominance:(double)arg1 ;
-(double)cameraCorrelation;
-(void)setCameraCorrelation:(double)arg1 ;
-(BOOL)usedInReframing;
-(void)setUsedInReframing:(BOOL)arg1 ;
@end

