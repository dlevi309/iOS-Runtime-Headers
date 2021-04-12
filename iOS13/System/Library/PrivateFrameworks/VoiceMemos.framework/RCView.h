/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <UIKitCore/UIView.h>

@class CALayer, RCWaveformRenderer;

@interface RCView : UIView {

	BOOL _isCreatingSnapshot;
	CALayer* _waveformLayer;
	RCWaveformRenderer* _renderer;

}

@property (nonatomic,readonly) BOOL isCreatingSnapshot;                         //@synthesize isCreatingSnapshot=_isCreatingSnapshot - In the implementation block
@property (nonatomic,readonly) CALayer * waveformLayer;                         //@synthesize waveformLayer=_waveformLayer - In the implementation block
@property (assign,nonatomic,__weak) RCWaveformRenderer * renderer;              //@synthesize renderer=_renderer - In the implementation block
-(id)init;
-(void)setBounds:(CGRect)arg1 ;
-(id)snapshot;
-(void)setFrame:(CGRect)arg1 ;
-(RCWaveformRenderer *)renderer;
-(void)setRenderer:(RCWaveformRenderer *)arg1 ;
-(void)_setNeedsVisibleTimeRangeRendering;
-(CALayer *)waveformLayer;
-(BOOL)isCreatingSnapshot;
@end

