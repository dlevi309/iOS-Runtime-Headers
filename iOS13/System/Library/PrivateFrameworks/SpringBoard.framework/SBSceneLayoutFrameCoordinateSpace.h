/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSceneLayoutCoordinateSpace.h>

@class CALayer;

@interface SBSceneLayoutFrameCoordinateSpace : SBSceneLayoutCoordinateSpace {

	CALayer* _containerLayer;
	CALayer* _contentLayer;

}
-(CGRect)bounds;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(CGRect)convertRect:(CGRect)arg1 toCoordinateSpace:(id)arg2 ;
-(CGRect)convertRect:(CGRect)arg1 fromCoordinateSpace:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 withinCoordinateSpace:(id)arg2 ;
@end

