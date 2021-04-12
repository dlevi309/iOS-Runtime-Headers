/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <UIKitCore/UIView.h>

@class UIImageView, SUReflectionView;

@interface SUReflectionImageView : UIView {

	double _reflectionHeight;
	double _spacing;
	double _reflectionAlpha;
	BOOL _useImageSize;
	unsigned _nonSquareImage : 1;
	UIImageView* _imageView;
	SUReflectionView* _reflection;

}

@property (assign,nonatomic) double reflectionSpacing;              //@synthesize spacing=_spacing - In the implementation block
@property (assign,nonatomic) BOOL nonSquareImage; 
-(id)init;
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(id)initWithReflectionHeight:(double)arg1 spacing:(double)arg2 ;
-(BOOL)nonSquareImage;
-(void)setNonSquareImage:(BOOL)arg1 ;
-(void)setReflectionAlphaWhenVisible:(double)arg1 ;
-(void)setReflectionVisible:(BOOL)arg1 ;
-(void)setUseImageSize:(BOOL)arg1 ;
-(double)reflectionSpacing;
-(void)setReflectionSpacing:(double)arg1 ;
@end

