/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <NotesUI/NotesUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class ICTrackedParagraph;

@interface ICTodoButton : UIButton {

	BOOL _done;
	ICTrackedParagraph* _trackedParagraph;
	CGSize _defaultSize;
	CGSize _defaultImageSize;

}

@property (assign,nonatomic) CGSize defaultImageSize;                                   //@synthesize defaultImageSize=_defaultImageSize - In the implementation block
@property (assign,getter=isDone,nonatomic) BOOL done;                                   //@synthesize done=_done - In the implementation block
@property (assign,nonatomic,__weak) ICTrackedParagraph * trackedParagraph;              //@synthesize trackedParagraph=_trackedParagraph - In the implementation block
@property (assign,nonatomic) CGSize defaultSize;                                        //@synthesize defaultSize=_defaultSize - In the implementation block
-(id)init;
-(id)debugDescription;
-(CGSize)defaultSize;
-(void)setDone:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)cursorInteraction:(id)arg1 regionForLocation:(CGPoint)arg2 defaultRegion:(id)arg3 ;
-(id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3 ;
-(CGRect)imageRectForContentRect:(CGRect)arg1 ;
-(BOOL)isDone;
-(CGRect)imageFrame;
-(void)updateImagesAnimated:(BOOL)arg1 ;
-(void)setDone:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)trackedParagraphDidChange;
-(void)setTrackedParagraph:(ICTrackedParagraph *)arg1 ;
-(ICTrackedParagraph *)trackedParagraph;
-(void)setDefaultSize:(CGSize)arg1 ;
-(CGSize)defaultImageSize;
-(void)setDefaultImageSize:(CGSize)arg1 ;
-(id)imageForChecked:(BOOL)arg1 withHighlight:(BOOL)arg2 ;
-(id)initWithDragDelegate:(id)arg1 ;
-(void)wasPressed;
-(void)setFrame:(CGRect)arg1 leftToRight:(BOOL)arg2 ;
@end

