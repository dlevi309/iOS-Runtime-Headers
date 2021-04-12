/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>

@class NSMutableSet, NSArray, UIEvent, NSString;

@interface CSHorizontalScrollFailureRecognizer : UIGestureRecognizer <PTSettingsKeyObserver> {

	CGPoint _startingLocation;
	unsigned long long _maxAllowableVerticalOffset;
	double _maxAllowedTopAngle;
	double _minAllowedTopAngle;
	double _effectiveTopAngle;
	double _minAllowedBottomAngle;
	double _maxAllowedBottomAngle;
	double _effectiveBottomAngle;
	NSMutableSet* _touches;
	BOOL _tracking;
	BOOL _allowMultiTouch;
	BOOL _viewDebugArea;
	NSArray* _debugViews;
	BOOL _armed;
	BOOL _externallyEnabled;
	UIEvent* _triggeredEvent;

}

@property (assign,nonatomic) BOOL viewDebugArea;                                         //@synthesize viewDebugArea=_viewDebugArea - In the implementation block
@property (assign,nonatomic) BOOL allowMultiTouch;                                       //@synthesize allowMultiTouch=_allowMultiTouch - In the implementation block
@property (assign,nonatomic) unsigned long long maxAllowableVerticalOffset;              //@synthesize maxAllowableVerticalOffset=_maxAllowableVerticalOffset - In the implementation block
@property (assign,nonatomic) double minAllowedTopAngle;                                  //@synthesize minAllowedTopAngle=_minAllowedTopAngle - In the implementation block
@property (assign,nonatomic) double maxAllowedTopAngle;                                  //@synthesize maxAllowedTopAngle=_maxAllowedTopAngle - In the implementation block
@property (assign,nonatomic) double minAllowedBottomAngle;                               //@synthesize minAllowedBottomAngle=_minAllowedBottomAngle - In the implementation block
@property (assign,nonatomic) double maxAllowedBottomAngle;                               //@synthesize maxAllowedBottomAngle=_maxAllowedBottomAngle - In the implementation block
@property (nonatomic,readonly) UIEvent * triggeredEvent;                                 //@synthesize triggeredEvent=_triggeredEvent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(void)reset;
-(BOOL)isEnabled;
-(void)setState:(long long)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(void)_updateEnabled;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)setViewDebugArea:(BOOL)arg1 ;
-(void)setMaxAllowableVerticalOffset:(unsigned long long)arg1 ;
-(BOOL)viewDebugArea;
-(unsigned long long)maxAllowableVerticalOffset;
-(void)_loadFromSettings:(id)arg1 ;
-(double)_effectiveTopAngle;
-(double)_effectiveBottomAngle;
-(void)_setDebugViewsVisible:(BOOL)arg1 ;
-(BOOL)_effectivelyEnabled;
-(void)_setDebugViewsColor:(id)arg1 ;
-(BOOL)allowMultiTouch;
-(id)_touchesFromEvent:(id)arg1 ;
-(BOOL)_recognizeForMultiTouchIfNecessary:(id)arg1 ;
-(CGPoint)_averagePointFromTouches;
-(double)_computeEffectiveAngleFromMin:(double)arg1 max:(double)arg2 ;
-(BOOL)_isLocationOutOfBounds:(CGPoint)arg1 ;
-(void)_setArmed:(BOOL)arg1 ;
-(void)setMaxAllowedTopAngle:(double)arg1 ;
-(void)setMinAllowedTopAngle:(double)arg1 ;
-(void)setMaxAllowedBottomAngle:(double)arg1 ;
-(void)setMinAllowedBottomAngle:(double)arg1 ;
-(CGPoint)_locationOfTouch:(id)arg1 inView:(id)arg2 ;
-(double)_maxAllowableVerticalOffsetForPoint:(CGPoint)arg1 ;
-(BOOL)_isOutOfBoundsVertically:(CGPoint)arg1 ;
-(BOOL)_isOutOfBounds:(CGPoint)arg1 forAngle:(double)arg2 ;
-(long long)_activeTouchCountForEvent:(id)arg1 ;
-(void)setAllowMultiTouch:(BOOL)arg1 ;
-(double)maxAllowedTopAngle;
-(double)minAllowedTopAngle;
-(double)maxAllowedBottomAngle;
-(double)minAllowedBottomAngle;
-(UIEvent *)triggeredEvent;
@end

