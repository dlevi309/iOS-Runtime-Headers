/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCoder:(id)arg1 ;
-(double)radius;
-(UIImage *)maskImage;
-(id)initWithMaskImage:(id)arg1 radius:(double)arg2 ;
-(id)_newPickerView;
@end

