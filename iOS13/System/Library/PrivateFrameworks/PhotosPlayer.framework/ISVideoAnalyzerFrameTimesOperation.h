/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class AVAssetReader, AVAssetReaderSampleReferenceOutput, NSObject, AVAsset;

@interface ISVideoAnalyzerFrameTimesOperation : NSOperation {

	AVAssetReader* _assetReader;
	AVAssetReaderSampleReferenceOutput* _assetReaderOutput;
	NSObject*<OS_dispatch_queue> _workQueue;
	int _trackID;
	AVAsset* _asset;
	/*^block*/id _resultHandler;

}

@property (nonatomic,readonly) AVAsset * asset;                    //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) int trackID;                        //@synthesize trackID=_trackID - In the implementation block
@property (nonatomic,copy,readonly) id resultHandler;              //@synthesize resultHandler=_resultHandler - In the implementation block
-(void)main;
-(int)trackID;
-(AVAsset *)asset;
-(id)resultHandler;
-(id)initWithAsset:(id)arg1 trackID:(int)arg2 resultHandler:(/*^block*/id)arg3 ;
-(void)_handleAssetDidLoadValues;
@end

