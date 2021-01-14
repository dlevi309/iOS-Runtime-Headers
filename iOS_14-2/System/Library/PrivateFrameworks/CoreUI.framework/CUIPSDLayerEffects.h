/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/


@class NSMutableDictionary;

@interface CUIPSDLayerEffects : NSObject {

	BOOL _visible;
	double _effectScale;
	NSMutableDictionary* _effectList;

}

@property (assign) BOOL visible;                                  //@synthesize visible=_visible - In the implementation block
@property (assign) double effectScale;                            //@synthesize effectScale=_effectScale - In the implementation block
@property (retain) NSMutableDictionary * effectList;              //@synthesize effectList=_effectList - In the implementation block
-(id)init;
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)visible;
-(void)setEffectList:(NSMutableDictionary *)arg1 ;
-(void)addLayerEffectComponent:(id)arg1 ;
-(id)colorOverlay;
-(NSMutableDictionary *)effectList;
-(double)effectScale;
-(id)dropShadow;
-(void)setEffectScale:(double)arg1 ;
-(void)dealloc;
@end

