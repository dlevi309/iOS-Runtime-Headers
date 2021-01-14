/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSString, UIColor;

@interface _UIVisualEffectLayerConfig : NSObject {

	NSString* _filterType;
	double _opacity;
	UIColor* _fillColor;

}

@property (nonatomic,readonly) double opacity;                     //@synthesize opacity=_opacity - In the implementation block
@property (nonatomic,readonly) NSString * filterType;              //@synthesize filterType=_filterType - In the implementation block
@property (nonatomic,readonly) UIColor * fillColor;                //@synthesize fillColor=_fillColor - In the implementation block
+(id)layerWithFillColor:(id)arg1 opacity:(double)arg2 filterType:(id)arg3 ;
-(NSString *)filterType;
-(void)deconfigureLayerView:(id)arg1 ;
-(UIColor *)fillColor;
-(void)configureLayerView:(id)arg1 ;
-(double)opacity;
-(id)description;
@end

