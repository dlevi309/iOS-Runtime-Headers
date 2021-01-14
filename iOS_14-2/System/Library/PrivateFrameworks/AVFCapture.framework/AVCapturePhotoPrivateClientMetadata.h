/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString;

@interface AVCapturePhotoPrivateClientMetadata : NSObject <NSSecureCoding> {

	NSDictionary* _inferenceAttachments;
	NSDictionary* _detectedObjectInfo;

}

@property (readonly) NSString * captureFolderClientPath; 
@property (readonly) NSDictionary * inferenceAttachments; 
@property (readonly) NSDictionary * detectedObjectInfo; 
@property (readonly) unsigned spatialOverCaptureImageStitchingConfidenceScore; 
@property (readonly) BOOL spatialOverCaptureImageHorizonLinePresent; 
@property (readonly) float spatialOverCaptureImageHorizonLineAngleInDegrees; 
@property (readonly) float spatialOverCaptureImageHorizonLineVerticalCenterlineIntersection; 
+(BOOL)supportsSecureCoding;
-(NSDictionary *)detectedObjectInfo;
-(NSString *)captureFolderClientPath;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)spatialOverCaptureImageStitchingConfidenceScore;
-(BOOL)spatialOverCaptureImageHorizonLinePresent;
-(float)spatialOverCaptureImageHorizonLineVerticalCenterlineIntersection;
-(NSDictionary *)inferenceAttachments;
-(id)initWithMetadataDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(float)spatialOverCaptureImageHorizonLineAngleInDegrees;
-(void)dealloc;
@end

