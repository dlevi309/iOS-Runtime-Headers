/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKUpNextComplicationConfiguration.h>

@class UIImage;

@interface NTKUpNextRichComplicationBezelConfiguration : NTKUpNextComplicationConfiguration {

	UIImage* _maskImage;
	double _radius;

}

@property (nonatomic,readonly) UIImage * maskImage;              //@synthesize maskImage=_maskImage - In the implementation block
@property (nonatomic,readonly) double radius;                    //@synthesize radius=_radius - In the implementation block
-(void)encodeWithCoder:(id)arg1 ;
-(double)radius;
-(id)initWithCoder:(id)arg1 ;
-(UIImage *)maskImage;
-(id)initWithMaskImage:(id)arg1 radius:(double)arg2 ;
-(id)_newPickerView;
@end

