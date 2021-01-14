/*
* Generated on Thursday, January 14, 2021 at 2:25:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MaterialKit.framework/MaterialKit
*/


@class MTCoreMaterialVisualStyling, UIColor, CAFilter, NSString;

@interface MTVisualStyling : NSObject {

	MTCoreMaterialVisualStyling* _coreMaterialVisualStyling;

}

@property (nonatomic,copy,readonly) UIColor * color; 
@property (nonatomic,readonly) double alpha; 
@property (nonatomic,readonly) CAFilter * composedFilter; 
@property (nonatomic,copy,readonly) NSString * visualStyleSetName; 
@property (nonatomic,copy,readonly) NSString * visualStyleName; 
@property (getter=_coreMaterialVisualStyling,nonatomic,readonly) MTCoreMaterialVisualStyling * coreMaterialVisualStyling;              //@synthesize coreMaterialVisualStyling=_coreMaterialVisualStyling - In the implementation block
-(id)visualEffect;
-(NSString *)visualStyleSetName;
-(double)alpha;
-(UIColor *)color;
-(void)applyToView:(id)arg1 withColorBlock:(/*^block*/id)arg2 ;
-(CAFilter *)composedFilter;
-(id)_coreMaterialVisualStyling;
-(NSString *)visualStyleName;
-(id)_layerConfig;
-(id)initWithCoreMaterialVisualStyling:(id)arg1 ;
@end

