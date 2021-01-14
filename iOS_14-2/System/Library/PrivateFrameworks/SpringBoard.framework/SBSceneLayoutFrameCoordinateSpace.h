/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGRect)convertRect:(CGRect)arg1 toCoordinateSpace:(id)arg2 ;
-(CGRect)convertRect:(CGRect)arg1 fromCoordinateSpace:(id)arg2 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 withinCoordinateSpace:(id)arg2 ;
@end

