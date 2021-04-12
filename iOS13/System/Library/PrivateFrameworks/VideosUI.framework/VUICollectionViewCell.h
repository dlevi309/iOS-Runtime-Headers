/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIView;

@interface VUICollectionViewCell : UICollectionViewCell {

	UIView* _childView;

}

@property (nonatomic,retain) UIView * childView;              //@synthesize childView=_childView - In the implementation block
-(void)prepareForReuse;
-(BOOL)canBecomeFocused;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setChildView:(UIView *)arg1 ;
-(UIView *)childView;
@end

