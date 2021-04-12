/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSMutableArray;

@interface UIKBHandwritingInputSpeedModel : NSObject {

	NSMutableArray* _recordedIntervals;
	NSMutableArray* _recordedSpeeds;
	double _lastStrokeTimeStamp;
	double _lastTouchTimeStamp;
	CGPoint _lastTouchLocation;
	NSMutableArray* _pointsCurrentStroke;
	BOOL _duringStroke;
	BOOL _autoConfirmationEnabled;
	double _minTimeout;
	double _maxTimeout;
	CGRect _handwritingFrame;

}

@property (nonatomic,readonly) BOOL autoConfirmationEnabled;              //@synthesize autoConfirmationEnabled=_autoConfirmationEnabled - In the implementation block
@property (nonatomic,readonly) double minTimeout;                         //@synthesize minTimeout=_minTimeout - In the implementation block
@property (nonatomic,readonly) double maxTimeout;                         //@synthesize maxTimeout=_maxTimeout - In the implementation block
@property (assign,nonatomic) CGRect handwritingFrame;                     //@synthesize handwritingFrame=_handwritingFrame - In the implementation block
-(id)init;
-(void)endStroke;
-(void)setHandwritingFrame:(CGRect)arg1 ;
-(BOOL)autoConfirmationEnabled;
-(double)timeoutForNextPage;
-(void)endCharacter;
-(void)updatePreferences;
-(void)beginStroke;
-(void)addPoint:(CGPoint)arg1 timestamp:(double)arg2 ;
-(double)maxTimeout;
-(double)smoothValueFromArray:(id)arg1 ;
-(CGRect)handwritingFrame;
-(double)speedForCurrentStroke;
-(double)minTimeout;
@end

