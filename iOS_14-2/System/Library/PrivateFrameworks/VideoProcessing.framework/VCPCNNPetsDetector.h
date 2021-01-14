/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPCNNPetsDetector : NSObject
+(id)detector:(int)arg1 ;
-(int)postProcBoxes:(id)arg1 maxNumRegions:(int)arg2 ;
-(int)petsDetection:(CVBufferRef)arg1 petsRegions:(id)arg2 petsFaceRegions:(id)arg3 cancel:(/*^block*/id)arg4 ;
-(int)generatePetsRegions:(float*)arg1 outHeight:(int)arg2 outWidth:(int)arg3 boxes:(id)arg4 faceBoxes:(id)arg5 maxNumRegions:(int)arg6 ;
-(int)createModel:(int)arg1 srcWidth:(int)arg2 ;
-(int)generatePetsBoxes:(id)arg1 faceBoxes:(id)arg2 cancel:(/*^block*/id)arg3 ;
-(float*)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int*)arg3 cnnInputWidth:(int*)arg4 ;
-(void)nonMaxSuppression:(id)arg1 ;
-(int)copyImage:(CVBufferRef)arg1 toData:(float*)arg2 withChannels:(int)arg3 ;
-(int)createInput:(float*)arg1 withBuffer:(CVBufferRef)arg2 cnnInputHeight:(int)arg3 cnnInputWidth:(int)arg4 ;
@end

