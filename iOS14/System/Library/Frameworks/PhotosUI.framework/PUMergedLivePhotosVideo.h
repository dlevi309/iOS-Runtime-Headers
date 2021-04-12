/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


#import <PhotosUI/PhotosUI-Structs.h>
@class NSArray, AVAsset, AVVideoComposition;

@interface PUMergedLivePhotosVideo : NSObject {

	NSArray* _assets;
	NSArray* _startTimes;
	NSArray* _keyTimes;
	AVAsset* _mergedVideoAsset;
	AVVideoComposition* _mergedVideoComposition;
	double _videoAspectRatio;
	unsigned long long _options;

}

@property (nonatomic,copy,readonly) NSArray * assets;                                    //@synthesize assets=_assets - In the implementation block
@property (nonatomic,copy,readonly) NSArray * startTimes;                                //@synthesize startTimes=_startTimes - In the implementation block
@property (nonatomic,copy,readonly) NSArray * keyTimes;                                  //@synthesize keyTimes=_keyTimes - In the implementation block
@property (nonatomic,readonly) AVAsset * mergedVideoAsset;                               //@synthesize mergedVideoAsset=_mergedVideoAsset - In the implementation block
@property (nonatomic,readonly) AVVideoComposition * mergedVideoComposition;              //@synthesize mergedVideoComposition=_mergedVideoComposition - In the implementation block
@property (nonatomic,readonly) double videoAspectRatio;                                  //@synthesize videoAspectRatio=_videoAspectRatio - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                               //@synthesize options=_options - In the implementation block
-(NSArray *)assets;
-(id)debugDescription;
-(unsigned long long)options;
-(id)assetAtTime:(SCD_Struct_PH4)arg1 progress:(out double*)arg2 ;
-(long long)_assetIndexAtTime:(SCD_Struct_PH4)arg1 ;
-(AVAsset *)mergedVideoAsset;
-(NSArray *)startTimes;
-(id)initWithAssets:(id)arg1 startTimes:(id)arg2 keyTimes:(id)arg3 videoAsset:(id)arg4 videoComposition:(id)arg5 videoAspectRatio:(double)arg6 options:(unsigned long long)arg7 ;
-(AVVideoComposition *)mergedVideoComposition;
-(double)videoAspectRatio;
-(NSArray *)keyTimes;
@end

