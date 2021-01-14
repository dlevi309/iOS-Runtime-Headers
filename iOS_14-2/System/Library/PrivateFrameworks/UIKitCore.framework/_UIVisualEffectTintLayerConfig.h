/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIVisualEffectLayerConfig.h>

@class UIColor;

@interface _UIVisualEffectTintLayerConfig : _UIVisualEffectLayerConfig {

	UIColor* _tintColor;

}

@property (nonatomic,readonly) UIColor * tintColor;              //@synthesize tintColor=_tintColor - In the implementation block
+(id)layerWithTintColor:(id)arg1 filterType:(id)arg2 ;
+(id)layerWithTintColor:(id)arg1 ;
-(void)deconfigureLayerView:(id)arg1 ;
-(void)configureLayerView:(id)arg1 ;
-(id)description;
-(UIColor *)tintColor;
@end

