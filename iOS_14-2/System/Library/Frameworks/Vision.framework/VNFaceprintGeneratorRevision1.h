/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNFaceprintGenerator.h>

@interface VNFaceprintGeneratorRevision1 : VNFaceprintGenerator
+(id)modelPath;
+(unsigned)pixelFormat;
+(unsigned long long)numberOfChannels;
+(int)clusteringConfidence;
+(/*function pointer*/void*)faceDescriptorCreator;
+(CGRect)faceBoundingBox:(id)arg1 ;
+(/*function pointer*/void*)getFaceJunkClassifier;
+(float)magnifiedBBoxScaleFactor;
@end

