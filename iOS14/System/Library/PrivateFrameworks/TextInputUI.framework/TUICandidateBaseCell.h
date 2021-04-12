/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
*/

#import <UIKitCore/UICollectionViewCell.h>

@protocol TUICandidateViewStyle;
@class UIImageView;

@interface TUICandidateBaseCell : UICollectionViewCell {

	id<TUICandidateViewStyle> _style;
	UIImageView* _backgroundImageView;

}

@property (nonatomic,retain) UIImageView * backgroundImageView;              //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (nonatomic,retain) id<TUICandidateViewStyle> style;                //@synthesize style=_style - In the implementation block
-(UIImageView *)backgroundImageView;
-(id)cellBackgroundColor;
-(id)cellBackgroundImage;
-(void)setSelected:(BOOL)arg1 ;
-(void)updateColors;
-(void)updateBackground:(id)arg1 color:(id)arg2 ;
-(void)setBackgroundImageView:(UIImageView *)arg1 ;
-(void)setStyle:(id<TUICandidateViewStyle>)arg1 ;
-(id<TUICandidateViewStyle>)style;
-(void)setHighlighted:(BOOL)arg1 ;
@end

