/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
*/

#import <UIKitCore/UIImageView.h>

@interface SFPersonImageView : UIImageView {

	BOOL _imageIsSquare;
	double _highlightDarkeningAlpha;

}

@property (assign,nonatomic) BOOL imageIsSquare;                          //@synthesize imageIsSquare=_imageIsSquare - In the implementation block
@property (assign,nonatomic) double highlightDarkeningAlpha;              //@synthesize highlightDarkeningAlpha=_highlightDarkeningAlpha - In the implementation block
+(id)darkenImage:(id)arg1 toLevel:(double)arg2 ;
-(void)setImage:(id)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setImageIsSquare:(BOOL)arg1 ;
-(BOOL)imageIsSquare;
-(double)highlightDarkeningAlpha;
-(id)initWithImage:(id)arg1 isSquare:(BOOL)arg2 ;
-(void)setHighlightDarkeningAlpha:(double)arg1 ;
@end

