/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@interface UIKeyboardCandidatePocketShadow : UICollectionReusableView {

	BOOL _shadowFadesToBottom;
	BOOL _drawsShadow;
	BOOL _showsInDarkBackground;

}

@property (assign,nonatomic) BOOL shadowFadesToBottom;                //@synthesize shadowFadesToBottom=_shadowFadesToBottom - In the implementation block
@property (assign,nonatomic) BOOL drawsShadow;                        //@synthesize drawsShadow=_drawsShadow - In the implementation block
@property (assign,nonatomic) BOOL showsInDarkBackground;              //@synthesize showsInDarkBackground=_showsInDarkBackground - In the implementation block
+(id)leftShadowImage;
+(double)widthWithShadow:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)applyLayoutAttributes:(id)arg1 ;
-(BOOL)drawsShadow;
-(void)setDrawsShadow:(BOOL)arg1 ;
-(BOOL)shadowFadesToBottom;
-(BOOL)showsInDarkBackground;
-(void)setShadowFadesToBottom:(BOOL)arg1 ;
-(void)setShowsInDarkBackground:(BOOL)arg1 ;
@end

