/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@interface PKInkSmoothingDescriptor : NSObject {

	double _stylusSmoothing;
	double _touchSmoothing;
	double _velocitySmoothing;

}

@property (nonatomic,readonly) double stylusSmoothing;                //@synthesize stylusSmoothing=_stylusSmoothing - In the implementation block
@property (nonatomic,readonly) double touchSmoothing;                 //@synthesize touchSmoothing=_touchSmoothing - In the implementation block
@property (nonatomic,readonly) double velocitySmoothing;              //@synthesize velocitySmoothing=_velocitySmoothing - In the implementation block
+(id)smoothingDescriptorWithStylus:(double)arg1 touch:(double)arg2 velocity:(double)arg3 ;
+(id)defaultSmoothingDescriptor;
-(id)initWithStylusSmoothing:(double)arg1 touchSmoothing:(double)arg2 velocitySmoothing:(double)arg3 ;
-(double)stylusSmoothing;
-(double)touchSmoothing;
-(double)velocitySmoothing;
@end

