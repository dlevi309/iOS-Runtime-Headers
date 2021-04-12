/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)copyBlock:(char*)arg1 withStride:(unsigned long long)arg2 toBlock:(float*)arg3 ;
-(int)blockContentDetection:(unsigned long long*)arg1 ;
-(int)detectPixelBuffer:(CVBufferRef)arg1 contentType:(unsigned long long*)arg2 ;
-(void)dealloc;
@end

