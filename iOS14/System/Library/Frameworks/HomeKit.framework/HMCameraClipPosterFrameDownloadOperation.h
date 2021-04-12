/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HMFoundation/HMFOperation.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMCameraClipFetchAssetContextOperationDataSource;
@class HMCameraClip, HMCameraClipPosterFrame, NSURL, HMCameraClipManager, NSString;

@interface HMCameraClipPosterFrameDownloadOperation : HMFOperation <HMFLogging> {

	HMCameraClip* _clip;
	HMCameraClipPosterFrame* _posterFrame;
	NSURL* _destinationFileURL;
	/*^block*/id _downloadPosterFrameCompletionBlock;
	HMCameraClipManager* _clipManager;
	id<HMCameraClipFetchAssetContextOperationDataSource> _dataSource;

}

@property (readonly) HMCameraClipManager * clipManager;                                            //@synthesize clipManager=_clipManager - In the implementation block
@property (readonly) id<HMCameraClipFetchAssetContextOperationDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) HMCameraClip * clip;                                                          //@synthesize clip=_clip - In the implementation block
@property (readonly) HMCameraClipPosterFrame * posterFrame;                                        //@synthesize posterFrame=_posterFrame - In the implementation block
@property (copy) NSURL * destinationFileURL;                                                       //@synthesize destinationFileURL=_destinationFileURL - In the implementation block
@property (copy) id downloadPosterFrameCompletionBlock;                                            //@synthesize downloadPosterFrameCompletionBlock=_downloadPosterFrameCompletionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(HMCameraClip *)clip;
-(HMCameraClipPosterFrame *)posterFrame;
-(id)fetchImageData;
-(id)initWithClipManager:(id)arg1 clip:(id)arg2 posterFrame:(id)arg3 dataSource:(id)arg4 ;
-(id)downloadPosterFrameCompletionBlock;
-(id)writeImageData:(id)arg1 ;
-(void)finishWithImageData:(id)arg1 ;
-(id)fetchAssetContext;
-(id)downloadImageDataForAssetContext:(id)arg1 ;
-(id)decryptData:(id)arg1 ;
-(id)initWithClipManager:(id)arg1 clip:(id)arg2 posterFrame:(id)arg3 ;
-(void)setDownloadPosterFrameCompletionBlock:(id)arg1 ;
-(void)cancelWithError:(id)arg1 ;
-(id<HMCameraClipFetchAssetContextOperationDataSource>)dataSource;
-(id)logIdentifier;
-(NSString *)description;
-(void)main;
-(NSURL *)destinationFileURL;
-(void)setDestinationFileURL:(NSURL *)arg1 ;
-(HMCameraClipManager *)clipManager;
@end

