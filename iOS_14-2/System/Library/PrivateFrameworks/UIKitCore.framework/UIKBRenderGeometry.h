/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	long long _popupDirection;
	double _layeredBackgroundRoundRectRadius;
	double _layeredForegroundRoundRectRadius;
	CGPoint _popupSource;
	CGSize _concaveCornerOffset;
	CGRect _frame;
	CGRect _paddedFrame;
	CGRect _displayFrame;
	CGRect _symbolFrame;
	UIEdgeInsets _layoutMargins;
	CGRect _layeredBackgroundPaddedFrame;
	CGRect _layeredForegroundPaddedFrame;

}

@property (assign,nonatomic) CGRect frame;                                         //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) CGRect paddedFrame;                                   //@synthesize paddedFrame=_paddedFrame - In the implementation block
@property (assign,nonatomic) CGRect displayFrame;                                  //@synthesize displayFrame=_displayFrame - In the implementation block
@property (assign,nonatomic) CGRect symbolFrame;                                   //@synthesize symbolFrame=_symbolFrame - In the implementation block
@property (assign,nonatomic) unsigned long long concaveCorner;                     //@synthesize concaveCorner=_concaveCorner - In the implementation block
@property (assign,nonatomic) CGSize concaveCornerOffset;                           //@synthesize concaveCornerOffset=_concaveCornerOffset - In the implementation block
@property (assign,nonatomic) CGPoint popupSource;                                  //@synthesize popupSource=_popupSource - In the implementation block
@property (assign,nonatomic) double roundRectRadius;                               //@synthesize roundRectRadius=_roundRectRadius - In the implementation block
@property (assign,nonatomic) unsigned long long roundRectCorners;                  //@synthesize roundRectCorners=_roundRectCorners - In the implementation block
@property (assign,nonatomic) int popupBias;                                        //@synthesize popupBias=_popupBias - In the implementation block
@property (assign,nonatomic) UIEdgeInsets layoutMargins;                           //@synthesize layoutMargins=_layoutMargins - In the implementation block
@property (assign,nonatomic) long long flickDirection;                             //@synthesize flickDirection=_flickDirection - In the implementation block
@property (assign,nonatomic) BOOL detachedVariants;                                //@synthesize detachedVariants=_detachedVariants - In the implementation block
@property (assign,nonatomic) BOOL tallPopup;                                       //@synthesize tallPopup=_tallPopup - In the implementation block
@property (nonatomic,retain) NSValue * splitLeftRect;                              //@synthesize splitLeftRect=_splitLeftRect - In the implementation block
@property (nonatomic,retain) NSValue * splitRightRect;                             //@synthesize splitRightRect=_splitRightRect - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets displayInsets; 
@property (nonatomic,readonly) UIEdgeInsets paddedInsets; 
@property (assign,nonatomic) long long popupDirection;                             //@synthesize popupDirection=_popupDirection - In the implementation block
@property (assign,nonatomic) CGRect layeredBackgroundPaddedFrame;                  //@synthesize layeredBackgroundPaddedFrame=_layeredBackgroundPaddedFrame - In the implementation block
@property (assign,nonatomic) double layeredBackgroundRoundRectRadius;              //@synthesize layeredBackgroundRoundRectRadius=_layeredBackgroundRoundRectRadius - In the implementation block
@property (assign,nonatomic) CGRect layeredForegroundPaddedFrame;                  //@synthesize layeredForegroundPaddedFrame=_layeredForegroundPaddedFrame - In the implementation block
@property (assign,nonatomic) double layeredForegroundRoundRectRadius;              //@synthesize layeredForegroundRoundRectRadius=_layeredForegroundRoundRectRadius - In the implementation block
+(id)sortedGeometries:(id)arg1 leftToRight:(BOOL)arg2 ;
+(id)geometryWithFrame:(CGRect)arg1 paddedFrame:(CGRect)arg2 ;
+(id)geometryWithShape:(id)arg1 ;
-(long long)flickDirection;
-(CGRect)paddedFrame;
-(void)setSymbolFrame:(CGRect)arg1 ;
-(void)setSplitLeftRect:(NSValue *)arg1 ;
-(NSValue *)splitLeftRect;
-(BOOL)tallPopup;
-(void)setPaddedFrame:(CGRect)arg1 ;
-(void)applyInsets:(UIEdgeInsets)arg1 ;
-(id)similarShape;
-(void)applyOffset:(CGPoint)arg1 ;
-(double)roundRectRadius;
-(void)setConcaveCornerOffset:(CGSize)arg1 ;
-(CGRect)frame;
-(void)setRoundRectRadius:(double)arg1 ;
-(unsigned long long)adjustForTranslucentGapsInFrameWithSize_10Key:(CGSize)arg1 centerX:(double)arg2 bottomEdge:(BOOL)arg3 topEdge:(BOOL)arg4 ;
-(id)initWithShape:(id)arg1 ;
-(void)makeIntegralWithScale:(double)arg1 ;
-(UIEdgeInsets)layoutMargins;
-(unsigned long long)adjustForTranslucentGapsWithSize:(CGSize)arg1 inFrame:(CGRect)arg2 ;
-(void)adjustForConsistentGapsWithSize:(CGSize)arg1 inFrame:(CGRect)arg2 ;
-(void)setDisplayFrame:(CGRect)arg1 ;
-(void)setFlickDirection:(long long)arg1 ;
-(void)setLayoutMargins:(UIEdgeInsets)arg1 ;
-(void)setSplitRightRect:(NSValue *)arg1 ;
-(void)setPopupDirection:(long long)arg1 ;
-(id)description;
-(void)setConcaveCorner:(unsigned long long)arg1 ;
-(void)setLayeredBackgroundPaddedFrame:(CGRect)arg1 ;
-(CGSize)concaveCornerOffset;
-(void)setFrame:(CGRect)arg1 ;
-(void)setLayeredForegroundRoundRectRadius:(double)arg1 ;
-(long long)popupDirection;
-(id)copyForFlickDirection:(long long)arg1 scale:(double)arg2 ;
-(void)setRoundRectCorners:(unsigned long long)arg1 ;
-(CGRect)layeredForegroundPaddedFrame;
-(void)adjustToTopWithInsets:(UIEdgeInsets)arg1 ;
-(NSValue *)splitRightRect;
-(void)setDetachedVariants:(BOOL)arg1 ;
-(void)setTallPopup:(BOOL)arg1 ;
-(unsigned long long)concaveCorner;
-(UIEdgeInsets)displayInsets;
-(id)iPhoneVariantGeometries:(unsigned long long)arg1 annotationIndex:(unsigned long long)arg2 ;
-(double)layeredBackgroundRoundRectRadius;
-(double)layeredForegroundRoundRectRadius;
-(void)setLayeredBackgroundRoundRectRadius:(double)arg1 ;
-(id)_copyForDirection:(long long)arg1 positionFactor:(double)arg2 inwardSizeFactor:(double)arg3 outwardSizeFactor:(double)arg4 perpendicularSizeFactor:(double)arg5 sizeAspectRatio:(double)arg6 scale:(double)arg7 ;
-(CGRect)layeredBackgroundPaddedFrame;
-(CGRect)displayFrame;
-(CGPoint)popupSource;
-(id)iPadVariantGeometries:(unsigned long long)arg1 rowLimit:(long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)overlayWithGeometry:(id)arg1 ;
-(CGRect)symbolFrame;
-(void)setPopupSource:(CGPoint)arg1 ;
-(BOOL)detachedVariants;
-(int)popupBias;
-(void)setPopupBias:(int)arg1 ;
-(id)copyForPopupDirection:(long long)arg1 scale:(double)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setLayeredForegroundPaddedFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)applyShadowInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)paddedInsets;
-(unsigned long long)roundRectCorners;
@end

