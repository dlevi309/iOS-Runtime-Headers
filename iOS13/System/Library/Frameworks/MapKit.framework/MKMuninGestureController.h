/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id<MKMuninGestureControllerDelegate>)delegate;
-(void)setDelegate:(id<MKMuninGestureControllerDelegate>)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)_handlePan:(id)arg1 ;
-(MKMuninView *)muninView;
-(void)setMuninView:(MKMuninView *)arg1 ;
-(void)setNavigatingEnabled:(BOOL)arg1 ;
-(void)setPanningEnabled:(BOOL)arg1 ;
-(void)setPinchingEnabled:(BOOL)arg1 ;
-(id)initWithMuninView:(id)arg1 ;
-(BOOL)navigatingEnabled;
-(BOOL)panningEnabled;
-(BOOL)pinchingEnabled;
-(void)_handleTap:(id)arg1 ;
-(void)_handlePinch:(id)arg1 ;
-(void)_moveBackToReplayTap;
@end

