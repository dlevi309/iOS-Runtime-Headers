/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKitCore/_UILegibilityView.h>
#import <libobjc.A.dylib/SBUILegibility.h>

@class _UILegibilitySettings, UIImage, NSString;

@interface SBUILegibilityView : _UILegibilityView <SBUILegibility> {

	_UILegibilitySettings* _legibilitySettings;
	long long _tintStyle;
	UIImage* _tintImage;
	UIEdgeInsets _hitTestEdgeInsets;

}

@property (assign,nonatomic) UIEdgeInsets hitTestEdgeInsets;                          //@synthesize hitTestEdgeInsets=_hitTestEdgeInsets - In the implementation block
@property (assign,nonatomic) long long tintStyle;                                     //@synthesize tintStyle=_tintStyle - In the implementation block
@property (nonatomic,retain) UIImage * tintImage;                                     //@synthesize tintImage=_tintImage - In the implementation block
@property (assign,nonatomic) double strength; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)tintStyle;
-(void)setSettings:(id)arg1 image:(id)arg2 shadowImage:(id)arg3 ;
-(void)updateForChangedSettings:(id)arg1 ;
-(void)setTintStyle:(long long)arg1 ;
-(UIImage *)tintImage;
-(UIEdgeInsets)hitTestEdgeInsets;
-(void)setHitTestEdgeInsets:(UIEdgeInsets)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(id)_tintColorForSettings:(id)arg1 ;
-(id)initWithSettings:(id)arg1 strength:(double)arg2 image:(id)arg3 tintStyle:(long long)arg4 ;
-(void)setTintImage:(UIImage *)arg1 ;
@end

