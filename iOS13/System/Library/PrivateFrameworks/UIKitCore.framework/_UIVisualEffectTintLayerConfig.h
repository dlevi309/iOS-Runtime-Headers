/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(UIColor *)tintColor;
-(void)configureLayerView:(id)arg1 ;
-(void)deconfigureLayerView:(id)arg1 ;
@end

