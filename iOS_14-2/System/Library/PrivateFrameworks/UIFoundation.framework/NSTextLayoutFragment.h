/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <libobjc.A.dylib/NSCoreTypesetterDelegateInternal.h>
#import <libobjc.A.dylib/__NSTextRunStorageDataSource.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSTextViewportElement.h>

@class NSTextRange, NSTextLayoutManager, NSTextElement, _NSTextAttributeStorage, NSMapTable, NSLayoutManager, NSTextStorage, NSArray, NSOperationQueue, NSTextParagraph, NSString;

@interface NSTextLayoutFragment : NSObject <NSCoreTypesetterDelegateInternal, __NSTextRunStorageDataSource, NSSecureCoding, NSTextViewportElement> {

	NSTextLayoutManager* _textLayoutManager;
	NSTextElement* _textElement;
	NSTextRange* _rangeInElement;
	_NSTextAttributeStorage* _renderingAttributesTable;
	CGRect _layoutFragmentFrame;
	NSMapTable* _textAttachmentContextTable;
	BOOL _isTextParagraph;
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
	BOOL _renderingAttributesValidated;
	BOOL _rendersTextCorrectionMarkers;
	NSArray* _textLineFragments;
	NSOperationQueue* _layoutQueue;
	unsigned long long _state;
	CGPoint _layoutPoint;

}

@property (__weak,readonly) NSLayoutManager * layoutManager; 
@property (readonly) NSRange characterRange; 
@property (readonly) CGRect sourceBoundingRect; 
@property (readonly) CGRect destinationBoundingRect; 
@property (readonly) unsigned long long animationType; 
@property (copy) NSArray * textLineFragments;                                                       //@synthesize textLineFragments=_textLineFragments - In the implementation block
@property (assign) unsigned long long state;                                                        //@synthesize state=_state - In the implementation block
@property (assign) CGRect layoutFragmentFrame; 
@property (getter=_isRenderingAttributesValidated) BOOL _renderingAttributesValidated;              //@synthesize renderingAttributesValidated=_renderingAttributesValidated - In the implementation block
@property (assign) BOOL rendersTextCorrectionMarkers;                                               //@synthesize rendersTextCorrectionMarkers=_rendersTextCorrectionMarkers - In the implementation block
@property (readonly) NSTextParagraph * textParagraph; 
@property (readonly) NSTextLayoutManager * textLayoutManager; 
@property (readonly) NSTextElement * textElement; 
@property (readonly) NSTextRange * rangeInElement; 
@property (retain) NSOperationQueue * layoutQueue;                                                  //@synthesize layoutQueue=_layoutQueue - In the implementation block
@property (readonly) CGRect renderingSurfaceBounds; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isCountableDataSource,readonly) BOOL countableDataSource; 
@property (readonly) id<NSTextLocation> baseLocation; 
@property (readonly) NSTextRange * representedRange; 
@property (readonly) CGSize layoutSize; 
@property (assign) CGPoint layoutPoint;                                                             //@synthesize layoutPoint=_layoutPoint - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_validCoreTextRenderingAttributes;
+(id)layoutFragmentQueue;
-(void)_layout;
-(void)invalidateLayout;
-(void)_setup;
-(id)init;
-(CGSize)layoutSize;
-(void)encodeWithCoder:(id)arg1 ;
-(NSLayoutManager *)layoutManager;
-(NSString *)description;
-(unsigned long long)animationType;
-(void)setState:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)state;
-(NSRange)characterRange;
-(CGPoint)layoutPoint;
-(void)setTextElement:(NSTextElement *)arg1 ;
-(NSTextElement *)textElement;
-(void)setTextLayoutManager:(NSTextLayoutManager *)arg1 ;
-(void)setLayoutQueue:(NSOperationQueue *)arg1 ;
-(NSTextLayoutManager *)textLayoutManager;
-(NSOperationQueue *)layoutQueue;
-(NSTextRange *)rangeInElement;
-(CGRect)layoutFragmentFrame;
-(void)setLayoutFragmentFrame:(CGRect)arg1 ;
-(NSArray *)textLineFragments;
-(void)drawAtPoint:(CGPoint)arg1 context:(CGContextRef)arg2 ;
-(NSTextRange *)representedRange;
-(long long)offsetFromLocation:(id)arg1 toLocation:(id)arg2 ;
-(BOOL)rendersTextCorrectionMarkers;
-(id)locationFromLocation:(id)arg1 offset:(long long)arg2 ;
-(id)_layoutContextForTextAttachmentAtLocation:(id)arg1 ;
-(NSTextParagraph *)textParagraph;
-(void)setRendersTextCorrectionMarkers:(BOOL)arg1 ;
-(void)setTextLineFragments:(NSArray *)arg1 ;
-(CGRect)sourceBoundingRect;
-(CGRect)destinationBoundingRect;
-(BOOL)isCountableDataSource;
-(id)_coreTextAttributes;
-(void)setRenderingAttribute:(id)arg1 value:(id)arg2 forTextRange:(id)arg3 ;
-(void)set_renderingAttributesValidated:(BOOL)arg1 ;
-(void)enumerateRenderingAttributesFromLocation:(id)arg1 reverse:(BOOL)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id<NSTextLocation>)baseLocation;
-(id)representedRangeAtPoint:(CGPoint)arg1 ;
-(void)setLayoutPoint:(CGPoint)arg1 ;
-(void)estimateSize;
-(id)initWithTextElement:(id)arg1 range:(id)arg2 ;
-(double)verticalOffsetOfTextLocation:(id)arg1 withAffinity:(long long)arg2 ;
-(CGPoint)layoutFragmentFrameOrigin;
-(void)setLayoutFragmentFrameOrigin:(CGPoint)arg1 ;
-(CGRect)renderingSurfaceBounds;
-(void)addRenderingAttribute:(id)arg1 value:(id)arg2 forTextRange:(id)arg3 ;
-(void)removeRenderingAttribute:(id)arg1 forTextRange:(id)arg2 ;
-(void)setRenderingAttributes:(id)arg1 forTextRange:(id)arg2 ;
-(void)invalidateRenderingAttributesForTextRange:(id)arg1 ;
-(void)layoutManagerDidSetTemporaryAttributes:(id)arg1 forTextRange:(id)arg2 ;
-(id)_resolvedRenderingAttributesForCharacterIndex:(long long)arg1 effectiveRange:(out NSRange*)arg2 ;
-(BOOL)_isRenderingAttributesValidated;
-(id)destinationLayoutManager;
-(NSRange)destinationGlyphRange;
-(double)destinationVerticalDelta;
-(id)destinationTextStorage;
-(void)setDestinationTextStorage:(id)arg1 ;
-(id)initWithLayoutManager:(id)arg1 characterRange:(NSRange)arg2 animationType:(unsigned long long)arg3 boundingRect:(CGRect)arg4 ;
-(void)setDestinationLayoutManager:(id)arg1 ;
-(void)setDestinationVerticalDelta:(double)arg1 ;
-(void)setDestinationGlyphRange:(NSRange)arg1 ;
-(void)setDestinationBoundingRect:(CGRect)arg1 ;
-(void)drawAtPoint:(CGPoint)arg1 contentType:(unsigned long long)arg2 ;
-(void)dealloc;
-(void)layout;
@end

