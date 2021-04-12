/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/


@protocol CHStrokeIdentifier;
#import <CoreHandwriting/CoreHandwriting-Structs.h>
@interface CHSubstroke : NSObject {

	vector<CGPoint, std::__1::allocator<CGPoint> >* _convexHull;
	id<CHStrokeIdentifier> _strokeIdentifier;
	double _startTimestamp;
	double _endTimestamp;
	double _curvature;
	CGRect _bounds;

}

@property (nonatomic,retain,readonly) id<CHStrokeIdentifier> strokeIdentifier;              //@synthesize strokeIdentifier=_strokeIdentifier - In the implementation block
@property (nonatomic,readonly) CGRect bounds;                                               //@synthesize bounds=_bounds - In the implementation block
@property (nonatomic,readonly) double startTimestamp;                                       //@synthesize startTimestamp=_startTimestamp - In the implementation block
@property (nonatomic,readonly) double endTimestamp;                                         //@synthesize endTimestamp=_endTimestamp - In the implementation block
@property (nonatomic,readonly) vector<CGPoint* convexHull; 
@property (nonatomic,readonly) double curvature;                                            //@synthesize curvature=_curvature - In the implementation block
+(id)substrokesForStroke:(id)arg1 ;
-(void)dealloc;
-(CGRect)bounds;
-(double)startTimestamp;
-(double)endTimestamp;
-(vector<CGPoint*)convexHull;
-(id<CHStrokeIdentifier>)strokeIdentifier;
-(id)initWithStrokeIdentifier:(id)arg1 bounds:(CGRect)arg2 startTimestamp:(double)arg3 endTimestamp:(double)arg4 convexHull:(const vector<CGPoint, std::__1::allocator<CGPoint> >*)arg5 curvature:(double)arg6 ;
-(double)curvature;
@end

