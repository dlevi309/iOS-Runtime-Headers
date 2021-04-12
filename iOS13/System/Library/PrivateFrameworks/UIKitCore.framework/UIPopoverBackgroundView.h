/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIPopoverBackgroundViewMethods.h>

@interface UIPopoverBackgroundView : UIView <UIPopoverBackgroundViewMethods> {

	BOOL __chromeHidden;

}

@property (assign,setter=_setChromeHidden:,nonatomic) BOOL _chromeHidden;              //@synthesize _chromeHidden=__chromeHidden - In the implementation block
@property (assign,nonatomic) double arrowOffset; 
@property (assign,nonatomic) unsigned long long arrowDirection; 
+(double)cornerRadius;
+(double)_contentViewCornerRadiusForArrowDirection:(unsigned long long)arg1 ;
+(UIEdgeInsets)contentViewInsets;
+(double)arrowHeight;
+(double)arrowBase;
+(BOOL)wantsDefaultContentAppearance;
-(CGSize)_shadowOffset;
-(id)_shadowPath;
-(void)layoutSubviews;
-(void)_setChromeHidden:(BOOL)arg1 ;
-(BOOL)_chromeHidden;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(double)_shadowRadius;
-(double)_shadowOpacity;
-(unsigned long long)arrowDirection;
-(UIEdgeInsets)_contentViewInsets;
-(double)arrowOffset;
-(void)setArrowOffset:(double)arg1 ;
-(void)setArrowDirection:(unsigned long long)arg1 ;
-(UIEdgeInsets)_contentViewInsetsForArrowDirection:(unsigned long long)arg1 ;
-(long long)backgroundStyle;
-(void)_updateChrome;
-(UIEdgeInsets)_shadowInsets;
-(id)_shadowPathForRect:(CGRect)arg1 arrowDirection:(unsigned long long)arg2 ;
-(CGRect)_backgroundContentViewFrame;
-(void)_updateShadow;
-(CGRect)_contentViewFrame;
@end

