/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, UIBezierPath, UIColor;

@interface UIPreviewParameters : NSObject <NSCopying> {

	NSArray* _textLineRects;
	BOOL _appliesShadow;
	UIBezierPath* _visiblePath;
	UIColor* _backgroundColor;
	long long _previewMode;
	double _textPathCornerRadius;
	UIBezierPath* _shadowPath;
	UIEdgeInsets _textPathInsets;

}

@property (assign,setter=_setPreviewMode:,getter=_previewMode,nonatomic) long long previewMode;                                      //@synthesize previewMode=_previewMode - In the implementation block
@property (assign,nonatomic) BOOL appliesShadow;                                                                                     //@synthesize appliesShadow=_appliesShadow - In the implementation block
@property (nonatomic,readonly) UIBezierPath * effectiveShadowPath; 
@property (assign,setter=_setTextPathInsets:,getter=_textPathInsets,nonatomic) UIEdgeInsets textPathInsets;                          //@synthesize textPathInsets=_textPathInsets - In the implementation block
@property (assign,setter=_setTextPathCornerRadius:,getter=_textPathCornerRadius,nonatomic) double textPathCornerRadius;              //@synthesize textPathCornerRadius=_textPathCornerRadius - In the implementation block
@property (getter=_isSingleLineText,nonatomic,readonly) BOOL singleLineText; 
@property (nonatomic,copy) UIBezierPath * shadowPath;                                                                                //@synthesize shadowPath=_shadowPath - In the implementation block
@property (nonatomic,copy) UIBezierPath * visiblePath;                                                                               //@synthesize visiblePath=_visiblePath - In the implementation block
@property (nonatomic,copy) UIColor * backgroundColor;                                                                                //@synthesize backgroundColor=_backgroundColor - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(void)setShadowPath:(UIBezierPath *)arg1 ;
-(UIBezierPath *)shadowPath;
-(void)_setPreviewMode:(long long)arg1 ;
-(void)setVisiblePath:(UIBezierPath *)arg1 ;
-(long long)_previewMode;
-(UIBezierPath *)visiblePath;
-(BOOL)appliesShadow;
-(double)_textPathCornerRadius;
-(UIEdgeInsets)_textPathInsets;
-(id)initWithTextLineRects:(id)arg1 ;
-(id)_initWithMode:(long long)arg1 visiblePath:(id)arg2 backgroundColor:(id)arg3 ;
-(BOOL)_isSingleLineText;
-(void)_setTextPathInsets:(UIEdgeInsets)arg1 ;
-(void)_setTextPathCornerRadius:(double)arg1 ;
-(UIBezierPath *)effectiveShadowPath;
-(void)setAppliesShadow:(BOOL)arg1 ;
@end

