/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <SpriteKit/SKEffectNode.h>

@class CLKDevice;

@interface NTKChronoSubDial : SKEffectNode {

	CLKDevice* _device;
	double _labelsRadius;
	double _labelsFontSize;
	long long _labelsFont;
	double _radius;
	CGSize _smallOuter;
	CGSize _smallInner;

}

@property (nonatomic,readonly) CLKDevice * device;                 //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) double labelsRadius;                //@synthesize labelsRadius=_labelsRadius - In the implementation block
@property (nonatomic,readonly) double labelsFontSize;              //@synthesize labelsFontSize=_labelsFontSize - In the implementation block
@property (nonatomic,readonly) long long labelsFont;               //@synthesize labelsFont=_labelsFont - In the implementation block
@property (nonatomic,readonly) double radius;                      //@synthesize radius=_radius - In the implementation block
@property (nonatomic,readonly) CGSize smallOuter;                  //@synthesize smallOuter=_smallOuter - In the implementation block
@property (nonatomic,readonly) CGSize smallInner;                  //@synthesize smallInner=_smallInner - In the implementation block
+(id)upper:(double)arg1 forDevice:(id)arg2 ;
+(id)lower:(double)arg1 forDevice:(id)arg2 ;
-(CLKDevice *)device;
-(double)radius;
-(void)applyTransitionFraction:(double)arg1 fromTimeScale:(unsigned long long)arg2 toTimeScale:(unsigned long long)arg3 ;
-(id)initWithRadius:(double)arg1 forDevice:(id)arg2 ;
-(CGSize)smallInner;
-(CGSize)smallOuter;
-(id)addNodes:(id)arg1 ;
-(double)labelsFontSize;
-(double)labelsRadius;
-(void)updateTimeScale:(unsigned long long)arg1 ;
-(void)colorize:(id)arg1 ;
-(id)addNodes:(id)arg1 to:(id)arg2 ;
-(long long)labelsFont;
@end

