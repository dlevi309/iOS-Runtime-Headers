/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class AVAsset, NSURL;

@interface PXAutoloopVideoInput : NSObject {

	AVAsset* _asset;
	NSURL* _imageURL;

}

@property (nonatomic,copy,readonly) AVAsset * asset;              //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) NSURL * imageURL;                  //@synthesize imageURL=_imageURL - In the implementation block
+(id)inputWithAsset:(id)arg1 imageURL:(id)arg2 ;
-(AVAsset *)asset;
-(NSURL *)imageURL;
-(id)initWithAsset:(id)arg1 imageURL:(id)arg2 ;
@end

