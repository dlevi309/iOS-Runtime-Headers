/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString;

@interface AVCapturePhotoPrivateClientMetadata : NSObject <NSSecureCoding> {

	NSDictionary* _inferenceAttachments;
	NSDictionary* _detectedObjectInfo;
	unsigned _spatialOverCaptureImageStitchingConfidenceScore;
	BOOL _spatialOverCaptureImageHorizonLinePresent;
	float _spatialOverCaptureImageHorizonLineAngleInDegrees;
	float _spatialOverCaptureImageHorizonLineVerticalCenterlineIntersection;

}

@property (readonly) NSString * captureFolderClientPath; 
@property (readonly) NSDictionary * inferenceAttachments; 
@property (readonly) NSDictionary * detectedObjectInfo; 
@property (readonly) unsigned spatialOverCaptureImageStitchingConfidenceScore; 
@property (readonly) BOOL spatialOverCaptureImageHorizonLinePresent; 
@property (readonly) float spatialOverCaptureImageHorizonLineAngleInDegrees; 
@property (readonly) float spatialOverCaptureImageHorizonLineVerticalCenterlineIntersection; 
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithMetadataDictionary:(id)arg1 ;
-(NSDictionary *)inferenceAttachments;
-(NSDictionary *)detectedObjectInfo;
-(unsigned)spatialOverCaptureImageStitchingConfidenceScore;
-(BOOL)spatialOverCaptureImageHorizonLinePresent;
-(float)spatialOverCaptureImageHorizonLineAngleInDegrees;
-(float)spatialOverCaptureImageHorizonLineVerticalCenterlineIntersection;
-(NSString *)captureFolderClientPath;
@end

