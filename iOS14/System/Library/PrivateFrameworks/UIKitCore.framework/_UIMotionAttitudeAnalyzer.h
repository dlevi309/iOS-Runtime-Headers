/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithSettings:(id)arg1 ;
-(BOOL)_shouldSuspendApplicationForHysteresisGivenNewViewerOffset:(UIOffset)arg1 wasSuspendingApplicationForHysteresis:(BOOL)arg2 ;
-(void)_updateAcceleratedOutputRangeFixingOffset:(UIOffset)arg1 ;
-(void)_createDirectionLockIndicators;
-(void)_tearDownIdleIndicator;
-(BOOL)applyHysteresisWithReceivedEventTimestamp:(double)arg1 timeSinceLastNewMotionEvent:(double)arg2 slowUpdatesEnabled:(BOOL)arg3 returningShouldToggleSlowUpdates:(BOOL*)arg4 logger:(id)arg5 ;
-(void)_resetDirectionalLockWithViewerOffset:(UIOffset)arg1 ;
-(long long)_directionLockStatus;
-(void)_showIdleUI:(BOOL)arg1 ;
-(void)_updateDirectionalLockIndicators;
-(void)_createIdleIndicator;
-(void)updateWithEvent:(id)arg1 ;
-(void)_tearDownDirectionLockIndicators;
-(float)_referenceShiftRadiansPerSecondForAngle:(float)arg1 ;
-(void)_updateSettings;
-(void)_tearDownDiagnosticsWindow;
-(void)reset;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(_GLKQuaternion)_relativeQuaternion;
-(void)updateHistory;
-(void)resetHysteresis;
-(double)_directionLockStrength;
-(void)_updateReferenceAttitude:(_GLKQuaternion)arg1 timestamp:(double)arg2 ;
-(void)_updateSmoothedOffsetForRawOffset:(UIOffset)arg1 ;
-(void)_shiftReferenceToYieldRelativeQuaternion:(_GLKQuaternion)arg1 ;
-(void)_updateIdleStateForRawOffset:(UIOffset)arg1 timestamp:(double)arg2 ;
-(void)dealloc;
-(UIOffset)_currentRawOffset:(_GLKQuaternion)arg1 ;
-(BOOL)_isIdleGivenTimestamp:(double)arg1 ;
-(void)_createDiagnosticsWindow;
@end

