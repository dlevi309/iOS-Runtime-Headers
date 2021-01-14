/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/


#import <WorkflowEditor/WorkflowEditor-Structs.h>
@class CKTextComponentLayer, CKHighlightOverlayLayer;

@interface CKTextComponentLayerHighlighter : NSObject {

	CKTextComponentLayer* _textComponentLayer;
	CKHighlightOverlayLayer* _highlightOverlayLayer;
	NSRange _highlightedRange;

}

@property (assign,nonatomic) NSRange highlightedRange;              //@synthesize highlightedRange=_highlightedRange - In the implementation block
-(void)layoutHighlight;
-(id)initWithTextComponentLayer:(id)arg1 ;
-(void)setHighlightedRange:(NSRange)arg1 ;
-(NSRange)highlightedRange;
@end

