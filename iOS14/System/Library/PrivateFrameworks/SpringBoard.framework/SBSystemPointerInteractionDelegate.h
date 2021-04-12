/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBSystemPointerInteractionDelegate <NSObject>
@optional
-(id)styleForRegion:(id)arg1 forView:(id)arg2;
-(UIEdgeInsets*)pointerInteractionHitTestInsetsForView:(id)arg1;
-(id)regionAtLocation:(CGPoint)arg1 forView:(id)arg2;

@required
-(BOOL)shouldBeginPointerInteractionAtLocation:(CGPoint)arg1 forView:(id)arg2;

@end

