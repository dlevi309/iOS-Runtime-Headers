/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/

#import <SpeechRecognitionCommandAndControl/SpeechRecognitionCommandAndControl-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface CACDictationRecognizerModeOverlayView : UIView {

	CGRect _imageRect;
	int _dictationRecognizerMode;
	BOOL _didUpdateItems;
	UIColor* _tintColor;
	CGRect _boundsForLastReload;

}

@property (assign,nonatomic) CGRect boundsForLastReload;              //@synthesize boundsForLastReload=_boundsForLastReload - In the implementation block
@property (assign,nonatomic) BOOL didUpdateItems;                     //@synthesize didUpdateItems=_didUpdateItems - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                     //@synthesize tintColor=_tintColor - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)setImageRect:(CGRect)arg1 ;
-(id)imageBundle;
-(void)setDidUpdateItems:(BOOL)arg1 ;
-(CGRect)boundsForLastReload;
-(BOOL)didUpdateItems;
-(void)setBoundsForLastReload:(CGRect)arg1 ;
-(void)_updateOverlayImage;
-(void)setDictationRecognizerMode:(int)arg1 ;
-(void)setImageRect:(CGRect)arg1 withColor:(id)arg2 ;
-(id)_imageForCurrentDictiationRecognizerMode;
@end

