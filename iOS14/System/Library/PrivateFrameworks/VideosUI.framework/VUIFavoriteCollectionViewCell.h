/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(VUIFavoriteView *)favoriteView;
-(void)setFavoriteView:(VUIFavoriteView *)arg1 ;
@end

