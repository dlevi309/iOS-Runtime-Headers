/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (getter=_coreMaterialVisualStyling,nonatomic,retain) MTCoreMaterialVisualStyling * coreMaterialVisualStyling;              //@synthesize coreMaterialVisualStyling=_coreMaterialVisualStyling - In the implementation block
-(UIColor *)color;
-(double)alpha;
-(id)visualEffect;
-(NSString *)visualStyleSetName;
-(NSString *)visualStyleName;
-(id)initWithCoreMaterialVisualStyling:(id)arg1 ;
-(id)_layerConfig;
-(id)_coreMaterialVisualStyling;
-(void)setCoreMaterialVisualStyling:(MTCoreMaterialVisualStyling *)arg1 ;
-(CAFilter *)composedFilter;
@end

