/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSString;

@interface HMIFaceprinter : HMFObject <HMFLogging>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)currentModelUUID;
+(long long)_minorVersionFromVisionVersion:(int)arg1 ;
-(void)warmStart;
-(CVBufferRef)createFacePixelBufferForFaceDetection:(id)arg1 pixelBuffer:(CVBufferRef)arg2 roll:(id)arg3 error:(id*)arg4 ;
-(id)createFaceprintForFacePixelBuffer:(CVBufferRef)arg1 fastMode:(BOOL)arg2 error:(id*)arg3 ;
-(CVBufferRef)createFacePixelBufferFromFaceCrop:(id)arg1 error:(id*)arg2 ;
-(id)generateFaceprintForFaceCrop:(id)arg1 error:(id*)arg2 ;
-(id)updatedFaceprintsForFaceCrops:(id)arg1 withExistingFaceprints:(id)arg2 error:(id*)arg3 ;
@end

