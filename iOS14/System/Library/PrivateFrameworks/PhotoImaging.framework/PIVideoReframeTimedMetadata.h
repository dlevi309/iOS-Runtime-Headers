/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/


#import <PhotoImaging/PhotoImaging-Structs.h>
@class NSArray;

@interface PIVideoReframeTimedMetadata : NSObject {

	NSArray* _subjects;
	CGVector _estimatedCenterMotion;
	CGVector _estimatedMotionBlur;
	SCD_Struct_PI7 _time;
	SCD_Struct_PI9 _trajectoryHomography;

}

@property (readonly) SCD_Struct_PI7 time;                              //@synthesize time=_time - In the implementation block
@property (readonly) NSArray * subjects;                               //@synthesize subjects=_subjects - In the implementation block
@property (readonly) CGVector estimatedCenterMotion;                   //@synthesize estimatedCenterMotion=_estimatedCenterMotion - In the implementation block
@property (readonly) CGVector estimatedMotionBlur;                     //@synthesize estimatedMotionBlur=_estimatedMotionBlur - In the implementation block
@property (readonly) SCD_Struct_PI9 trajectoryHomography;              //@synthesize trajectoryHomography=_trajectoryHomography - In the implementation block
-(SCD_Struct_PI7)time;
-(void)setTime:(SCD_Struct_PI7)arg1 ;
-(void)setSubjects:(NSArray *)arg1 ;
-(void)setEstimatedCenterMotion:(CGVector)arg1 ;
-(void)setEstimatedMotionBlur:(CGVector)arg1 ;
-(void)setTrajectoryHomography:(SCD_Struct_PI9)arg1 ;
-(NSArray *)subjects;
-(CGVector)estimatedCenterMotion;
-(CGVector)estimatedMotionBlur;
-(SCD_Struct_PI9)trajectoryHomography;
@end

