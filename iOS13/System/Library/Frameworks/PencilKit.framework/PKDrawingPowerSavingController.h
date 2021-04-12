/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


#import <PencilKit/PencilKit-Structs.h>
@interface PKDrawingPowerSavingController : NSObject {

	vector<double, std::__1::allocator<double> >* _movementDistanceHistoryBuffer;
	CGPoint _previousDrawingLocation;
	double _currentMovement;
	double _accumulatedMovement;
	double _previousRenderTimestamp;
	BOOL _valid;
	double _minimumMovementDistancePencil;
	double _minimumMovementDistanceFinger;
	double _minimumMovementDistanceTimeout;
	BOOL _isDrawingWithPencil;
	BOOL _isDrawingWithMarkerOrEraser;

}

@property (assign,nonatomic) BOOL isDrawingWithPencil;                      //@synthesize isDrawingWithPencil=_isDrawingWithPencil - In the implementation block
@property (assign,nonatomic) BOOL isDrawingWithMarkerOrEraser;              //@synthesize isDrawingWithMarkerOrEraser=_isDrawingWithMarkerOrEraser - In the implementation block
-(id)init;
-(void)invalidate;
-(BOOL)isValid;
-(void)accumulateMovementForCurrentFrame;
-(BOOL)shouldSkipFrameWithFrameStartTimestamp:(double)arg1 framesAfterStart:(unsigned long long)arg2 ;
-(void)registerFrameStartTimestamp:(double)arg1 ;
-(void)setIsDrawingWithPencil:(BOOL)arg1 ;
-(void)setIsDrawingWithMarkerOrEraser:(BOOL)arg1 ;
-(void)drawingBeganAtLocation:(CGPoint)arg1 ;
-(void)drawingMovedToLocation:(CGPoint)arg1 ;
-(BOOL)isDrawingWithPencil;
-(BOOL)isDrawingWithMarkerOrEraser;
-(double)averageMovementDistance;
@end

