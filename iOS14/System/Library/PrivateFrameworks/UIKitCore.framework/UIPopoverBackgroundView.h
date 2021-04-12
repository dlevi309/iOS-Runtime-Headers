/*
* Generated on Thursday, January 14, 2021 at 2:20:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(double)arrowBase;
+(BOOL)wantsDefaultContentAppearance;
+(double)cornerRadius;
+(double)_contentViewCornerRadiusForArrowDirection:(unsigned long long)arg1 ;
+(double)arrowHeight;
+(UIEdgeInsets)contentViewInsets;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(long long)backgroundStyle;
-(void)_updateChrome;
-(UIEdgeInsets)_shadowInsets;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(id)_shadowPath;
-(void)_updateShadow;
-(void)layoutSubviews;
-(CGSize)_shadowOffset;
-(id)_shadowPathForRect:(CGRect)arg1 arrowDirection:(unsigned long long)arg2 ;
-(CGRect)_backgroundContentViewFrame;
-(CGRect)_contentViewFrame;
-(double)_shadowOpacity;
-(UIEdgeInsets)_contentViewInsets;
-(BOOL)_chromeHidden;
-(UIEdgeInsets)_contentViewInsetsForArrowDirection:(unsigned long long)arg1 ;
-(void)setArrowDirection:(unsigned long long)arg1 ;
-(double)arrowOffset;
-(double)_shadowRadius;
-(void)_setChromeHidden:(BOOL)arg1 ;
-(unsigned long long)arrowDirection;
-(void)setArrowOffset:(double)arg1 ;
@end

