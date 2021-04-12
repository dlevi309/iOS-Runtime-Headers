/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/

#import <SpeechRecognitionCommandAndControl/SpeechRecognitionCommandAndControl-Structs.h>
#import <UIKitCore/UIView.h>

@class CAFilter;

@interface CACAdaptiveBackdropView : UIView {

	CAFilter* _gaussianBlurFilter;
	CAFilter* _luminanceMapFilter;
	CAFilter* _colorMatrix;

}

@property (nonatomic,retain) CAFilter * gaussianBlurFilter;              //@synthesize gaussianBlurFilter=_gaussianBlurFilter - In the implementation block
@property (nonatomic,retain) CAFilter * luminanceMapFilter;              //@synthesize luminanceMapFilter=_luminanceMapFilter - In the implementation block
@property (nonatomic,retain) CAFilter * colorMatrix;                     //@synthesize colorMatrix=_colorMatrix - In the implementation block
+(Class)layerClass;
+(id)contrastAdaptiveBackdropViewWithFrame:(CGRect)arg1 ;
-(CAFilter *)gaussianBlurFilter;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setGaussianBlurFilter:(CAFilter *)arg1 ;
-(CAFilter *)colorMatrix;
-(void)setColorMatrix:(CAFilter *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 isContrasted:(BOOL)arg2 ;
-(CAFilter *)luminanceMapFilter;
-(void)setLuminanceMapFilter:(CAFilter *)arg1 ;
@end

