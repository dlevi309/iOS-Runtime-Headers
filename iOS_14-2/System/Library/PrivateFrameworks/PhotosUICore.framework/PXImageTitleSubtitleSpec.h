/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXViewSpec.h>

@class PXTitleSubtitleLabelSpec, PXImageViewSpec;

@interface PXImageTitleSubtitleSpec : PXViewSpec {

	PXTitleSubtitleLabelSpec* _titleSubtitleSpec;
	PXImageViewSpec* _imageSpec;

}

@property (nonatomic,retain) PXTitleSubtitleLabelSpec * titleSubtitleSpec;              //@synthesize titleSubtitleSpec=_titleSubtitleSpec - In the implementation block
@property (nonatomic,retain) PXImageViewSpec * imageSpec;                               //@synthesize imageSpec=_imageSpec - In the implementation block
-(unsigned long long)hash;
-(PXImageViewSpec *)imageSpec;
-(PXTitleSubtitleLabelSpec *)titleSubtitleSpec;
-(void)setTitleSubtitleSpec:(PXTitleSubtitleLabelSpec *)arg1 ;
-(void)setImageSpec:(PXImageViewSpec *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

