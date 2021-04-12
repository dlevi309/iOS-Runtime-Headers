/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)options;
-(id)settings;
-(unsigned long long)hash;
-(BOOL)prefersShadow;
-(void)setPreferredTintMode:(long long)arg1 ;
-(void)setPrefersScaledContent:(BOOL)arg1 ;
-(long long)preferredTintMode;
-(BOOL)prefersScaledContent;
-(BOOL)tintViewTakesOnPointerShape;
-(void)setPrefersShadow:(BOOL)arg1 ;
-(void)setTintViewTakesOnPointerShape:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)constrainedAxes;
@end

