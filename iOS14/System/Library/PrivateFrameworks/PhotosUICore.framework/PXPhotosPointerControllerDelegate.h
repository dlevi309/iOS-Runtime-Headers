/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXPhotosPointerControllerDelegate <NSObject>
@required
-(id)pointerController:(id)arg1 regionOfInterestForCursorAtLocation:(CGPoint)arg2 inCoordinateSpace:(id)arg3;
-(id)pointerController:(id)arg1 identifierForRegionAtLocation:(CGPoint)arg2 inCoordinateSpace:(id)arg3;
-(id)pointerController:(id)arg1 viewForCursorInteractionAtLocation:(CGPoint)arg2 inCoordinateSpace:(id)arg3;
-(long long)pointerController:(id)arg1 interactionOptionsForRegionAtLocation:(CGPoint)arg2 inCoordinateSpace:(id)arg3;
-(void)pointerController:(id)arg1 willEnterRegionWithRect:(CGRect)arg2 inCoordinateSpace:(id)arg3;
-(void)pointerController:(id)arg1 didExitRegionWithRect:(CGRect)arg2 inCoordinateSpace:(id)arg3;

@end

