/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id<TUICandidateViewStyle>)style;
-(void)setStyle:(id<TUICandidateViewStyle>)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(UIImageView *)backgroundImageView;
-(id)cellBackgroundColor;
-(id)cellBackgroundImage;
-(void)setBackgroundImageView:(UIImageView *)arg1 ;
-(void)updateColors;
-(void)updateBackground:(id)arg1 color:(id)arg2 ;
@end

