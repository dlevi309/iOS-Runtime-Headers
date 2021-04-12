/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
*/


@protocol TVRTouchProcessorDelegate;
#import <TVRemoteUI/TVRemoteUI-Structs.h>
@class NSMutableSet, NSMapTable, TVRTouchpadView;

@interface TVRTouchProcessor : NSObject {

	NSMutableSet* _activeButtonTypes;
	NSMapTable* _touches;
	id<TVRTouchProcessorDelegate> _delegate;
	TVRTouchpadView* _touchpadView;

}

@property (nonatomic,retain) TVRTouchpadView * touchpadView;                             //@synthesize touchpadView=_touchpadView - In the implementation block
@property (assign,nonatomic,__weak) id<TVRTouchProcessorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)touchProcessorForDevice:(id)arg1 ;
-(id<TVRTouchProcessorDelegate>)delegate;
-(void)setDelegate:(id<TVRTouchProcessorDelegate>)arg1 ;
-(id)_init;
-(void)reset;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(TVRTouchpadView *)touchpadView;
-(void)setTouchpadView:(TVRTouchpadView *)arg1 ;
-(BOOL)_deviceSupportsMovableBoundingBox;
-(void)_touchTimerExpired:(id)arg1 ;
-(long long)_defaultRelativeStartingLocation;
-(void)_beginTrackingTouch:(id)arg1 withRelativeLocation:(long long)arg2 ;
-(void)_dispatchGameControllerEventForTouch:(id)arg1 event:(id)arg2 ;
-(long long)_relativeTouchLocationForDistanceTraveled:(CGPoint)arg1 ;
-(void)_deliverTouchToDelegate:(id)arg1 info:(id)arg2 ;
-(void)_beginTrackingAnyTouchIfNeeded;
-(CGRect)_boundingBoxForTouch:(id)arg1 relativeStartLocation:(long long)arg2 ;
-(CGPoint)_virtualTouchLocationForTouch:(id)arg1 ;
-(void)markCurrentTouchToBeCancelled;
-(void)sendPressBegan:(long long)arg1 ;
-(void)sendPressEnded:(long long)arg1 ;
@end

