/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(unsigned long long)_panoVNRequestMethod;
+(id)taskWithAssets:(id)arg1 andCompletionHandler:(/*^block*/id)arg2 ;
-(int)run;
-(id)initWithAssets:(id)arg1 andCompletionHandler:(/*^block*/id)arg2 ;
-(float)resourceRequirement;
-(BOOL)run:(id*)arg1 ;
-(void)cancel;
-(void)dealloc;
@end

