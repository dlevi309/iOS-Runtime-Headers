/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@protocol TSDCanvasZoomTrackerDelegate;
#import <TSReading/TSReading-Structs.h>
@class TSDCanvasLayer, NSObject;

@interface TSDCanvasZoomTracker : NSObject {

	TSDCanvasLayer* mCanvasLayer;
	NSObject*<TSDCanvasZoomTrackerDelegate> mDelegate;
	BOOL mAlwaysUsesTranslationSprings;
	BOOL mSnapsViewScale;
	BOOL mAnimateTransform;
	CGAffineTransform mSavedTransform;
	CGPoint mZoomOrigin;
	BOOL mHasGestureOrigin;
	CGPoint mGestureOrigin;
	CGPoint mGestureOffset;
	CGPoint mSavedContentOffset;
	BOOL mIsZooming;
	unsigned long long mZoomVelocitySampleCount;
	double mZoomVelocity;
	double mZoomStartTime;
	BOOL mIsShowingZoomHUD;

}

@property (assign,nonatomic,__weak) NSObject*<TSDCanvasZoomTrackerDelegate> delegate; 
@property (assign,nonatomic) BOOL alwaysUsesTranslationSprings; 
@property (assign,nonatomic) BOOL snapsViewScale; 
@property (assign,nonatomic) BOOL animateTransform; 
-(NSObject*<TSDCanvasZoomTrackerDelegate>)delegate;
-(void)setDelegate:(NSObject*<TSDCanvasZoomTrackerDelegate>)arg1 ;
-(id)initWithCanvasLayer:(id)arg1 ;
-(void)zoomWithScale:(double)arg1 velocity:(double)arg2 locationInView:(CGPoint)arg3 phase:(int)arg4 ;
-(BOOL)snapsViewScale;
-(BOOL)alwaysUsesTranslationSprings;
-(BOOL)animateTransform;
-(void)p_finishZoomWithFinalScaleFactor:(double)arg1 contentOffset:(CGPoint)arg2 ;
-(void)setAlwaysUsesTranslationSprings:(BOOL)arg1 ;
-(void)setSnapsViewScale:(BOOL)arg1 ;
-(void)setAnimateTransform:(BOOL)arg1 ;
@end

