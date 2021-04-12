/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIImageView;

@interface AVTAvatarLibraryCollectionViewCell : UICollectionViewCell {

	UIImageView* _imageView;

}

@property (nonatomic,readonly) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
+(id)cellIdentifier;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(void)updateAvatarImage:(id)arg1 ;
@end

