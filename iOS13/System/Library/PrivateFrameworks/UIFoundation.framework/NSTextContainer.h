/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSTextLayoutOrientationProvider.h>

@protocol NSTextContainerView;
@class NSLayoutManager, UIView, NSTextLayoutManager, NSArray, NSDictionary;

@interface NSTextContainer : NSObject <NSSecureCoding, NSTextLayoutOrientationProvider> {

	NSLayoutManager* _layoutManager;
	UIView*<NSTextContainerView> _textView;
	CGSize _size;
	double _lineFragmentPadding;
	unsigned long long _maximumLines;
	struct {
		unsigned widthTracksTextView : 1;
		unsigned heightTracksTextView : 1;
		unsigned observingFrameChanges : 1;
		unsigned lineBreakMode : 4;
		unsigned oldAPI : 1;
		unsigned _reserved : 8;
	}  _tcFlags;
	NSTextLayoutManager* _textLayoutManager;
	NSArray* _exclusionPaths;
	CGPathRef _cachedBoundingPath;
	CFArrayRef _cachedClippingAttributes;
	CFArrayRef _cachedBounds;
	double _cacheBoundsMinY;
	double _cacheBoundsMaxY;
	double _minimumWidth;
	long long _layoutOrientation;
	NSDictionary* _attributesForExtraLineFragment;
	long long _applicationFrameworkContext;

}

@property (assign,nonatomic) NSLayoutManager * layoutManager; 
@property (assign,nonatomic) CGSize size; 
@property (nonatomic,copy) NSArray * exclusionPaths; 
@property (assign,nonatomic) long long lineBreakMode; 
@property (assign,nonatomic) double lineFragmentPadding; 
@property (assign,nonatomic) unsigned long long maximumNumberOfLines; 
@property (getter=isSimpleRectangularTextContainer,nonatomic,readonly) BOOL simpleRectangularTextContainer; 
@property (assign,nonatomic) BOOL widthTracksTextView; 
@property (assign,nonatomic) BOOL heightTracksTextView; 
@property (nonatomic,readonly) long long layoutOrientation; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGSize)size;
-(long long)lineBreakMode;
-(void)setLineBreakMode:(long long)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(void)setTextLayoutManager:(id)arg1 ;
-(id)textLayoutManager;
-(double)lineFragmentPadding;
-(void)setLineFragmentPadding:(double)arg1 ;
-(NSLayoutManager *)layoutManager;
-(id)textView;
-(long long)layoutOrientation;
-(CGPoint)textContainerOrigin;
-(NSEdgeInsets)textContainerInsetsForView:(id)arg1 ;
-(CGRect)lineFragmentRectForProposedRect:(CGRect)arg1 remainingRect:(CGRect*)arg2 ;
-(id)initWithSize:(CGSize)arg1 ;
-(void)_commonInit;
-(BOOL)isSimpleRectangularTextContainer;
-(void)setLayoutManager:(NSLayoutManager *)arg1 ;
-(void)coordinateAccess:(/*^block*/id)arg1 ;
-(NSEdgeInsets)textContainerInsetsForView_iOS:(id)arg1 ;
-(unsigned long long)maximumNumberOfLines;
-(void)setMaximumNumberOfLines:(unsigned long long)arg1 ;
-(NSArray *)exclusionPaths;
-(void)setExclusionPaths:(NSArray *)arg1 ;
-(CGRect)lineFragmentRectForProposedRect:(CGRect)arg1 atIndex:(unsigned long long)arg2 writingDirection:(long long)arg3 remainingRect:(CGRect*)arg4 ;
-(void)setWidthTracksTextView:(BOOL)arg1 ;
-(void)setHeightTracksTextView:(BOOL)arg1 ;
-(void)_resizeAccordingToTextView:(id)arg1 ;
-(double)minimumLineFragmentWidth;
-(BOOL)widthTracksTextView;
-(BOOL)heightTracksTextView;
-(void)setLayoutOrientation:(long long)arg1 ;
-(id)initWithContainerSize:(CGSize)arg1 ;
-(void)replaceLayoutManager:(id)arg1 ;
-(void)setTextView:(id)arg1 ;
-(void)setContainerSize:(CGSize)arg1 ;
-(CGSize)containerSize;
-(id)attributesForExtraLineFragment;
-(void)setAttributesForExtraLineFragment:(id)arg1 ;
-(BOOL)containsPoint:(CGPoint)arg1 ;
-(void)setMinimumLineFragmentWidth:(double)arg1 ;
-(BOOL)_containerObservesTextViewFrameChanges;
-(void)_containerTextViewFrameChanged:(id)arg1 ;
@end

