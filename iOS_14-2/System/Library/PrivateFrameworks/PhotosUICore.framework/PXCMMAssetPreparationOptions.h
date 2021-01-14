/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@interface PXCMMAssetPreparationOptions : NSObject {

	BOOL _publishAsOriginal;
	BOOL _publishLivePhotoAsStill;

}

@property (assign,nonatomic) BOOL publishAsOriginal;                    //@synthesize publishAsOriginal=_publishAsOriginal - In the implementation block
@property (assign,nonatomic) BOOL publishLivePhotoAsStill;              //@synthesize publishLivePhotoAsStill=_publishLivePhotoAsStill - In the implementation block
-(id)init;
-(BOOL)publishAsOriginal;
-(BOOL)publishLivePhotoAsStill;
-(void)setPublishLivePhotoAsStill:(BOOL)arg1 ;
-(void)setPublishAsOriginal:(BOOL)arg1 ;
@end

