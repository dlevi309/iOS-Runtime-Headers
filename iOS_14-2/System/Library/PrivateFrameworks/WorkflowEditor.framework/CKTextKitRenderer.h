/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/


@protocol CKTextKitTruncating;
#import <WorkflowEditor/WorkflowEditor-Structs.h>
@class CKTextKitContext, CKTextKitShadower, UITraitCollection;

@interface CKTextKitRenderer : NSObject {

	CGSize _calculatedSize;
	double _verticalOffset;
	CKTextKitContext* _context;
	id<CKTextKitTruncating> _truncater;
	CKTextKitShadower* _shadower;
	UITraitCollection* _traitCollection;
	CGSize _constrainedSize;
	CKTextKitAttributes* _attributes;

}

@property (nonatomic,readonly) CKTextKitContext * context;                     //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) id<CKTextKitTruncating> truncater;              //@synthesize truncater=_truncater - In the implementation block
@property (nonatomic,readonly) CKTextKitShadower * shadower;                   //@synthesize shadower=_shadower - In the implementation block
@property (nonatomic,readonly) CKTextKitAttributes* attributes;                //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,readonly) CGSize constrainedSize;                         //@synthesize constrainedSize=_constrainedSize - In the implementation block
@property (nonatomic,retain) UITraitCollection * traitCollection;              //@synthesize traitCollection=_traitCollection - In the implementation block
-(UITraitCollection *)traitCollection;
-(void)setTraitCollection:(UITraitCollection *)arg1 ;
-(CGSize)size;
-(CKTextKitContext *)context;
-(CKTextKitAttributes*)attributes;
-(unsigned long long)lineCount;
-(void)_calculateSize;
-(id)initWithTextKitAttributes:(const CKTextKitAttributes*)arg1 constrainedSize:(CGSize)arg2 ;
-(CGSize)constrainedSize;
-(void)drawInContext:(CGContextRef)arg1 bounds:(CGRect)arg2 ;
-(id)rectsForTextRange:(NSRange)arg1 measureOption:(unsigned long long)arg2 ;
-(unsigned long long)nearestTextIndexAtPosition:(CGPoint)arg1 ;
-(id)textCheckingResultAtPoint:(CGPoint)arg1 ;
-(CGRect)_internalRectForGlyphAtIndex:(unsigned long long)arg1 measureOption:(unsigned long long)arg2 layoutManager:(id)arg3 textContainer:(id)arg4 textStorage:(id)arg5 ;
-(CKTextKitShadower *)shadower;
-(void)enumerateTextIndexesAtPosition:(CGPoint)arg1 usingBlock:(/*^block*/id)arg2 ;
-(CGRect)trailingRect;
-(CGRect)frameForTextRange:(NSRange)arg1 ;
-(id<CKTextKitTruncating>)truncater;
-(vector<_NSRange, std::__1::allocator<_NSRange> >*)visibleRanges;
@end

