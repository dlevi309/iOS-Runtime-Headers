/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIPointerEffect.h>

@interface UIPointerHoverEffect : UIPointerEffect {

	BOOL _prefersShadow;
	BOOL _prefersScaledContent;
	BOOL _tintViewTakesOnPointerShape;
	long long _preferredTintMode;

}

@property (assign,nonatomic) BOOL tintViewTakesOnPointerShape;              //@synthesize tintViewTakesOnPointerShape=_tintViewTakesOnPointerShape - In the implementation block
@property (assign,nonatomic) long long preferredTintMode;                   //@synthesize preferredTintMode=_preferredTintMode - In the implementation block
@property (assign,nonatomic) BOOL prefersShadow;                            //@synthesize prefersShadow=_prefersShadow - In the implementation block
@property (assign,nonatomic) BOOL prefersScaledContent;                     //@synthesize prefersScaledContent=_prefersScaledContent - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)options;
-(id)settings;
-(unsigned long long)constrainedAxes;
-(void)setPreferredTintMode:(long long)arg1 ;
-(void)setPrefersScaledContent:(BOOL)arg1 ;
-(long long)preferredTintMode;
-(BOOL)prefersShadow;
-(BOOL)prefersScaledContent;
-(BOOL)tintViewTakesOnPointerShape;
-(void)setPrefersShadow:(BOOL)arg1 ;
-(void)setTintViewTakesOnPointerShape:(BOOL)arg1 ;
@end

