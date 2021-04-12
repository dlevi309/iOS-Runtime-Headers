/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <NotesUI/NotesUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NotesTextureView;

@interface NotesTextureBackgroundView : UIView {

	double _textureHeight;
	double _scrollOffset;
	BOOL _scrollsTexture;
	NotesTextureView* _textureView;

}

@property (nonatomic,readonly) NotesTextureView * textureView;              //@synthesize textureView=_textureView - In the implementation block
@property (assign) BOOL scrollsTexture;                                     //@synthesize scrollsTexture=_scrollsTexture - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_setOverrideUserInterfaceStyle:(long long)arg1 ;
-(void)layoutSubviews;
-(void)setContentOffset:(CGPoint)arg1 ;
-(id)initWithFrame:(CGRect)arg1 scrollingTextures:(BOOL)arg2 hasAlpha:(BOOL)arg3 ;
-(NotesTextureView *)textureView;
-(void)commonInitWithScrollingTextures:(BOOL)arg1 hasAlpha:(BOOL)arg2 ;
-(double)heightByCoveringHeight:(double)arg1 withImage:(id)arg2 ;
-(BOOL)scrollsTexture;
-(void)setScrollsTexture:(BOOL)arg1 ;
@end

