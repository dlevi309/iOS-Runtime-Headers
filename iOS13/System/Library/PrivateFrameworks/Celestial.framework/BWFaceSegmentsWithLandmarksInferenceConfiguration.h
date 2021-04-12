/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/BWLandmarksInferenceConfiguration.h>

@interface BWFaceSegmentsWithLandmarksInferenceConfiguration : BWLandmarksInferenceConfiguration {

	BOOL _detectFacesInFullSizeInput;
	BOOL _skipFaceLandmarkDetection;
	BOOL _includesInvalidContent;

}

@property (assign,nonatomic) BOOL detectFacesInFullSizeInput;              //@synthesize detectFacesInFullSizeInput=_detectFacesInFullSizeInput - In the implementation block
@property (assign,nonatomic) BOOL skipFaceLandmarkDetection;               //@synthesize skipFaceLandmarkDetection=_skipFaceLandmarkDetection - In the implementation block
@property (assign,nonatomic) BOOL includesInvalidContent;                  //@synthesize includesInvalidContent=_includesInvalidContent - In the implementation block
+(id)configuration;
-(BOOL)includesInvalidContent;
-(id)initWithInferenceType:(int)arg1 ;
-(void)setIncludesInvalidContent:(BOOL)arg1 ;
-(void)setDetectFacesInFullSizeInput:(BOOL)arg1 ;
-(BOOL)detectFacesInFullSizeInput;
-(BOOL)skipFaceLandmarkDetection;
-(void)setSkipFaceLandmarkDetection:(BOOL)arg1 ;
@end

