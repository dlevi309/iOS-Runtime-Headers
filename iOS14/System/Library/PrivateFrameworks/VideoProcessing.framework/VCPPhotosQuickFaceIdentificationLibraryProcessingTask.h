/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <libobjc.A.dylib/VCPMADTaskProtocol.h>

@class NSArray;

@interface VCPPhotosQuickFaceIdentificationLibraryProcessingTask : NSObject <VCPMADTaskProtocol> {

	/*^block*/id _completionHandler;
	NSArray* _photoLibraries;
	atomic<bool> _started;
	atomic<bool> _cancel;

}
+(id)taskWithPhotoLibraries:(id)arg1 andCompletionHandler:(/*^block*/id)arg2 ;
+(BOOL)_concurrentFaceProcessing;
-(int)run;
-(id)init;
-(float)resourceRequirement;
-(void)_analyzeAsset:(id)arg1 withManager:(id)arg2 ;
-(id)initWithPhotoLibraries:(id)arg1 andCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)run:(id*)arg1 ;
-(void)cancel;
-(void)dealloc;
@end

