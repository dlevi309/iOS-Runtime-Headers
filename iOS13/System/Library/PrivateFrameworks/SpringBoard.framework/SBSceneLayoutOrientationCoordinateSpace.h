/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSceneLayoutCoordinateSpace.h>

@interface SBSceneLayoutOrientationCoordinateSpace : SBSceneLayoutCoordinateSpace {

	long long _referenceOrientation;
	long long _orientation;

}
-(CGRect)bounds;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(CGRect)convertRect:(CGRect)arg1 toCoordinateSpace:(id)arg2 ;
-(CGRect)convertRect:(CGRect)arg1 fromCoordinateSpace:(id)arg2 ;
-(id)initWithInterfaceOrientation:(long long)arg1 withReferenceCoordinateSpace:(id)arg2 inOrientation:(long long)arg3 ;
@end

