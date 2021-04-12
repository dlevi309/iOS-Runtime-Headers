/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UIWebSelectionBlock;
#import <UIKitCore/UIKitCore-Structs.h>
@class UIWebDocumentView, UITextSelection;

@interface UIWebSelection : NSObject {

	UIWebDocumentView* _documentView;
	id<UIWebSelectionBlock> _base;
	id<UIWebSelectionBlock> _extent;
	CGSize _desiredSize;
	UITextSelection* _textSelection;

}

@property (nonatomic,retain) id<UIWebSelectionBlock> base;                    //@synthesize base=_base - In the implementation block
@property (nonatomic,retain) id<UIWebSelectionBlock> extent;                  //@synthesize extent=_extent - In the implementation block
@property (nonatomic,readonly) UIWebDocumentView * documentView;              //@synthesize documentView=_documentView - In the implementation block
@property (nonatomic,readonly) UITextSelection * textSelection;               //@synthesize textSelection=_textSelection - In the implementation block
@property (nonatomic,readonly) BOOL valid; 
@property (nonatomic,readonly) CGRect boundingRect; 
@property (assign,nonatomic) CGSize desiredSize;                              //@synthesize desiredSize=_desiredSize - In the implementation block
@property (getter=isTextOnly,nonatomic,readonly) BOOL textOnly; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id<UIWebSelectionBlock>)extent;
-(void)setExtent:(id<UIWebSelectionBlock>)arg1 ;
-(id)webFrame;
-(id)webView;
-(id)webArchive;
-(void)selectionChanged;
-(CGRect)boundingRect;
-(BOOL)valid;
-(UIWebDocumentView *)documentView;
-(void)setSelectionWithPoint:(CGPoint)arg1 ;
-(void)setBase:(id<UIWebSelectionBlock>)arg1 ;
-(id<UIWebSelectionBlock>)base;
-(void)setSelectionWithPoint:(CGPoint)arg1 ignoringLargeBlocks:(BOOL)arg2 ;
-(id)blockAtPoint:(CGPoint)arg1 ;
-(CGSize)desiredSize;
-(UITextSelection *)textSelection;
-(CGRect)boundingRectAndInsideFixedPosition:(int*)arg1 ;
-(id)asDomRange;
-(void)shrinkSelectionFromPoint:(CGPoint)arg1 towardsPoint:(CGPoint)arg2 withNewRect:(CGRect)arg3 ;
-(void)growSelectionTowardsPoint:(CGPoint)arg1 ;
-(id)elementAtPoint:(CGPoint)arg1 ;
-(BOOL)isTextOnly;
-(void)useBlock;
-(double)distanceBetweenFirstRect:(CGRect)arg1 second:(CGRect)arg2 edge:(int)arg3 ;
-(id)duplicate;
-(void)setDesiredSize:(CGSize)arg1 ;
-(BOOL)tryToShrinkToBaseAndExtent;
-(BOOL)isEqualToSelection:(id)arg1 ;
-(void)growFromEdge:(int)arg1 ;
-(void)shrinkFromEdge:(int)arg1 ;
-(id)domDocument;
-(id)blockOfSameWidthAtPoint:(CGPoint)arg1 ;
-(id)initWithDocumentView:(id)arg1 ;
-(CGRect)boundingTextSelectionRectAndInsideFixedPosition:(int*)arg1 ;
-(id)textSelectionRects;
-(id)textRepresentation;
-(void)adjustSelectionFromPoint:(CGPoint)arg1 towardsPoint:(CGPoint)arg2 withNewRect:(CGRect)arg3 ;
-(void)moveEdge:(int)arg1 outwards:(BOOL)arg2 ;
-(CGRect)boundingTextSelectionRect;
-(void)applySelectionToWebDocumentView;
-(BOOL)blockContainsPoint:(CGPoint)arg1 ;
@end

