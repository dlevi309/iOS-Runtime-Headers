/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class _UIBarButtonItemAppearanceStorage, UIColor;


@protocol _UIButtonBarAppearanceDelegate <NSObject,UICoordinateSpace>
@property (nonatomic,readonly) _UIBarButtonItemAppearanceStorage * appearanceStorage; 
@property (nonatomic,readonly) long long barType; 
@property (nonatomic,readonly) BOOL compactMetrics; 
@property (nonatomic,readonly) BOOL isRTL; 
@property (nonatomic,readonly) UIColor * tintColor; 
@property (nonatomic,readonly) BOOL centerTextButtons; 
@property (nonatomic,readonly) double defaultEdgeSpacing; 
@property (nonatomic,readonly) double defaultTextPadding; 
@property (nonatomic,readonly) double backButtonMargin; 
@property (nonatomic,readonly) double backButtonMaximumWidth; 
@required
-(double)backButtonMargin;
-(BOOL)isRTL;
-(double)defaultEdgeSpacing;
-(id)backIndicatorMaskImage;
-(unsigned long long)edgesPaddingBarButtonItem:(id)arg1;
-(id)backIndicatorImage;
-(BOOL)centerTextButtons;
-(double)backButtonMaximumWidth;
-(double)absorptionForItem:(id)arg1;
-(double)defaultTextPadding;
-(_UIBarButtonItemAppearanceStorage *)appearanceStorage;
-(long long)barType;
-(UIColor *)tintColor;
-(BOOL)compactMetrics;

@end

