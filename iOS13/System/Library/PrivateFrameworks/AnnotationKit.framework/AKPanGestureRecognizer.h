/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <UIKitCore/UIPanGestureRecognizer.h>
#import <libobjc.A.dylib/AKPenDetectionGestureRecognizerProtocol.h>

@class NSMutableArray, NSString;

@interface AKPanGestureRecognizer : UIPanGestureRecognizer <AKPenDetectionGestureRecognizerProtocol> {

	BOOL _penGestureDetected;
	double _currentWeight;
	double _currentMaxWeight;
	NSMutableArray* _currentAccumulatedTouches;
	CGPoint _locationOfFirstTouch;

}

@property (assign,nonatomic) CGPoint locationOfFirstTouch;                            //@synthesize locationOfFirstTouch=_locationOfFirstTouch - In the implementation block
@property (assign,nonatomic) BOOL penGestureDetected;                                 //@synthesize penGestureDetected=_penGestureDetected - In the implementation block
@property (nonatomic,retain) NSMutableArray * currentAccumulatedTouches;              //@synthesize currentAccumulatedTouches=_currentAccumulatedTouches - In the implementation block
@property (assign,nonatomic) double currentWeight;                                    //@synthesize currentWeight=_currentWeight - In the implementation block
@property (assign,nonatomic) double currentMaxWeight;                                 //@synthesize currentMaxWeight=_currentMaxWeight - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reset;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(CGPoint)locationOfFirstTouchInView:(id)arg1 ;
-(void)setLocationOfFirstTouch:(CGPoint)arg1 ;
-(CGPoint)locationOfFirstTouch;
-(void)setPenGestureDetected:(BOOL)arg1 ;
-(BOOL)penGestureDetected;
-(void)setCurrentWeight:(double)arg1 ;
-(double)currentWeight;
-(void)setCurrentMaxWeight:(double)arg1 ;
-(void)resetAccumulatedTouches;
-(NSMutableArray *)currentAccumulatedTouches;
-(void)setCurrentAccumulatedTouches:(NSMutableArray *)arg1 ;
-(void)_checkTouchForStylus:(id)arg1 ;
-(id)accumulatedTouches;
-(double)currentMaxWeight;
@end

