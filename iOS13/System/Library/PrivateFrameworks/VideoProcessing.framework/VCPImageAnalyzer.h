/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPImageAnalyzer : NSObject
-(int)analyzePixelBuffer:(CVBufferRef)arg1 flags:(unsigned long long*)arg2 results:(id*)arg3 cancel:(/*^block*/id)arg4 ;
-(int)processTile:(CVBufferRef)arg1 results:(id)arg2 cancel:(/*^block*/id)arg3 ;
-(int)aggregateTileResults:(id)arg1 tileRect:(CGRect)arg2 imageSize:(CGSize)arg3 landscape:(BOOL)arg4 results:(id)arg5 ;
-(int)analyzePixelBufferInTiles:(CVBufferRef)arg1 results:(id)arg2 cancel:(/*^block*/id)arg3 ;
-(int)calculateTextureness:(float*)arg1 height:(int)arg2 width:(int)arg3 sdof:(BOOL)arg4 result:(char*)arg5 ;
@end

