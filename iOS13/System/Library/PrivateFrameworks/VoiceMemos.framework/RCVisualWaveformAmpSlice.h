/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/


#import <VoiceMemos/VoiceMemos-Structs.h>
@class UIColor, CALayer;

@interface RCVisualWaveformAmpSlice : NSObject {

	double _visualAmplitudeHeight;
	double _interpolatingvisualAmplitudeHeight;
	double _interpolatingvisualAmplitudeHeightDiff;
	long long _interpolatingVisualAmplitudeHeightFrameCount;
	UIColor* _lastColor;
	BOOL _hasProcessedSegments;
	BOOL _hidden;
	long long _sliceIndex;
	double _amplitude;
	long long _visualAmplitudeHeightInterpolatingFrames;
	CALayer* _sliceLayer;
	unsigned long long _color;

}

@property (assign,nonatomic) long long sliceIndex;                                            //@synthesize sliceIndex=_sliceIndex - In the implementation block
@property (assign,nonatomic) double amplitude;                                                //@synthesize amplitude=_amplitude - In the implementation block
@property (assign,nonatomic) double visualAmplitudeHeight; 
@property (assign,nonatomic) long long visualAmplitudeHeightInterpolatingFrames;              //@synthesize visualAmplitudeHeightInterpolatingFrames=_visualAmplitudeHeightInterpolatingFrames - In the implementation block
@property (nonatomic,readonly) BOOL hasVisualAmplitudeInterpolatingFramesLeft; 
@property (nonatomic,retain) CALayer * sliceLayer;                                            //@synthesize sliceLayer=_sliceLayer - In the implementation block
@property (assign,nonatomic) BOOL hasProcessedSegments;                                       //@synthesize hasProcessedSegments=_hasProcessedSegments - In the implementation block
@property (assign,nonatomic) unsigned long long color;                                        //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) BOOL hidden;                                                     //@synthesize hidden=_hidden - In the implementation block
@property (nonatomic,readonly) UIColor * uiColor; 
@property (nonatomic,readonly) UIColor * uiColorDimmed; 
+(void)setPrimaryColor:(id)arg1 ;
+(void)setSecondaryColor:(id)arg1 ;
+(id)primaryColor;
+(id)secondaryColor;
+(id)colorForSliceColor:(unsigned long long)arg1 dimmed:(BOOL)arg2 ;
-(id)init;
-(unsigned long long)color;
-(void)setColor:(unsigned long long)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(BOOL)hidden;
-(UIColor *)uiColor;
-(double)amplitude;
-(void)setAmplitude:(double)arg1 ;
-(id)initWithIndex:(double)arg1 amplitude:(double)arg2 ;
-(CALayer *)sliceLayer;
-(BOOL)hasVisualAmplitudeInterpolatingFramesLeft;
-(UIColor *)uiColorDimmed;
-(void)setHasProcessedSegments:(BOOL)arg1 ;
-(void)setVisualAmplitudeHeightInterpolatingFrames:(long long)arg1 ;
-(void)setVisualAmplitudeHeight:(double)arg1 ;
-(double)visualAmplitudeHeight;
-(long long)sliceIndex;
-(void)setSliceIndex:(long long)arg1 ;
-(long long)visualAmplitudeHeightInterpolatingFrames;
-(void)setSliceLayer:(CALayer *)arg1 ;
-(BOOL)hasProcessedSegments;
@end

