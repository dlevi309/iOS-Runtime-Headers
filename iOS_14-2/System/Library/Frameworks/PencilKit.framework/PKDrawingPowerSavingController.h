/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isValid;
-(void)invalidate;
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

