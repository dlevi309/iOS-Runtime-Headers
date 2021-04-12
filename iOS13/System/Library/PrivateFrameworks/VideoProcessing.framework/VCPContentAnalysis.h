/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class VCPCNNModel, VCPCNNData;

@interface VCPContentAnalysis : NSObject {

	VCPCNNModel* _model;
	VCPCNNData* _input;
	unsigned long long _previousContentType;
	CVBufferRef _argbPixelBuffer;
	OpaqueVTPixelTransferSessionRef _argbTransferSession;

}
+(id)contentAnalysis;
-(id)init;
-(void)dealloc;
-(void)copyBlock:(char*)arg1 withStride:(unsigned long long)arg2 toBlock:(float*)arg3 ;
-(int)blockContentDetection:(unsigned long long*)arg1 ;
-(int)detectPixelBuffer:(CVBufferRef)arg1 contentType:(unsigned long long*)arg2 ;
@end

