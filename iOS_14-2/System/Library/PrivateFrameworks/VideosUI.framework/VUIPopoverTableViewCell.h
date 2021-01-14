/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class UIView, IKViewElement, IKTextElement, IKImageElement, _TVImageView, _TVLabel;

@interface VUIPopoverTableViewCell : UITableViewCell {

	BOOL _imageLoaded;
	UIView* _dimmingView;
	IKViewElement* _cardElement;
	IKTextElement* _textElement;
	IKImageElement* _imageElement;
	double _preferredHeight;
	UIView* _cardView;
	_TVImageView* _tvImageView;
	_TVLabel* _tvLabel;

}

@property (assign,getter=isImageLoaded,nonatomic) BOOL imageLoaded;              //@synthesize imageLoaded=_imageLoaded - In the implementation block
@property (nonatomic,retain) UIView * cardView;                                  //@synthesize cardView=_cardView - In the implementation block
@property (nonatomic,retain) UIView * dimmingView;                               //@synthesize dimmingView=_dimmingView - In the implementation block
@property (nonatomic,retain) _TVImageView * tvImageView;                         //@synthesize tvImageView=_tvImageView - In the implementation block
@property (nonatomic,retain) _TVLabel * tvLabel;                                 //@synthesize tvLabel=_tvLabel - In the implementation block
@property (nonatomic,retain) IKViewElement * cardElement;                        //@synthesize cardElement=_cardElement - In the implementation block
@property (nonatomic,retain) IKTextElement * textElement;                        //@synthesize textElement=_textElement - In the implementation block
@property (nonatomic,retain) IKImageElement * imageElement;                      //@synthesize imageElement=_imageElement - In the implementation block
@property (assign,nonatomic) double preferredHeight;                             //@synthesize preferredHeight=_preferredHeight - In the implementation block
-(void)prepareForReuse;
-(void)setDimmingView:(UIView *)arg1 ;
-(UIView *)cardView;
-(void)layoutSubviews;
-(double)preferredHeight;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(_TVLabel *)tvLabel;
-(void)setPreferredHeight:(double)arg1 ;
-(void)setCardView:(UIView *)arg1 ;
-(void)setTextElement:(IKTextElement *)arg1 ;
-(IKTextElement *)textElement;
-(UIView *)dimmingView;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)isImageLoaded;
-(void)setImageElement:(IKImageElement *)arg1 ;
-(IKImageElement *)imageElement;
-(IKViewElement *)cardElement;
-(_TVImageView *)tvImageView;
-(void)setCardElement:(IKViewElement *)arg1 ;
-(void)setTvLabel:(_TVLabel *)arg1 ;
-(void)setTvImageView:(_TVImageView *)arg1 ;
-(void)setImageLoaded:(BOOL)arg1 ;
@end

