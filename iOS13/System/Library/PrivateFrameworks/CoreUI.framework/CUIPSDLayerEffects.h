/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)visible;
-(void)setVisible:(BOOL)arg1 ;
-(id)dropShadow;
-(void)setEffectScale:(double)arg1 ;
-(void)addLayerEffectComponent:(id)arg1 ;
-(NSMutableDictionary *)effectList;
-(double)effectScale;
-(id)colorOverlay;
-(void)setEffectList:(NSMutableDictionary *)arg1 ;
@end

