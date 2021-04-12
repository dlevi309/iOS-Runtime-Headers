/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(CGRect)arg2 glyphPosition:(CGPoint)arg3 characterIndex:(unsigned long long)arg4 ;
-(void)placeView:(id)arg1 withFrame:(CGRect)arg2 inParentView:(id)arg3 characterIndex:(unsigned long long)arg4 layoutManager:(id)arg5 ;
-(id)viewProviderForParentView:(id)arg1 characterIndex:(unsigned long long)arg2 layoutManager:(id)arg3 ;
-(void)saveIfNeeded;
-(void)detachView:(id)arg1 fromParentView:(id)arg2 ;
-(void)resetZoom;
-(void)drawingDataDidChange:(id)arg1 view:(id)arg2 ;
-(id)attachmentAsNSTextAttachment;
-(BOOL)canDragWithoutSelecting;
-(id)printableTextContentForAppearanceType:(unsigned long long)arg1 ;
-(void)detachView;
-(NSHashTable *)inlineDrawingViews;
-(void)updatePaletteVisibility;
-(ICInlineDrawingChangeCoalescer *)changeCoalescer;
-(BOOL)isHandlingDrawingDidChange;
-(void)setIsHandlingDrawingDidChange:(BOOL)arg1 ;
-(void)setViewSelected:(BOOL)arg1 inWindow:(id)arg2 ;
-(void)setChangeCoalescer:(ICInlineDrawingChangeCoalescer *)arg1 ;
-(void)setInlineDrawingViews:(NSHashTable *)arg1 ;
@end

