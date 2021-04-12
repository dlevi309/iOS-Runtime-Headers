/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, UIBezierPath, UIColor;

@interface UIPreviewParameters : NSObject <NSCopying> {

	NSArray* _textLineRects;
	BOOL _appliesShadow;
	BOOL _hidesSourceViewDuringDropAnimation;
	UIBezierPath* _visiblePath;
	UIBezierPath* _shadowPath;
	UIColor* _backgroundColor;
	long long _previewMode;
	double _textPathCornerRadius;
	UIEdgeInsets _textPathInsets;

}

@property (assign,setter=_setPreviewMode:,getter=_previewMode,nonatomic) long long previewMode;                                      //@synthesize previewMode=_previewMode - In the implementation block
@property (assign,nonatomic) BOOL appliesShadow;                                                                                     //@synthesize appliesShadow=_appliesShadow - In the implementation block
@property (assign,nonatomic) BOOL hidesSourceViewDuringDropAnimation;                                                                //@synthesize hidesSourceViewDuringDropAnimation=_hidesSourceViewDuringDropAnimation - In the implementation block
@property (nonatomic,readonly) UIBezierPath * effectiveShadowPath; 
@property (assign,setter=_setTextPathInsets:,getter=_textPathInsets,nonatomic) UIEdgeInsets textPathInsets;                          //@synthesize textPathInsets=_textPathInsets - In the implementation block
@property (assign,setter=_setTextPathCornerRadius:,getter=_textPathCornerRadius,nonatomic) double textPathCornerRadius;              //@synthesize textPathCornerRadius=_textPathCornerRadius - In the implementation block
@property (getter=_isSingleLineText,nonatomic,readonly) BOOL singleLineText; 
@property (nonatomic,copy) UIBezierPath * visiblePath;                                                                               //@synthesize visiblePath=_visiblePath - In the implementation block
@property (nonatomic,copy) UIBezierPath * shadowPath;                                                                                //@synthesize shadowPath=_shadowPath - In the implementation block
@property (nonatomic,copy) UIColor * backgroundColor;                                                                                //@synthesize backgroundColor=_backgroundColor - In the implementation block
-(id)init;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(UIBezierPath *)effectiveShadowPath;
-(UIBezierPath *)visiblePath;
-(UIBezierPath *)shadowPath;
-(UIEdgeInsets)_textPathInsets;
-(BOOL)_isSingleLineText;
-(BOOL)appliesShadow;
-(void)_setTextPathInsets:(UIEdgeInsets)arg1 ;
-(double)_textPathCornerRadius;
-(void)_setPreviewMode:(long long)arg1 ;
-(BOOL)hidesSourceViewDuringDropAnimation;
-(void)setAppliesShadow:(BOOL)arg1 ;
-(unsigned long long)hash;
-(id)initWithTextLineRects:(id)arg1 ;
-(void)_setTextPathCornerRadius:(double)arg1 ;
-(id)_initWithMode:(long long)arg1 visiblePath:(id)arg2 backgroundColor:(id)arg3 ;
-(long long)_previewMode;
-(void)setHidesSourceViewDuringDropAnimation:(BOOL)arg1 ;
-(void)setShadowPath:(UIBezierPath *)arg1 ;
-(void)setVisiblePath:(UIBezierPath *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

