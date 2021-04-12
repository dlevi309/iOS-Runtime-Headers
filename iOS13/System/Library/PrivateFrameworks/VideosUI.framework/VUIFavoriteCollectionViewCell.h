/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIListCollectionViewCell.h>

@class VUIFavoriteView, IKViewElement;

@interface VUIFavoriteCollectionViewCell : VUIListCollectionViewCell {

	VUIFavoriteView* _favoriteView;
	IKViewElement* _viewElement;

}

@property (nonatomic,retain) IKViewElement * viewElement;                 //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,retain) VUIFavoriteView * favoriteView;              //@synthesize favoriteView=_favoriteView - In the implementation block
+(id)configureWithElement:(id)arg1 existingView:(id)arg2 ;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(VUIFavoriteView *)favoriteView;
-(void)setFavoriteView:(VUIFavoriteView *)arg1 ;
@end

