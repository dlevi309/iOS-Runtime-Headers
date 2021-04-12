/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(double)opacity;
-(NSString *)filterType;
-(UIColor *)fillColor;
-(void)configureLayerView:(id)arg1 ;
-(void)deconfigureLayerView:(id)arg1 ;
@end

