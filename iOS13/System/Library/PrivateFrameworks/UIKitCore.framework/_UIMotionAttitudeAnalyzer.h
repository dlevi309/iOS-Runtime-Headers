/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIMotionAnalyzer.h>
#import <UIKitCore/_UISettingsKeyObserver.h>

@class UIWindow, UILabel, UIView, NSString;

@interface _UIMotionAttitudeAnalyzer : _UIMotionAnalyzer <_UISettingsKeyObserver> {

	double _smoothingDegree;
	double _referenceShiftSpeed;
	double _distanceMultiplier;
	BOOL _hasReferenceQuaternion;
	GLKQuaternion _referenceQuaternion;
	GLKQuaternion _absoluteQuaternion;
	double _lastUpdate;
	double _idleStartTime;
	UIOffset _idleStartOffset;
	double _jumpThreshold;
	double _idleLeeway;
	double _secondsBeforeIdle;
	double _lockValue;
	double _lockStrength;
	UIWindow* _diagnosticsWindow;
	UILabel* _idleIndicator;
	UIView* _horizontalLockIndicator;
	UIView* _verticalLockIndicator;
	BOOL _hasHistory;
	UIOffset _lastAppliedViewerOffset;
	GLKQuaternion _lastAppliedRelativeQuaternion;
	BOOL _isApplyingHysteresis;
	GLKQuaternion _relativeQuaternionOnHysteresisEntry;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)reset;
-(id)initWithSettings:(id)arg1 ;
-(void)updateWithEvent:(id)arg1 ;
-(BOOL)applyHysteresisWithReceivedEventTimestamp:(double)arg1 timeSinceLastNewMotionEvent:(double)arg2 slowUpdatesEnabled:(BOOL)arg3 returningShouldToggleSlowUpdates:(BOOL*)arg4 logger:(id)arg5 ;
-(void)updateHistory;
-(void)resetHysteresis;
-(void)_updateSettings;
-(void)_tearDownDiagnosticsWindow;
-(void)_tearDownDirectionLockIndicators;
-(void)_tearDownIdleIndicator;
-(UIOffset)_currentRawOffset:(_GLKQuaternion)arg1 ;
-(void)_updateSmoothedOffsetForRawOffset:(UIOffset)arg1 ;
-(void)_updateIdleStateForRawOffset:(UIOffset)arg1 timestamp:(double)arg2 ;
-(void)_updateReferenceAttitude:(_GLKQuaternion)arg1 timestamp:(double)arg2 ;
-(void)_resetDirectionalLockWithViewerOffset:(UIOffset)arg1 ;
-(void)_updateDirectionalLockIndicators;
-(void)_updateAcceleratedOutputRangeFixingOffset:(UIOffset)arg1 ;
-(long long)_directionLockStatus;
-(BOOL)_isIdleGivenTimestamp:(double)arg1 ;
-(float)_referenceShiftRadiansPerSecondForAngle:(float)arg1 ;
-(void)_showIdleUI:(BOOL)arg1 ;
-(BOOL)_shouldSuspendApplicationForHysteresisGivenNewViewerOffset:(UIOffset)arg1 wasSuspendingApplicationForHysteresis:(BOOL)arg2 ;
-(void)_shiftReferenceToYieldRelativeQuaternion:(_GLKQuaternion)arg1 ;
-(_GLKQuaternion)_relativeQuaternion;
-(void)_createIdleIndicator;
-(void)_createDirectionLockIndicators;
-(void)_createDiagnosticsWindow;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(double)_directionLockStrength;
@end

