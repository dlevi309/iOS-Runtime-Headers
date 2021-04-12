/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
*/

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, AVAsset;

@interface _ISPlayerItemChefOperation : NSOperation {

	NSObject*<OS_dispatch_queue> _workQueue;
	BOOL _includeVideo;
	BOOL _includeAudio;
	AVAsset* _asset;
	/*^block*/id _resultHandler;
	SCD_Struct_IS1 _photoTime;
	SCD_Struct_IS10 _trimmedTimeRange;

}

@property (nonatomic,readonly) AVAsset * asset;                               //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) SCD_Struct_IS10 trimmedTimeRange;              //@synthesize trimmedTimeRange=_trimmedTimeRange - In the implementation block
@property (nonatomic,readonly) SCD_Struct_IS1 photoTime;                      //@synthesize photoTime=_photoTime - In the implementation block
@property (nonatomic,readonly) BOOL includeVideo;                             //@synthesize includeVideo=_includeVideo - In the implementation block
@property (nonatomic,readonly) BOOL includeAudio;                             //@synthesize includeAudio=_includeAudio - In the implementation block
@property (nonatomic,copy,readonly) id resultHandler;                         //@synthesize resultHandler=_resultHandler - In the implementation block
-(void)main;
-(AVAsset *)asset;
-(SCD_Struct_IS1)photoTime;
-(id)resultHandler;
-(SCD_Struct_IS10)trimmedTimeRange;
-(id)initWithAsset:(id)arg1 trimmedTimeRange:(SCD_Struct_IS10)arg2 photoTime:(SCD_Struct_IS1)arg3 includeAudio:(BOOL)arg4 includeVideo:(BOOL)arg5 resultHandler:(/*^block*/id)arg6 ;
-(void)_handleValuesDidLoad;
-(void)_preparePlayerItem;
-(BOOL)includeVideo;
-(BOOL)includeAudio;
@end

