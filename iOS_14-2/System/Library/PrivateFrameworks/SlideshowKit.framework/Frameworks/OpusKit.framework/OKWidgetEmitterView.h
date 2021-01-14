/*
* Generated on Thursday, January 14, 2021 at 2:28:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKWidgetView.h>

@class OFEmitterView;

@interface OKWidgetEmitterView : OKWidgetView {

	unsigned _seed;
	OFEmitterView* _emitterView;
	CGPoint _originalEmitterPosition;

}
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
-(BOOL)prepareForDisplay:(BOOL)arg1 ;
-(void)setSettingSpin:(double)arg1 ;
-(id)settingObjectForKey:(id)arg1 ;
-(void)setSettingVelocity:(double)arg1 ;
-(void)setSettingLifetime:(double)arg1 ;
-(void)setSettingEmitterCells:(id)arg1 ;
-(double)settingBirthRate;
-(double)settingScale;
-(void)setSettingBirthRate:(double)arg1 ;
-(double)settingSpin;
-(double)settingLifetime;
-(void)setSettingScale:(double)arg1 ;
-(void)layoutSubviews;
-(id)settingEmitterCells;
-(id)initWithWidget:(id)arg1 ;
-(void)dealloc;
-(double)settingVelocity;
-(BOOL)prepareForWarmup:(BOOL)arg1 ;
-(BOOL)prepareForUnload:(BOOL)arg1 ;
-(void)resumeEmitter;
-(void)pauseEmitter;
-(BOOL)isEmitting;
-(double)settingEmitterDepth;
-(void)setSettingEmitterDepth:(double)arg1 ;
-(id)settingEmitterMode;
-(void)setSettingEmitterMode:(id)arg1 ;
-(CGPoint)settingEmitterPosition;
-(void)setSettingEmitterPosition:(CGPoint)arg1 ;
-(id)settingEmitterShape;
-(void)setSettingEmitterShape:(id)arg1 ;
-(CGSize)settingEmitterSize;
-(void)setSettingEmitterSize:(CGSize)arg1 ;
-(double)settingEmitterZPosition;
-(void)setSettingEmitterZPosition:(double)arg1 ;
-(id)settingRenderMode;
-(void)setSettingRenderMode:(id)arg1 ;
-(double)settingSeed;
-(void)setSettingSeed:(double)arg1 ;
@end

