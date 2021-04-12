/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <libobjc.A.dylib/VCPMADTaskProtocol.h>

@class NSArray;

@interface VCPPhotosSceneprintAssetProcessingTask : NSObject <VCPMADTaskProtocol> {

	/*^block*/id _completionHandler;
	NSArray* _assets;
	atomic<bool> _started;
	atomic<bool> _cancel;

}
+(id)taskWithAssets:(id)arg1 andCompletionHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(int)run;
-(void)cancel;
-(BOOL)run:(id*)arg1 ;
-(id)initWithAssets:(id)arg1 andCompletionHandler:(/*^block*/id)arg2 ;
-(float)resourceRequirement;
@end

