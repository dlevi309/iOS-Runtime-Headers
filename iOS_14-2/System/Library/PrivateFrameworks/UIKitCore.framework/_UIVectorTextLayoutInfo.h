/*
* Generated on Thursday, January 14, 2021 at 2:20:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(_UIVectorTextLayoutParameters *)parameters;
-(void)setParameters:(_UIVectorTextLayoutParameters *)arg1 ;
-(double)scale;
-(CTFrameRef)frame;
-(void)setFrame:(CTFrameRef)arg1 ;
-(CGAffineTransform)coordinateAdjustment;
-(void)setCoordinateAdjustment:(CGAffineTransform)arg1 ;
-(void)dealloc;
@end

