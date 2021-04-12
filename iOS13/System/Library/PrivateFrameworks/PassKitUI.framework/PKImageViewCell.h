/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKitCore/UITableViewCell.h>

@class UIImageView, UIImage;

@interface PKImageViewCell : UITableViewCell {

	BOOL _matchCellBackgroundToImage;
	long long _imageViewContentMode;

}

@property (nonatomic,readonly) UIImageView * imageView; 
@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic) long long imageViewContentMode;               //@synthesize imageViewContentMode=_imageViewContentMode - In the implementation block
@property (assign,nonatomic) BOOL matchCellBackgroundToImage;              //@synthesize matchCellBackgroundToImage=_matchCellBackgroundToImage - In the implementation block
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(void)setContentMode:(long long)arg1 ;
-(void)layoutSubviews;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(long long)imageViewContentMode;
-(void)setMatchCellBackgroundToImage:(BOOL)arg1 ;
-(void)setImageViewContentMode:(long long)arg1 ;
-(BOOL)matchCellBackgroundToImage;
@end

