/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNFaceprintGenerator.h>

@interface VNFaceprintGeneratorRevision1 : VNFaceprintGenerator
+(unsigned)pixelFormat;
+(id)modelPath;
+(int)clusteringConfidence;
+(unsigned long long)numberOfChannels;
+(int)imageType;
+(/*function pointer*/void*)faceDescriptorCreator;
+(CGRect)faceBoundingBox:(id)arg1 ;
+(CVBufferRef)cropFaceBoundingBoxFrom:(id)arg1 cropBounds:(CGRect)arg2 error:(id*)arg3 ;
+(1)frontalizer;
+(/*function pointer*/void*)getFaceJunkClassifier;
+(float)magnifiedBBoxScaleFactor;
@end

