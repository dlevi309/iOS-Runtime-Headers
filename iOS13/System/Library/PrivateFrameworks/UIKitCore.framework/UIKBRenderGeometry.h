/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSValue;

@interface UIKBRenderGeometry : NSObject <NSCopying> {

	BOOL _detachedVariants;
	BOOL _tallPopup;
	int _popupBias;
	unsigned long long _concaveCorner;
	unsigned long long _roundRectCorners;
	double _roundRectRadius;
	long long _flickDirection;
	NSValue* _splitLeftRect;
	NSValue* _splitRightRect;
	CGPoint _popupSource;
	CGSize _concaveCornerOffset;
	CGRect _frame;
	CGRect _paddedFrame;
	CGRect _displayFrame;
	CGRect _symbolFrame;
	UIEdgeInsets _layoutMargins;

}

@property (assign,nonatomic) CGRect frame;                                     //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) CGRect paddedFrame;                               //@synthesize paddedFrame=_paddedFrame - In the implementation block
@property (assign,nonatomic) CGRect displayFrame;                              //@synthesize displayFrame=_displayFrame - In the implementation block
@property (assign,nonatomic) CGRect symbolFrame;                               //@synthesize symbolFrame=_symbolFrame - In the implementation block
@property (assign,nonatomic) unsigned long long concaveCorner;                 //@synthesize concaveCorner=_concaveCorner - In the implementation block
@property (assign,nonatomic) CGSize concaveCornerOffset;                       //@synthesize concaveCornerOffset=_concaveCornerOffset - In the implementation block
@property (assign,nonatomic) CGPoint popupSource;                              //@synthesize popupSource=_popupSource - In the implementation block
@property (assign,nonatomic) double roundRectRadius;                           //@synthesize roundRectRadius=_roundRectRadius - In the implementation block
@property (assign,nonatomic) unsigned long long roundRectCorners;              //@synthesize roundRectCorners=_roundRectCorners - In the implementation block
@property (assign,nonatomic) int popupBias;                                    //@synthesize popupBias=_popupBias - In the implementation block
@property (assign,nonatomic) UIEdgeInsets layoutMargins;                       //@synthesize layoutMargins=_layoutMargins - In the implementation block
@property (assign,nonatomic) long long flickDirection;                         //@synthesize flickDirection=_flickDirection - In the implementation block
@property (assign,nonatomic) BOOL detachedVariants;                            //@synthesize detachedVariants=_detachedVariants - In the implementation block
@property (assign,nonatomic) BOOL tallPopup;                                   //@synthesize tallPopup=_tallPopup - In the implementation block
@property (nonatomic,retain) NSValue * splitLeftRect;                          //@synthesize splitLeftRect=_splitLeftRect - In the implementation block
@property (nonatomic,retain) NSValue * splitRightRect;                         //@synthesize splitRightRect=_splitRightRect - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets displayInsets; 
@property (nonatomic,readonly) UIEdgeInsets paddedInsets; 
+(id)geometryWithFrame:(CGRect)arg1 paddedFrame:(CGRect)arg2 ;
+(id)geometryWithShape:(id)arg1 ;
+(id)sortedGeometries:(id)arg1 leftToRight:(BOOL)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGRect)frame;
-(void)setFrame:(CGRect)arg1 ;
-(void)setLayoutMargins:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)layoutMargins;
-(void)setPaddedFrame:(CGRect)arg1 ;
-(CGRect)paddedFrame;
-(void)setRoundRectRadius:(double)arg1 ;
-(void)setRoundRectCorners:(unsigned long long)arg1 ;
-(unsigned long long)concaveCorner;
-(CGSize)concaveCornerOffset;
-(void)setConcaveCorner:(unsigned long long)arg1 ;
-(void)setConcaveCornerOffset:(CGSize)arg1 ;
-(long long)flickDirection;
-(void)setFlickDirection:(long long)arg1 ;
-(CGRect)displayFrame;
-(double)roundRectRadius;
-(unsigned long long)roundRectCorners;
-(UIEdgeInsets)displayInsets;
-(unsigned long long)adjustForTranslucentGapsWithSize:(CGSize)arg1 inFrame:(CGRect)arg2 ;
-(unsigned long long)adjustForTranslucentGapsInFrameWithSize_10Key:(CGSize)arg1 centerX:(double)arg2 bottomEdge:(BOOL)arg3 topEdge:(BOOL)arg4 ;
-(void)adjustForConsistentGapsWithSize:(CGSize)arg1 inFrame:(CGRect)arg2 ;
-(void)setDetachedVariants:(BOOL)arg1 ;
-(void)setDisplayFrame:(CGRect)arg1 ;
-(void)setPopupBias:(int)arg1 ;
-(void)applyInsets:(UIEdgeInsets)arg1 ;
-(int)popupBias;
-(void)setSymbolFrame:(CGRect)arg1 ;
-(CGRect)symbolFrame;
-(id)iPhoneVariantGeometries:(unsigned long long)arg1 annotationIndex:(unsigned long long)arg2 ;
-(BOOL)detachedVariants;
-(void)setTallPopup:(BOOL)arg1 ;
-(id)similarShape;
-(UIEdgeInsets)paddedInsets;
-(id)iPadVariantGeometries:(unsigned long long)arg1 rowLimit:(long long)arg2 ;
-(void)setSplitLeftRect:(NSValue *)arg1 ;
-(void)setSplitRightRect:(NSValue *)arg1 ;
-(id)_copyForDirection:(long long)arg1 positionFactor:(double)arg2 inwardSizeFactor:(double)arg3 outwardSizeFactor:(double)arg4 perpendicularSizeFactor:(double)arg5 sizeAspectRatio:(double)arg6 scale:(double)arg7 ;
-(void)applyOffset:(CGPoint)arg1 ;
-(void)makeIntegralWithScale:(double)arg1 ;
-(void)adjustToTopWithInsets:(UIEdgeInsets)arg1 ;
-(id)copyForFlickDirection:(long long)arg1 scale:(double)arg2 ;
-(id)copyForPopupDirection:(long long)arg1 scale:(double)arg2 ;
-(void)setPopupSource:(CGPoint)arg1 ;
-(id)initWithShape:(id)arg1 ;
-(CGPoint)popupSource;
-(BOOL)tallPopup;
-(NSValue *)splitLeftRect;
-(NSValue *)splitRightRect;
-(void)overlayWithGeometry:(id)arg1 ;
-(void)applyShadowInsets:(UIEdgeInsets)arg1 ;
@end

