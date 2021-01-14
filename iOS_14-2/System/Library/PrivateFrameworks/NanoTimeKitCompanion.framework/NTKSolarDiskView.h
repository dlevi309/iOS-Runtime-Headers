/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>

@class CLKDevice, UIView;

@interface NTKSolarDiskView : UIView {

	double _horizonLine;
	CLKDevice* _device;
	UIView* _sunUpView;
	UIView* _sunDownView;

}

@property (nonatomic,retain) CLKDevice * device;                //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) UIView * sunUpView;                //@synthesize sunUpView=_sunUpView - In the implementation block
@property (nonatomic,retain) UIView * sunDownView;              //@synthesize sunDownView=_sunDownView - In the implementation block
@property (assign,nonatomic) double horizonLine;                //@synthesize horizonLine=_horizonLine - In the implementation block
-(CLKDevice *)device;
-(void)layoutSubviews;
-(void)setCenter:(CGPoint)arg1 ;
-(void)setDevice:(CLKDevice *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 forDevice:(id)arg2 ;
-(double)horizonLine;
-(UIView *)sunUpView;
-(UIView *)sunDownView;
-(void)setHorizonLine:(double)arg1 ;
-(void)setSunUpView:(UIView *)arg1 ;
-(void)setSunDownView:(UIView *)arg1 ;
@end

