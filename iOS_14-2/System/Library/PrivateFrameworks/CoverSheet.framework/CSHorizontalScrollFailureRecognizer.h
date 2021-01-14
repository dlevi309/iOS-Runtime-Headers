/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(BOOL)allowMultiTouch;
-(void)_setDebugViewsColor:(id)arg1 ;
-(double)_effectiveTopAngle;
-(void)setMinAllowedBottomAngle:(double)arg1 ;
-(BOOL)_isOutOfBounds:(CGPoint)arg1 forAngle:(double)arg2 ;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(UIEvent *)triggeredEvent;
-(void)setEnabled:(BOOL)arg1 ;
-(void)_loadFromSettings:(id)arg1 ;
-(void)setViewDebugArea:(BOOL)arg1 ;
-(double)maxAllowedTopAngle;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(double)minAllowedTopAngle;
-(CGPoint)_locationOfTouch:(id)arg1 inView:(id)arg2 ;
-(double)_computeEffectiveAngleFromMin:(double)arg1 max:(double)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(double)maxAllowedBottomAngle;
-(void)setMaxAllowableVerticalOffset:(unsigned long long)arg1 ;
-(void)setMaxAllowedBottomAngle:(double)arg1 ;
-(CGPoint)_averagePointFromTouches;
-(long long)_activeTouchCountForEvent:(id)arg1 ;
-(id)_touchesFromEvent:(id)arg1 ;
-(double)minAllowedBottomAngle;
-(void)setAllowMultiTouch:(BOOL)arg1 ;
-(void)setMinAllowedTopAngle:(double)arg1 ;
-(void)setState:(long long)arg1 ;
-(void)reset;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(BOOL)_isLocationOutOfBounds:(CGPoint)arg1 ;
-(double)_maxAllowableVerticalOffsetForPoint:(CGPoint)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)isEnabled;
-(BOOL)_effectivelyEnabled;
-(BOOL)viewDebugArea;
-(unsigned long long)maxAllowableVerticalOffset;
-(BOOL)_isOutOfBoundsVertically:(CGPoint)arg1 ;
-(void)_setDebugViewsVisible:(BOOL)arg1 ;
-(BOOL)_recognizeForMultiTouchIfNecessary:(id)arg1 ;
-(void)_setArmed:(BOOL)arg1 ;
-(void)_updateEnabled;
-(double)_effectiveBottomAngle;
-(void)dealloc;
-(void)setMaxAllowedTopAngle:(double)arg1 ;
@end

