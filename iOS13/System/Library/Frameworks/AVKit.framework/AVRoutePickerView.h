/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol OS_dispatch_queue, AVRoutePickerViewDelegate;
@class NSObject, UIColor, UIButton, UIViewPropertyAnimator, AVObservationController, AVMicaPackage, MPMediaControls, NSString;

@interface AVRoutePickerView : UIView {

	NSObject*<OS_dispatch_queue> _getAirPlayStatusQueue;
	UIColor* _activeTintColor;
	UIButton* _routePickerButton;
	UIButton* _customButton;
	CGSize _oldSize;
	UIViewPropertyAnimator* _buttonHighlightAnimator;
	AVObservationController* _observationController;
	BOOL _airPlayActive;
	BOOL _prioritizesVideoDevices;
	AVMicaPackage* _routePickerButtonMicaPackage;
	MPMediaControls* _routePickingControls;
	id<AVRoutePickerViewDelegate> _delegate;
	long long _routePickerButtonStyle;
	NSString* _overrideRoutingContextUID;

}

@property (nonatomic,copy) NSString * overrideRoutingContextUID;                         //@synthesize overrideRoutingContextUID=_overrideRoutingContextUID - In the implementation block
@property (assign,nonatomic,__weak) id<AVRoutePickerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIColor * activeTintColor; 
@property (assign,nonatomic) long long routePickerButtonStyle;                           //@synthesize routePickerButtonStyle=_routePickerButtonStyle - In the implementation block
@property (assign,nonatomic) BOOL prioritizesVideoDevices; 
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id<AVRoutePickerViewDelegate>)delegate;
-(void)setDelegate:(id<AVRoutePickerViewDelegate>)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)tintColorDidChange;
-(void)didMoveToWindow;
-(void)_registerNotifications;
-(UIColor *)activeTintColor;
-(id)customButton;
-(void)updateButtonAppearance;
-(NSString *)overrideRoutingContextUID;
-(void)setOverrideRoutingContextUID:(NSString *)arg1 ;
-(void)setActiveTintColor:(UIColor *)arg1 ;
-(BOOL)isAirPlayActive;
-(void)setAirPlayActive:(BOOL)arg1 ;
-(void)setCustomButton:(id)arg1 ;
-(BOOL)prioritizesVideoDevices;
-(void)setPrioritizesVideoDevices:(BOOL)arg1 ;
-(void)_createOrUpdateRoutePickerButton;
-(void)_routePickerButtonTapped:(id)arg1 ;
-(void)_routePickerButtonTouchDown:(id)arg1 ;
-(void)_routePickerButtonTouchDragEnter:(id)arg1 ;
-(void)_routePickerButtonTouchUp:(id)arg1 ;
-(void)_setRoutePickerButtonAlpha:(double)arg1 animated:(BOOL)arg2 ;
-(void)_updateAirPlayActive;
-(BOOL)_isAirPlayActive;
-(id)_defaultActiveTintColor;
-(CGRect)_normalizedRectInWindow;
-(long long)routePickerButtonStyle;
-(void)setRoutePickerButtonStyle:(long long)arg1 ;
@end

