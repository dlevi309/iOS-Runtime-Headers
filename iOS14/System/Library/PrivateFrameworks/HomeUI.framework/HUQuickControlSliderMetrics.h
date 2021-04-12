/*
* Generated on Thursday, January 14, 2021 at 2:24:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@class HUIntrinsicSizeDescriptor;

@interface HUQuickControlSliderMetrics : NSObject {

	HUIntrinsicSizeDescriptor* _sizeDescriptor;
	double _cornerRadius;
	double _widthToCornerRadiusRatio;

}

@property (nonatomic,readonly) HUIntrinsicSizeDescriptor * sizeDescriptor;              //@synthesize sizeDescriptor=_sizeDescriptor - In the implementation block
@property (nonatomic,readonly) double cornerRadius;                                     //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (nonatomic,readonly) double widthToCornerRadiusRatio;                         //@synthesize widthToCornerRadiusRatio=_widthToCornerRadiusRatio - In the implementation block
-(double)cornerRadius;
-(id)initWithSizeDescriptor:(id)arg1 cornerRadius:(double)arg2 widthToCornerRadiusRatio:(double)arg3 ;
-(HUIntrinsicSizeDescriptor *)sizeDescriptor;
-(double)widthToCornerRadiusRatio;
@end

