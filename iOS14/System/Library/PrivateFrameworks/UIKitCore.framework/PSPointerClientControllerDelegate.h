/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol PSPointerClientControllerDelegate <NSObject>
@optional
-(void)pointerClientControllerWillDecelerate:(id)arg1 targetPointerPosition:(inout CGPoint*)arg2 velocity:(CGPoint)arg3 inContextID:(unsigned)arg4 cursorRegionLookupRadius:(double)arg5 cursorRegionLookupResolution:(double)arg6 lookupConeAngle:(double)arg7;
-(void)pointerClientControllerWillDecelerate:(id)arg1 targetPointerPosition:(CGPoint)arg2 velocity:(CGPoint)arg3 inContextID:(unsigned)arg4 cursorRegionLookupRadius:(double)arg5 cursorRegionLookupResolution:(double)arg6 lookupConeAngle:(double)arg7 resultHandler:(/*^block*/id)arg8;
-(void)pointerClientControllerDidInvalidateRemoteSources:(id)arg1;
-(void)pointerClientControllerClientInteractionStateDidChange:(id)arg1;
-(void)pointerClientControllerClientInteractionEnabledDidChange:(id)arg1;

@end

