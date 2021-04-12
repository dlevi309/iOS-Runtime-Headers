/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <NotesUI/NotesUI-Structs.h>
#import <NotesUI/ICBaseTextAttachment.h>
#import <libobjc.A.dylib/PKTextAttachment.h>

@class ICInlineDrawingChangeCoalescer, NSHashTable, NSString;

@interface ICInlineDrawingTextAttachment : ICBaseTextAttachment <PKTextAttachment> {

	BOOL _isHandlingDrawingDidChange;
	ICInlineDrawingChangeCoalescer* _changeCoalescer;
	NSHashTable* _inlineDrawingViews;

}

@property (nonatomic,retain) ICInlineDrawingChangeCoalescer * changeCoalescer;              //@synthesize changeCoalescer=_changeCoalescer - In the implementation block
@property (nonatomic,retain) NSHashTable * inlineDrawingViews;                              //@synthesize inlineDrawingViews=_inlineDrawingViews - In the implementation block
@property (assign,nonatomic) BOOL isHandlingDrawingDidChange;                               //@synthesize isHandlingDrawingDidChange=_isHandlingDrawingDidChange - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)contents;
-(id)_image;
-(id)viewProviderForParentView:(id)arg1 characterIndex:(unsigned long long)arg2 layoutManager:(id)arg3 ;
-(void)placeView:(id)arg1 withFrame:(CGRect)arg2 inParentView:(id)arg3 characterIndex:(unsigned long long)arg4 layoutManager:(id)arg5 ;
-(CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(CGRect)arg2 glyphPosition:(CGPoint)arg3 characterIndex:(unsigned long long)arg4 ;
-(void)detachView:(id)arg1 fromParentView:(id)arg2 ;
-(void)drawingDataDidChange:(id)arg1 view:(id)arg2 ;
-(void)resetZoom;
-(void)saveIfNeeded;
-(id)attachmentAsNSTextAttachment;
-(BOOL)canDragWithoutSelecting;
-(id)printableTextContentForAppearanceType:(unsigned long long)arg1 ;
-(void)detachView;
-(NSHashTable *)inlineDrawingViews;
-(void)updatePaletteVisibility;
-(ICInlineDrawingChangeCoalescer *)changeCoalescer;
-(BOOL)isHandlingDrawingDidChange;
-(void)setIsHandlingDrawingDidChange:(BOOL)arg1 ;
-(void)setChangeCoalescer:(ICInlineDrawingChangeCoalescer *)arg1 ;
-(void)setInlineDrawingViews:(NSHashTable *)arg1 ;
@end

