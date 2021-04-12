/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>

@class CLKDevice, UIImageView, CAGradientLayer, NTKSiderealColorManager, UIView;

@interface NTKSiderealSolarContainerView : UIView {

	CLKDevice* _device;
	UIImageView* _dayPathGlow;
	UIImageView* _dayDiskBloom;
	CAGradientLayer* _dayDiskGnomon;
	CAGradientLayer* _nightDiskGnomon;
	double _orbitDiameter;
	NTKSiderealColorManager* _colorManager;
	UIView* _dayContainerView;
	UIView* _nightContainerView;
	UIView* _dayDisk;
	UIView* _dayAccessoryContainerView;
	UIView* _nightDisk;
	UIView* _nightRing;
	UIView* _nightAccessoryContainerView;

}

@property (nonatomic,retain) UIView * dayContainerView;                         //@synthesize dayContainerView=_dayContainerView - In the implementation block
@property (nonatomic,retain) UIView * dayDisk;                                  //@synthesize dayDisk=_dayDisk - In the implementation block
@property (nonatomic,retain) UIView * dayAccessoryContainerView;                //@synthesize dayAccessoryContainerView=_dayAccessoryContainerView - In the implementation block
@property (nonatomic,retain) UIView * nightContainerView;                       //@synthesize nightContainerView=_nightContainerView - In the implementation block
@property (nonatomic,retain) UIView * nightDisk;                                //@synthesize nightDisk=_nightDisk - In the implementation block
@property (nonatomic,retain) UIView * nightRing;                                //@synthesize nightRing=_nightRing - In the implementation block
@property (nonatomic,retain) UIView * nightAccessoryContainerView;              //@synthesize nightAccessoryContainerView=_nightAccessoryContainerView - In the implementation block
-(UIView *)dayDisk;
-(id)_newGnomonView;
-(id)initWithFrame:(CGRect)arg1 orbitDiameter:(double)arg2 device:(id)arg3 ;
-(double)poseForDayGnomonImage;
-(double)poseForDayDiskBloomImage;
-(double)poseForDayDiskImage;
-(double)poseForNightGnomonImage;
-(double)poseForNightDiskImage;
-(double)poseForNightRingImage;
-(void)setSolarDayProgress:(double)arg1 ;
-(UIView *)dayContainerView;
-(void)setDayContainerView:(UIView *)arg1 ;
-(UIView *)nightContainerView;
-(void)setNightContainerView:(UIView *)arg1 ;
-(void)setDayDisk:(UIView *)arg1 ;
-(UIView *)dayAccessoryContainerView;
-(void)setDayAccessoryContainerView:(UIView *)arg1 ;
-(UIView *)nightDisk;
-(void)setNightDisk:(UIView *)arg1 ;
-(UIView *)nightRing;
-(void)setNightRing:(UIView *)arg1 ;
-(UIView *)nightAccessoryContainerView;
-(void)setNightAccessoryContainerView:(UIView *)arg1 ;
@end

