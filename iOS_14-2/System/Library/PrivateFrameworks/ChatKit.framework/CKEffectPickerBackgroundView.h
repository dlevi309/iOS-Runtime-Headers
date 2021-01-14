/*
* Generated on Thursday, January 14, 2021 at 2:21:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIVisualEffectView, CALayer, CABackdropLayer;

@interface CKEffectPickerBackgroundView : UIView {

	UIVisualEffectView* _effectView;
	CALayer* _blueContrastLayer;
	CABackdropLayer* _backdrop;

}

@property (nonatomic,retain) UIVisualEffectView * effectView;              //@synthesize effectView=_effectView - In the implementation block
@property (nonatomic,retain) CALayer * blueContrastLayer;                  //@synthesize blueContrastLayer=_blueContrastLayer - In the implementation block
@property (nonatomic,retain) CABackdropLayer * backdrop;                   //@synthesize backdrop=_backdrop - In the implementation block
-(UIVisualEffectView *)effectView;
-(id)initWithFrame:(CGRect)arg1 ;
-(CABackdropLayer *)backdrop;
-(void)setBackdrop:(CABackdropLayer *)arg1 ;
-(void)setEffectView:(UIVisualEffectView *)arg1 ;
-(CALayer *)blueContrastLayer;
-(void)setBlueContrastLayer:(CALayer *)arg1 ;
-(void)updateBackgroundVisualEffect;
@end

