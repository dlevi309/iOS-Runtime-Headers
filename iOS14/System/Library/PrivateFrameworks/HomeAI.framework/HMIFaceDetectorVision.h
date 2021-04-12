/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMIFaceDetector.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSString;

@interface HMIFaceDetectorVision : HMFObject <HMIFaceDetector, HMFLogging>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(void)releaseCachedResources;
+(id)detectFacesInImageData:(id)arg1 error:(id*)arg2 ;
+(id)detectFacesInPixelBuffer:(CVBufferRef)arg1 error:(id*)arg2 ;
@end

