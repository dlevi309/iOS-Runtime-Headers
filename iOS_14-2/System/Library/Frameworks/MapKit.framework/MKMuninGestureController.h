/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol MKMuninGestureControllerDelegate;
@class UITapGestureRecognizer, UIPanGestureRecognizer, UIPinchGestureRecognizer, NSDate, VKCompoundAnimation, MKMuninView, NSString;

@interface MKMuninGestureController : NSObject <UIGestureRecognizerDelegate> {

	long long _userInteractionCount;
	UITapGestureRecognizer* _singleNavigateGestureRecognizer;
	UIPanGestureRecognizer* _panGestureRecognizer;
	UIPinchGestureRecognizer* _pinchGestureRecognizer;
	NSDate* _singleTapTime;
	VKCompoundAnimation* _panDecelerationAnimationGroup;
	long long _lastZoomDirection;
	double _startZoomScale;
	double _lastZoomScale;
	BOOL _readyToReplayTap;
	BOOL _navigatingEnabled;
	BOOL _panningEnabled;
	BOOL _pinchingEnabled;
	id<MKMuninGestureControllerDelegate> _delegate;
	MKMuninView* _muninView;

}

@property (assign,nonatomic,__weak) MKMuninView * muninView;                                    //@synthesize muninView=_muninView - In the implementation block
@property (assign,nonatomic,__weak) id<MKMuninGestureControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL navigatingEnabled;                                            //@synthesize navigatingEnabled=_navigatingEnabled - In the implementation block
@property (assign,nonatomic) BOOL panningEnabled;                                               //@synthesize panningEnabled=_panningEnabled - In the implementation block
@property (assign,nonatomic) BOOL pinchingEnabled;                                              //@synthesize pinchingEnabled=_pinchingEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)navigatingEnabled;
-(BOOL)panningEnabled;
-(BOOL)pinchingEnabled;
-(id<MKMuninGestureControllerDelegate>)delegate;
-(void)_handlePinch:(id)arg1 ;
-(void)_handlePan:(id)arg1 ;
-(void)setDelegate:(id<MKMuninGestureControllerDelegate>)arg1 ;
-(void)_handleTap:(id)arg1 ;
-(void)_moveBackToReplayTap;
-(MKMuninView *)muninView;
-(void)setMuninView:(MKMuninView *)arg1 ;
-(void)setPanningEnabled:(BOOL)arg1 ;
-(void)setNavigatingEnabled:(BOOL)arg1 ;
-(void)setPinchingEnabled:(BOOL)arg1 ;
-(id)initWithMuninView:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
@end

