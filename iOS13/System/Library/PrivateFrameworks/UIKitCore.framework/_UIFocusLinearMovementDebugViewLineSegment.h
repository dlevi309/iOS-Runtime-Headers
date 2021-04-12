/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIBezierPath;

@interface _UIFocusLinearMovementDebugViewLineSegment : NSObject {

	_UIFocusLinearMovementDebugViewLineSegment* _previousSegment;
	UIBezierPath* _stemPath;
	UIBezierPath* _arrowHeadPath;
	CGRect _startRect;
	CGRect _endRect;

}

@property (nonatomic,readonly) CGRect startRect;              //@synthesize startRect=_startRect - In the implementation block
@property (nonatomic,readonly) CGRect endRect;                //@synthesize endRect=_endRect - In the implementation block
@property (nonatomic,readonly) long long type; 
-(long long)type;
-(void)drawInRect:(CGRect)arg1 ;
-(CGRect)startRect;
-(CGRect)endRect;
-(void)_calculatePaths;
-(id)_calculateStemPathFrom:(CGRect)arg1 to:(CGRect)arg2 startPoint:(CGPoint*)arg3 endPoint:(CGPoint*)arg4 ;
-(id)_flattenedBezierPathFromBezierPath:(id)arg1 ;
-(id)_pathElementsFromPath:(id)arg1 ;
-(id)_calculateArrowHeadPath;
-(void)_subdivideBezier:(id)arg1 startPoint:(CGPoint)arg2 controlPoint1:(CGPoint)arg3 controlPoint2:(CGPoint)arg4 endPoint:(CGPoint)arg5 ;
-(id)initWithStartRect:(CGRect)arg1 endRect:(CGRect)arg2 previousSegment:(id)arg3 ;
@end

