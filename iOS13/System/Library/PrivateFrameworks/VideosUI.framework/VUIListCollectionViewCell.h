/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <UIKitCore/UICollectionViewCell.h>

@class UIColor;

@interface VUIListCollectionViewCell : UICollectionViewCell {

	BOOL _shouldAppearSelected;
	UIColor* _backgroundColor;
	UIColor* _highlightedBackgroundColor;

}

@property (nonatomic,retain) UIColor * backgroundColor;                         //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * highlightedBackgroundColor;              //@synthesize highlightedBackgroundColor=_highlightedBackgroundColor - In the implementation block
@property (assign,nonatomic) BOOL shouldAppearSelected;                         //@synthesize shouldAppearSelected=_shouldAppearSelected - In the implementation block
-(void)prepareForReuse;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(UIColor *)highlightedBackgroundColor;
-(void)setHighlightedBackgroundColor:(UIColor *)arg1 ;
-(void)setShouldAppearSelected:(BOOL)arg1 ;
-(BOOL)shouldAppearSelected;
@end

