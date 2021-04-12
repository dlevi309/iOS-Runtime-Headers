/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class _UIVectorTextLayoutParameters;

@interface _UIVectorTextLayoutInfo : NSObject {

	_UIVectorTextLayoutParameters* _parameters;
	CTFrameRef _frame;
	CGAffineTransform _coordinateAdjustment;

}

@property (nonatomic,retain) _UIVectorTextLayoutParameters * parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (assign,nonatomic) CGAffineTransform coordinateAdjustment;                  //@synthesize coordinateAdjustment=_coordinateAdjustment - In the implementation block
@property (assign,nonatomic) CTFrameRef frame;                                        //@synthesize frame=_frame - In the implementation block
-(void)dealloc;
-(double)scale;
-(_UIVectorTextLayoutParameters *)parameters;
-(CTFrameRef)frame;
-(void)setParameters:(_UIVectorTextLayoutParameters *)arg1 ;
-(void)setFrame:(CTFrameRef)arg1 ;
-(CGAffineTransform)coordinateAdjustment;
-(void)setCoordinateAdjustment:(CGAffineTransform)arg1 ;
@end

