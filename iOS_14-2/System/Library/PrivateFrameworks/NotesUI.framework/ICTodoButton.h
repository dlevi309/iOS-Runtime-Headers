/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <NotesUI/NotesUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class ICTrackedParagraph;

@interface ICTodoButton : UIButton {

	BOOL _done;
	BOOL _trackedParagraphIsRTL;
	ICTrackedParagraph* _trackedParagraph;
	CGSize _defaultSize;
	CGSize _defaultImageSize;

}

@property (assign,nonatomic) CGSize defaultImageSize;                                   //@synthesize defaultImageSize=_defaultImageSize - In the implementation block
@property (assign,nonatomic) BOOL trackedParagraphIsRTL;                                //@synthesize trackedParagraphIsRTL=_trackedParagraphIsRTL - In the implementation block
@property (assign,getter=isDone,nonatomic) BOOL done;                                   //@synthesize done=_done - In the implementation block
@property (assign,nonatomic,__weak) ICTrackedParagraph * trackedParagraph;              //@synthesize trackedParagraph=_trackedParagraph - In the implementation block
@property (assign,nonatomic) CGSize defaultSize;                                        //@synthesize defaultSize=_defaultSize - In the implementation block
-(id)cursorInteraction:(id)arg1 regionForLocation:(CGPoint)arg2 defaultRegion:(id)arg3 ;
-(id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(CGRect)imageRectForContentRect:(CGRect)arg1 ;
-(CGRect)imageFrame;
-(id)debugDescription;
-(CGSize)defaultSize;
-(void)setDone:(BOOL)arg1 ;
-(BOOL)isDone;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setDefaultSize:(CGSize)arg1 ;
-(void)updateImagesAnimated:(BOOL)arg1 ;
-(void)setDone:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)trackedParagraphDidChange;
-(void)setTrackedParagraph:(ICTrackedParagraph *)arg1 ;
-(void)setTrackedParagraphIsRTL:(BOOL)arg1 ;
-(ICTrackedParagraph *)trackedParagraph;
-(CGSize)defaultImageSize;
-(void)setDefaultImageSize:(CGSize)arg1 ;
-(BOOL)trackedParagraphIsRTL;
-(id)imageForChecked:(BOOL)arg1 withHighlight:(BOOL)arg2 ;
-(id)initWithDragDelegate:(id)arg1 ;
-(void)wasPressed;
-(void)setFrame:(CGRect)arg1 leftToRight:(BOOL)arg2 ;
@end

