/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIVisualEffectView, UITraitCollection;

@interface _UIVisualEffectEnvironment : NSObject <NSCopying> {

	BOOL _allowsDithering;
	BOOL _allowsBlurring;
	BOOL _useSimpleVibrancy;
	BOOL _reducedTransperancy;
	UIVisualEffectView* _effectView;
	UITraitCollection* _traitCollection;

}

@property (nonatomic,readonly) UIVisualEffectView * effectView;              //@synthesize effectView=_effectView - In the implementation block
@property (assign,nonatomic) BOOL allowsDithering;                           //@synthesize allowsDithering=_allowsDithering - In the implementation block
@property (assign,nonatomic) BOOL allowsBlurring;                            //@synthesize allowsBlurring=_allowsBlurring - In the implementation block
@property (assign,nonatomic) BOOL useSimpleVibrancy;                         //@synthesize useSimpleVibrancy=_useSimpleVibrancy - In the implementation block
@property (assign,nonatomic) BOOL reducedTransperancy;                       //@synthesize reducedTransperancy=_reducedTransperancy - In the implementation block
@property (nonatomic,copy) UITraitCollection * traitCollection;              //@synthesize traitCollection=_traitCollection - In the implementation block
-(UIVisualEffectView *)effectView;
-(UITraitCollection *)traitCollection;
-(void)setTraitCollection:(UITraitCollection *)arg1 ;
-(BOOL)allowsDithering;
-(BOOL)reducedTransperancy;
-(void)setAllowsDithering:(BOOL)arg1 ;
-(id)description;
-(void)setAllowsBlurring:(BOOL)arg1 ;
-(id)initWithHost:(id)arg1 ;
-(BOOL)allowsBlurring;
-(BOOL)useSimpleVibrancy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setReducedTransperancy:(BOOL)arg1 ;
-(void)setUseSimpleVibrancy:(BOOL)arg1 ;
@end

