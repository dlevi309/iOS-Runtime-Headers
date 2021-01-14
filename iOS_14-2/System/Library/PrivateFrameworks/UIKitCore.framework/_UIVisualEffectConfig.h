/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSMutableArray, _UIVisualEffectLayerConfig, NSArray;

@interface _UIVisualEffectConfig : NSObject {

	NSMutableArray* _layerConfigs;
	_UIVisualEffectLayerConfig* _contentConfig;

}

@property (nonatomic,readonly) NSArray * layerConfigs;                                  //@synthesize layerConfigs=_layerConfigs - In the implementation block
@property (nonatomic,readonly) _UIVisualEffectLayerConfig * contentConfig;              //@synthesize contentConfig=_contentConfig - In the implementation block
+(id)configWithLayerConfigs:(id)arg1 ;
+(id)configWithContentConfig:(id)arg1 ;
-(void)addLayerConfig:(id)arg1 ;
-(void)enumerateLayerConfigs:(/*^block*/id)arg1 ;
-(_UIVisualEffectLayerConfig *)contentConfig;
-(id)description;
-(NSArray *)layerConfigs;
@end

