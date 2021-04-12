/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <UIFoundation/NSLayoutManager.h>
#import <libobjc.A.dylib/NSLayoutManagerDelegate.h>
#import <libobjc.A.dylib/WFTextAttachmentSizeProvider.h>

@class WFSlotTemplateTextStorage, NSString;

@interface WFSlotTemplateLayoutManager : NSLayoutManager <NSLayoutManagerDelegate, WFTextAttachmentSizeProvider> {

	BOOL _isLayoutManagerForTextView;
	BOOL _extendSlotBackgroundOffEdges;

}

@property (assign,nonatomic) WFSlotTemplateTextStorage * textStorage; 
@property (nonatomic,readonly) unsigned long long numberOfLaidLines; 
@property (assign,nonatomic) BOOL isLayoutManagerForTextView;                      //@synthesize isLayoutManagerForTextView=_isLayoutManagerForTextView - In the implementation block
@property (assign,nonatomic) BOOL extendSlotBackgroundOffEdges;                    //@synthesize extendSlotBackgroundOffEdges=_extendSlotBackgroundOffEdges - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(long long)layoutManager:(id)arg1 shouldUseAction:(long long)arg2 forControlCharacterAtIndex:(unsigned long long)arg3 ;
-(BOOL)layoutManager:(id)arg1 shouldBreakLineByWordBeforeCharacterAtIndex:(unsigned long long)arg2 ;
-(BOOL)layoutManager:(id)arg1 shouldSetLineFragmentRect:(inout CGRect*)arg2 lineFragmentUsedRect:(inout CGRect*)arg3 baselineOffset:(inout double*)arg4 inTextContainer:(id)arg5 forGlyphRange:(NSRange)arg6 ;
-(void)drawBackgroundForGlyphRange:(NSRange)arg1 atPoint:(CGPoint)arg2 ;
-(CGRect)layoutManager:(id)arg1 boundingBoxForControlGlyphAtIndex:(unsigned long long)arg2 forTextContainer:(id)arg3 proposedLineFragment:(CGRect)arg4 glyphPosition:(CGPoint)arg5 characterIndex:(unsigned long long)arg6 ;
-(BOOL)extendSlotBackgroundOffEdges;
-(void)setExtendSlotBackgroundOffEdges:(BOOL)arg1 ;
-(void)enumerateInsetEnclosingRectsForGlyphRange:(NSRange)arg1 usingBlock:(/*^block*/id)arg2 ;
-(unsigned long long)numberOfLaidLines;
-(void)enumerateEnclosingRectsForSlot:(id)arg1 includeInsideSpacing:(BOOL)arg2 insetForBackground:(BOOL)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)setIsLayoutManagerForTextView:(BOOL)arg1 ;
-(BOOL)shouldDrawTextAttachment:(id)arg1 atCharacterIndex:(unsigned long long)arg2 ;
-(double)preferredHeightForDrawingTextAttachment:(id)arg1 atCharacterIndex:(unsigned long long)arg2 withProposedHeight:(double)arg3 ;
-(void)getPreferredLeadingSpacing:(double*)arg1 trailingSpacing:(double*)arg2 forDrawingTextAttachment:(id)arg3 atCharacterIndex:(unsigned long long)arg4 ;
-(void)enumerateEnclosingRectsForGlyphRange:(NSRange)arg1 insetForBackground:(BOOL)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)getCalculatedLineHeight:(double*)arg1 originalFontLineHeight:(double*)arg2 ;
-(BOOL)isLayoutManagerForTextView;
@end

