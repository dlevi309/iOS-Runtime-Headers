/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <libobjc.A.dylib/VCPMADTaskProtocol.h>

@class NSDictionary;

@interface VCPVoiceOverAssetProcessingTask : NSObject <VCPMADTaskProtocol> {

	BOOL _processingTypeScene;
	BOOL _processingTypeFace;
	unsigned long long _analysisFlags;
	NSDictionary* _options;
	CF<__CVBuffer *>* _inputBuffer;
	atomic<bool> _started;
	atomic<bool> _cancel;
	/*^block*/id _completionHandler;

}
+(id)taskWithProcessingTypes:(id)arg1 forPixelBuffer:(CVBufferRef)arg2 withOptions:(id)arg3 andCompletionHandler:(/*^block*/id)arg4 ;
-(int)run;
-(float)resourceRequirement;
-(id)initWithProcessingTypes:(id)arg1 forPixelBuffer:(CVBufferRef)arg2 withOptions:(id)arg3 andCompletionHandler:(/*^block*/id)arg4 ;
-(int)_analyzeFace:(id*)arg1 error:(id*)arg2 ;
-(int)_analyzeScene:(id*)arg1 error:(id*)arg2 ;
-(void)cancel;
-(void)dealloc;
@end

