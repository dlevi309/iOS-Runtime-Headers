/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <libobjc.A.dylib/VCPMADTaskProtocol.h>

@class NSArray, PHPhotoLibrary, VCPDatabaseReader;

@interface VCPVideoStabilizationAssetProcessingTask : NSObject <VCPMADTaskProtocol> {

	/*^block*/id _completionHandler;
	NSArray* _assets;
	PHPhotoLibrary* _photoLibrary;
	VCPDatabaseReader* _database;
	atomic<bool> _cancel;
	atomic<bool> _started;
	unsigned long long _stabilizationType;
	BOOL _onDemandPixel;
	BOOL _onDemandGyro;

}
+(id)taskWithAssets:(id)arg1 andOptions:(id)arg2 andCompletionHandler:(/*^block*/id)arg3 ;
-(int)run;
-(float)resourceRequirement;
-(id)initWithAssets:(id)arg1 andOptions:(id)arg2 andCompletionHandler:(/*^block*/id)arg3 ;
-(int)main;
-(void)cancel;
-(void)dealloc;
@end

