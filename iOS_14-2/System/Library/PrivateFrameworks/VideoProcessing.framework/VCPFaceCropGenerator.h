/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPFaceCropGenerator : NSObject
+(id)_faceCropDataForImage:(id)arg1 andNormalizedFaceRect:(CGRect)arg2 error:(id*)arg3 ;
+(id)_generateFaceCropWithDescriptor:(id)arg1 andCancelBlock:(id)arg2 error:(id*)arg3 ;
+(void)_reportCancellationOfRemainingFaceCropSourceDescriptors:(id)arg1 withStartingIndex:(unsigned long long)arg2 andFailureBlock:(/*^block*/id)arg3 ;
+(id)generateFaceCropsFromSourceDescriptors:(id)arg1 withProgressBlock:(/*^block*/id)arg2 andFailureBlock:(/*^block*/id)arg3 andCancelBlock:(id)arg4 ;
@end

