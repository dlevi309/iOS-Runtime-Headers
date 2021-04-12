/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonaUI.framework/PersonaUI
*/

#import <PersonaUI/PersonaUI-Structs.h>
#import <UIKitCore/UIView.h>

@class PRMonogramView, PRImageView, NSData, PRLikeness;

@interface PRLikenessView : UIView {

	BOOL _circular;
	PRMonogramView* _monogramView;
	PRImageView* _imageView;
	unsigned long long _likenessType;
	NSData* _recipe;
	CGRect _cropRect;
	CGImageRef _staticRepresentation;
	BOOL _highlighted;
	BOOL _shouldDecode;
	PRLikeness* _likeness;

}

@property (assign,getter=isCircular,nonatomic) BOOL circular;              //@synthesize circular=_circular - In the implementation block
@property (assign,nonatomic) BOOL highlighted;                             //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,nonatomic) BOOL shouldDecode;                            //@synthesize shouldDecode=_shouldDecode - In the implementation block
@property (nonatomic,retain) PRLikeness * likeness;                        //@synthesize likeness=_likeness - In the implementation block
+(void)initialize;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)_imageView;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)highlighted;
-(id)initWithLikeness:(id)arg1 ;
-(BOOL)isCircular;
-(void)setCircular:(BOOL)arg1 ;
-(id)_monogramView;
-(PRLikeness *)likeness;
-(void)_updateViewForLikeness:(BOOL)arg1 ;
-(BOOL)_shouldRenderStaticRepresentation;
-(void)_setDisplayedView:(id)arg1 ;
-(void)_imageForLikeness:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_isLikenessEqual:(id)arg1 ;
-(void)setLikeness:(PRLikeness *)arg1 ;
-(void)setNeedsRedraw;
-(BOOL)shouldDecode;
-(void)setShouldDecode:(BOOL)arg1 ;
@end

