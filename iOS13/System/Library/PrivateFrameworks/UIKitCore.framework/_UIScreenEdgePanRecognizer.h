/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UIScreenEdgePanRecognizerDelegate;
#import <UIKitCore/UIKitCore-Structs.h>
@class UIDelayedAction, _UIScreenEdgePanRecognizerSettings;

@interface _UIScreenEdgePanRecognizer : NSObject {

	CGRect _screenBounds;
	BOOL _shouldUseGrapeFlags;
	BOOL _hasRecordedData;
	BOOL _hasDoneInitialBackProjectionTest;
	CGPoint _initialTouchLocation;
	double _initialTouchTimestamp;
	long long _initialInterfaceOrientation;
	unsigned long long _touchedRegion;
	UIDelayedAction* _recognitionTimer;
	CGPoint _lastTouchLocation;
	double _lastTouchTimestamp;
	long long _lastTouchModifier;
	long long _type;
	BOOL _requiresFlatThumb;
	BOOL _recognizeAlongEdge;
	_UIScreenEdgePanRecognizerSettings* _settings;
	unsigned long long _targetEdges;
	long long _state;
	unsigned long long _recognizedRegion;
	id<_UIScreenEdgePanRecognizerDelegate> _delegate;

}

@property (nonatomic,retain) _UIScreenEdgePanRecognizerSettings * settings;              //@synthesize settings=_settings - In the implementation block
@property (nonatomic,readonly) BOOL hasRecordedData;                                     //@synthesize hasRecordedData=_hasRecordedData - In the implementation block
@property (nonatomic,readonly) BOOL useGrapeFlags; 
@property (assign,nonatomic) BOOL shouldUseGrapeFlags;                                   //@synthesize shouldUseGrapeFlags=_shouldUseGrapeFlags - In the implementation block
@property (nonatomic,readonly) CGPoint _lastTouchLocation;                               //@synthesize lastTouchLocation=_lastTouchLocation - In the implementation block
@property (assign,nonatomic) CGRect screenBounds;                                        //@synthesize screenBounds=_screenBounds - In the implementation block
@property (assign,nonatomic) unsigned long long targetEdges;                             //@synthesize targetEdges=_targetEdges - In the implementation block
@property (assign,nonatomic) BOOL requiresFlatThumb;                                     //@synthesize requiresFlatThumb=_requiresFlatThumb - In the implementation block
@property (assign,nonatomic) BOOL recognizeAlongEdge;                                    //@synthesize recognizeAlongEdge=_recognizeAlongEdge - In the implementation block
@property (nonatomic,readonly) long long state;                                          //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) unsigned long long recognizedRegion;                      //@synthesize recognizedRegion=_recognizedRegion - In the implementation block
@property (assign) id<_UIScreenEdgePanRecognizerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(long long)_type;
-(id<_UIScreenEdgePanRecognizerDelegate>)delegate;
-(void)setDelegate:(id<_UIScreenEdgePanRecognizerDelegate>)arg1 ;
-(long long)state;
-(void)reset;
-(id)initWithType:(long long)arg1 ;
-(_UIScreenEdgePanRecognizerSettings *)settings;
-(void)setSettings:(_UIScreenEdgePanRecognizerSettings *)arg1 ;
-(void)_setState:(long long)arg1 ;
-(unsigned long long)targetEdges;
-(void)setTargetEdges:(unsigned long long)arg1 ;
-(unsigned long long)_targetEdges;
-(void)setShouldUseGrapeFlags:(BOOL)arg1 ;
-(id)initWithType:(long long)arg1 settings:(id)arg2 ;
-(void)_incorporateIncrementalSampleAtLocation:(CGPoint)arg1 timestamp:(double)arg2 modifier:(long long)arg3 region:(unsigned long long)arg4 interfaceOrientation:(long long)arg5 forceState:(long long)arg6 ;
-(void)_incorporateInitialTouchAtLocation:(CGPoint)arg1 timestamp:(double)arg2 modifier:(long long)arg3 region:(unsigned long long)arg4 interfaceOrientation:(long long)arg5 forceState:(long long)arg6 ;
-(BOOL)useGrapeFlags;
-(CGRect)screenBounds;
-(void)_idleTimerElapsed:(id)arg1 ;
-(unsigned long long)touchedEdgesForInterfaceOrientation:(long long)arg1 ;
-(void)incorporateTouchSampleAtLocation:(CGPoint)arg1 timestamp:(double)arg2 modifier:(long long)arg3 region:(unsigned long long)arg4 interfaceOrientation:(long long)arg5 forceState:(long long)arg6 ;
-(void)_longPressTimerElapsed:(id)arg1 ;
-(void)setScreenBounds:(CGRect)arg1 ;
-(BOOL)shouldUseGrapeFlags;
-(BOOL)hasRecordedData;
-(CGPoint)_lastTouchLocation;
-(BOOL)requiresFlatThumb;
-(void)setRequiresFlatThumb:(BOOL)arg1 ;
-(BOOL)recognizeAlongEdge;
-(void)setRecognizeAlongEdge:(BOOL)arg1 ;
-(unsigned long long)recognizedRegion;
@end

