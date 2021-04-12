/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VisionKit.framework/VisionKit
*/

#import <VisionKit/VisionKit-Structs.h>
#import <UIKitCore/UIView.h>

@class DCNotesTextureView, NSLayoutConstraint;

@interface DCNotesTextureBackgroundView : UIView {

	BOOL _scrollsTexture;
	DCNotesTextureView* _textureView;
	NSLayoutConstraint* _textureYConstraint;
	NSLayoutConstraint* _textureHeightConstraint;

}

@property (nonatomic,retain) NSLayoutConstraint * textureYConstraint;                   //@synthesize textureYConstraint=_textureYConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * textureHeightConstraint;              //@synthesize textureHeightConstraint=_textureHeightConstraint - In the implementation block
@property (nonatomic,readonly) DCNotesTextureView * textureView;                        //@synthesize textureView=_textureView - In the implementation block
@property (assign) BOOL scrollsTexture;                                                 //@synthesize scrollsTexture=_scrollsTexture - In the implementation block
+(id)textureImage;
+(id)colorWithPaperTexturePatternImage;
-(id)initWithCoder:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(id)initWithFrame:(CGRect)arg1 scrollingTextures:(BOOL)arg2 hasAlpha:(BOOL)arg3 ;
-(DCNotesTextureView *)textureView;
-(void)commonInitWithScrollingTextures:(BOOL)arg1 hasAlpha:(BOOL)arg2 ;
-(double)heightByCoveringHeight:(double)arg1 withImage:(id)arg2 ;
-(BOOL)scrollsTexture;
-(void)setScrollsTexture:(BOOL)arg1 ;
-(void)setTextureYConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTextureHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)textureYConstraint;
-(NSLayoutConstraint *)textureHeightConstraint;
@end

