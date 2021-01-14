/*
* Generated on Thursday, January 14, 2021 at 2:27:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
*/

#import <CommunicationsSetupUI/CommunicationsSetupUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIBezierPath, UIImage;

@interface CNFRegShadowView : UIView {

	CGRect _cachedBounds;
	UIBezierPath* _cachedPath;
	UIImage* _shadowImage;

}

@property (assign,nonatomic) CGRect cachedBounds;                    //@synthesize cachedBounds=_cachedBounds - In the implementation block
@property (nonatomic,retain) UIBezierPath * cachedPath;              //@synthesize cachedPath=_cachedPath - In the implementation block
@property (nonatomic,retain) UIImage * shadowImage;                  //@synthesize shadowImage=_shadowImage - In the implementation block
-(UIImage *)shadowImage;
-(void)setShadowImage:(UIImage *)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(UIBezierPath *)cachedPath;
-(void)setCachedPath:(UIBezierPath *)arg1 ;
-(CGRect)cachedBounds;
-(void)setCachedBounds:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 shadowImage:(id)arg2 ;
@end

