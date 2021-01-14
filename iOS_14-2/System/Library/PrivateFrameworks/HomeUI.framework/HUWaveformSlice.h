/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


#import <HomeUI/HomeUI-Structs.h>
@class CALayer;

@interface HUWaveformSlice : NSObject {

	BOOL _hidden;
	double _opacity;
	CALayer* _waveformlayer;
	CGRect _layerFrame;

}

@property (assign,getter=isHidden,nonatomic) BOOL hidden;              //@synthesize hidden=_hidden - In the implementation block
@property (assign,nonatomic) double opacity;                           //@synthesize opacity=_opacity - In the implementation block
@property (nonatomic,retain) CALayer * waveformlayer;                  //@synthesize waveformlayer=_waveformlayer - In the implementation block
@property (assign,nonatomic) CGRect layerFrame;                        //@synthesize layerFrame=_layerFrame - In the implementation block
-(BOOL)isHidden;
-(void)setHidden:(BOOL)arg1 ;
-(double)opacity;
-(void)setOpacity:(double)arg1 ;
-(void)dealloc;
-(CALayer *)waveformlayer;
-(void)setWaveformlayer:(CALayer *)arg1 ;
-(CGRect)layerFrame;
-(void)setLayerFrame:(CGRect)arg1 ;
@end

