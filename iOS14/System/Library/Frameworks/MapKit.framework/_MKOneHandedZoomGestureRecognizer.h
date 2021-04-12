/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol MKZoomingGestureControlConfiguration;
@class UITapGestureRecognizer, _MKZoomingPanGestureRecognizer, NSString;

@interface _MKOneHandedZoomGestureRecognizer : UIGestureRecognizer <UIGestureRecognizerDelegate> {

	BOOL _didReceive1stTap;
	BOOL _timerOn;
	UITapGestureRecognizer* _tapGestureRecognizer;
	_MKZoomingPanGestureRecognizer* _panGestureRecognizer;
	CGPoint _locationOfTapGesture;
	id<MKZoomingGestureControlConfiguration> _configuration;

}

@property (nonatomic,readonly) UITapGestureRecognizer * tapGestureRecognizer;                      //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (nonatomic,readonly) _MKZoomingPanGestureRecognizer * panGestureRecognizer;              //@synthesize panGestureRecognizer=_panGestureRecognizer - In the implementation block
@property (nonatomic,readonly) CGPoint locationOfTapGesture;                                       //@synthesize locationOfTapGesture=_locationOfTapGesture - In the implementation block
@property (nonatomic,copy) id<MKZoomingGestureControlConfiguration> configuration;                 //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) double scale; 
@property (nonatomic,readonly) double velocity; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setAllowedPressTypes:(id)arg1 ;
-(void)_panGestureRecognizerStateDidChange:(id)arg1 ;
-(double)velocity;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(_MKZoomingPanGestureRecognizer *)panGestureRecognizer;
-(void)_tooSlow:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)_clearTapTimer;
-(double)scale;
-(void)_tapGestureRecognizerStateDidChange:(id)arg1 ;
-(id<MKZoomingGestureControlConfiguration>)configuration;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(void)_startTapTimer:(double)arg1 ;
-(void)reset;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(CGPoint)locationOfTapGesture;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)dealloc;
-(void)setConfiguration:(id<MKZoomingGestureControlConfiguration>)arg1 ;
@end

