/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, _UIValuePredictor;

@interface _UITouchPredictor : NSObject <NSCopying> {

	NSMutableArray* _predictions;
	BOOL _predictionsValid;
	_UIValuePredictor* _xValuePredictor;
	_UIValuePredictor* _yValuePredictor;
	_UIValuePredictor* _angleValuePredictor;
	_UIValuePredictor* _azimuthValuePredictor;
	_UIValuePredictor* _forceValuePredictor;
	double _averageTouchInterval;
	double _lastTouchTimestamp;
	double _numPredictionsBuffer[5];
	long long _numPredictionsBufferCount;

}
-(id)init;
-(id)description;
-(void)addTouch:(id)arg1 ;
-(id)predictedTouchesForTouch:(id)arg1 ;
-(id)_xValuePredictor;
-(id)_yValuePredictor;
-(id)_angleValuePredictor;
-(id)_azimuthValuePredictor;
-(id)_forceValuePredictor;
-(id)initWithTouchPredictor:(id)arg1 ;
-(void)_updatePredictionsForTouch:(id)arg1 weight:(double)arg2 ;
-(unsigned long long)_dampenedNumPredictionsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)_numPredictionsAtIndex:(unsigned long long)arg1 hardLimit:(unsigned long long*)arg2 ;
-(id)_predictedTouchesAtIndex:(unsigned long long)arg1 forTouch:(id)arg2 ;
-(id)descriptionFromIndex:(int)arg1 toIndex:(int)arg2 includeHeader:(BOOL)arg3 includeDetailedConfidence:(BOOL)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

