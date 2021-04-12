/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/BWLandmarksInferenceConfiguration.h>

@interface BWFaceSegmentsWithLandmarksInferenceConfiguration : BWLandmarksInferenceConfiguration {

	BOOL _detectFacesInFullSizeInput;
	BOOL _skipFaceLandmarkDetection;
	BOOL _skipFoodAndDrinkDetection;
	BOOL _includesInvalidContent;

}

@property (assign,nonatomic) BOOL detectFacesInFullSizeInput;              //@synthesize detectFacesInFullSizeInput=_detectFacesInFullSizeInput - In the implementation block
@property (assign,nonatomic) BOOL skipFaceLandmarkDetection;               //@synthesize skipFaceLandmarkDetection=_skipFaceLandmarkDetection - In the implementation block
@property (assign,nonatomic) BOOL skipFoodAndDrinkDetection;               //@synthesize skipFoodAndDrinkDetection=_skipFoodAndDrinkDetection - In the implementation block
@property (assign,nonatomic) BOOL includesInvalidContent;                  //@synthesize includesInvalidContent=_includesInvalidContent - In the implementation block
+(id)configuration;
-(void)setIncludesInvalidContent:(BOOL)arg1 ;
-(BOOL)skipFaceLandmarkDetection;
-(BOOL)skipFoodAndDrinkDetection;
-(BOOL)detectFacesInFullSizeInput;
-(id)initWithInferenceType:(int)arg1 ;
-(void)setDetectFacesInFullSizeInput:(BOOL)arg1 ;
-(void)setSkipFaceLandmarkDetection:(BOOL)arg1 ;
-(void)setSkipFoodAndDrinkDetection:(BOOL)arg1 ;
-(BOOL)includesInvalidContent;
@end

