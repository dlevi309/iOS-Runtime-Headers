/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXLayoutTemplate.h>

@interface PXCollectionTileLayoutTemplate : PXLayoutTemplate {

	CGRect _imageRect;
	CGRect _titleSubtitleRect;

}

@property (nonatomic,readonly) CGRect imageRect;                      //@synthesize imageRect=_imageRect - In the implementation block
@property (nonatomic,readonly) CGRect titleSubtitleRect;              //@synthesize titleSubtitleRect=_titleSubtitleRect - In the implementation block
-(CGRect)titleSubtitleRect;
-(CGRect)imageRect;
-(void)prepare;
@end

