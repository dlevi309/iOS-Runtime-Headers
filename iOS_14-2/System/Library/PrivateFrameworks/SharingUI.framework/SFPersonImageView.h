/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

