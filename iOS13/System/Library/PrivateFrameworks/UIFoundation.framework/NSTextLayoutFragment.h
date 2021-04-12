/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSTextViewportElement.h>

@class NSTextRange, NSTextLayoutManager, NSTextElement, NSLayoutManager, NSTextStorage, NSArray, NSOperationQueue, NSString;

@interface NSTextLayoutFragment : NSObject <NSSecureCoding, NSTextViewportElement> {

	NSTextLayoutManager* _textLayoutManager;
	NSTextElement* _textElement;
	NSTextRange* _rangeInElement;
	NSRange _characterRange;
	unsigned long long _sourceVerticalDelta;
	unsigned long long _sourceRangeDelta;
	CGRect _sourceBoundingRect;
	CGRect _destinationBoundingRect;
	unsigned long long _animationType;
	NSLayoutManager* _destinationLayoutManager;
	NSTextStorage* _destinationTextStorage;
	double _destinationVerticalDelta;
	NSRange _destinationGlyphRange;
	NSLayoutManager* _layoutManager;
	NSArray* _textLineFragments;
	NSOperationQueue* _layoutQueue;
	unsigned long long _state;
	CGPoint _layoutPoint;
	CGRect _layoutFragmentFrame;

}

@property (__weak) NSTextLayoutManager * textLayoutManager; 
@property (assign) CGPoint layoutFragmentFrameOrigin; 
@property (assign) NSLayoutManager * destinationLayoutManager; 
@property (retain) NSTextStorage * destinationTextStorage; 
@property (assign) double destinationVerticalDelta; 
@property (assign) NSRange destinationGlyphRange; 
@property (assign) CGRect destinationBoundingRect; 
@property (__weak,readonly) NSLayoutManager * layoutManager; 
@property (readonly) NSRange characterRange; 
@property (readonly) CGRect sourceBoundingRect; 
@property (readonly) CGRect destinationBoundingRect; 
@property (readonly) unsigned long long animationType; 
@property (copy) NSArray * textLineFragments;                                     //@synthesize textLineFragments=_textLineFragments - In the implementation block
@property (assign) unsigned long long state;                                      //@synthesize state=_state - In the implementation block
@property (assign) CGRect layoutFragmentFrame;                                    //@synthesize layoutFragmentFrame=_layoutFragmentFrame - In the implementation block
@property (__weak) NSTextElement * textElement; 
@property (__weak,readonly) NSTextLayoutManager * textLayoutManager; 
@property (readonly) NSTextRange * rangeInElement; 
@property (retain) NSOperationQueue * layoutQueue;                                //@synthesize layoutQueue=_layoutQueue - In the implementation block
@property (readonly) CGRect renderingSurfaceBounds; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSTextRange * representedRange; 
@property (readonly) CGSize layoutSize; 
@property (assign) CGPoint layoutPoint;                                           //@synthesize layoutPoint=_layoutPoint - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)layoutFragmentQueue;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(void)layout;
-(void)_layout;
-(void)_setup;
-(void)setTextElement:(NSTextElement *)arg1 ;
-(void)setTextLayoutManager:(NSTextLayoutManager *)arg1 ;
-(void)setLayoutQueue:(NSOperationQueue *)arg1 ;
-(NSTextElement *)textElement;
-(NSTextLayoutManager *)textLayoutManager;
-(NSOperationQueue *)layoutQueue;
-(NSTextRange *)rangeInElement;
-(CGRect)layoutFragmentFrame;
-(void)setLayoutFragmentFrame:(CGRect)arg1 ;
-(NSArray *)textLineFragments;
-(void)drawAtPoint:(CGPoint)arg1 context:(CGContextRef)arg2 ;
-(void)setTextLineFragments:(NSArray *)arg1 ;
-(NSLayoutManager *)layoutManager;
-(CGRect)sourceBoundingRect;
-(CGRect)destinationBoundingRect;
-(unsigned long long)animationType;
-(NSRange)characterRange;
-(id)representedRangeAtPoint:(CGPoint)arg1 ;
-(NSTextRange *)representedRange;
-(CGSize)layoutSize;
-(CGPoint)layoutPoint;
-(void)setLayoutPoint:(CGPoint)arg1 ;
-(id)initWithTextElement:(id)arg1 range:(id)arg2 ;
-(CGPoint)layoutFragmentFrameOrigin;
-(void)setLayoutFragmentFrameOrigin:(CGPoint)arg1 ;
-(void)estimateSize;
-(void)invalidateLayout;
-(CGRect)renderingSurfaceBounds;
-(id)initWithLayoutManager:(id)arg1 characterRange:(NSRange)arg2 animationType:(unsigned long long)arg3 boundingRect:(CGRect)arg4 ;
-(NSLayoutManager *)destinationLayoutManager;
-(void)setDestinationLayoutManager:(NSLayoutManager *)arg1 ;
-(NSTextStorage *)destinationTextStorage;
-(void)setDestinationTextStorage:(NSTextStorage *)arg1 ;
-(double)destinationVerticalDelta;
-(void)setDestinationVerticalDelta:(double)arg1 ;
-(NSRange)destinationGlyphRange;
-(void)setDestinationGlyphRange:(NSRange)arg1 ;
-(void)setDestinationBoundingRect:(CGRect)arg1 ;
-(void)drawAtPoint:(CGPoint)arg1 contentType:(unsigned long long)arg2 ;
@end

