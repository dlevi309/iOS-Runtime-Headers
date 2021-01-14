/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <libobjc.A.dylib/PXSearchResultThumbnailCell.h>

@class UIImageView, NSString;

@interface PXSearchResultAssetCell : UICollectionViewCell <PXSearchResultThumbnailCell> {

	UIImageView* _thumbnailImageView;

}

@property (nonatomic,readonly) UIImageView * thumbnailImageView;              //@synthesize thumbnailImageView=_thumbnailImageView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)reuseIdentifier;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)prepareForReuse;
-(UIImageView *)thumbnailImageView;
-(CGSize)thumbnailImageViewPixelSize;
-(void)setThumbnailImage:(id)arg1 ;
@end

