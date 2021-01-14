/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UICollectionViewLayoutAttributes.h>

@interface NTKUpNextCollectionViewFlowLayoutAttributes : UICollectionViewLayoutAttributes {

	BOOL _notVisibleToUser;
	BOOL _fullyVisibleToUser;
	double _darkeningAlphaUniform;
	double _shadowAlpha;
	double _scale;
	long long _layoutMode;
	CGRect _unitFrameOnScreen;
	CGRect _computedFrame;

}

@property (assign,nonatomic) double darkeningAlphaUniform;              //@synthesize darkeningAlphaUniform=_darkeningAlphaUniform - In the implementation block
@property (assign,nonatomic) CGRect unitFrameOnScreen;                  //@synthesize unitFrameOnScreen=_unitFrameOnScreen - In the implementation block
@property (assign,nonatomic) double shadowAlpha;                        //@synthesize shadowAlpha=_shadowAlpha - In the implementation block
@property (assign,nonatomic) CGRect computedFrame;                      //@synthesize computedFrame=_computedFrame - In the implementation block
@property (assign,nonatomic) double scale;                              //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) long long layoutMode;                      //@synthesize layoutMode=_layoutMode - In the implementation block
@property (assign,nonatomic) BOOL notVisibleToUser;                     //@synthesize notVisibleToUser=_notVisibleToUser - In the implementation block
@property (assign,nonatomic) BOOL fullyVisibleToUser;                   //@synthesize fullyVisibleToUser=_fullyVisibleToUser - In the implementation block
-(double)shadowAlpha;
-(void)setShadowAlpha:(double)arg1 ;
-(id)init;
-(double)scale;
-(void)setScale:(double)arg1 ;
-(void)setLayoutMode:(long long)arg1 ;
-(unsigned long long)hash;
-(long long)layoutMode;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(CGRect)computedFrame;
-(CGRect)unitFrameOnScreen;
-(double)darkeningAlphaUniform;
-(BOOL)notVisibleToUser;
-(void)setDarkeningAlphaUniform:(double)arg1 ;
-(void)setUnitFrameOnScreen:(CGRect)arg1 ;
-(void)setComputedFrame:(CGRect)arg1 ;
-(void)setNotVisibleToUser:(BOOL)arg1 ;
-(BOOL)fullyVisibleToUser;
-(void)setFullyVisibleToUser:(BOOL)arg1 ;
@end

