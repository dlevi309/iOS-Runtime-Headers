/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXTileTransitionAnimationCoordinator.h>

@protocol NSObject;
@class NSString;

@interface PXTileTransitionSimpleAnimationCoordinator : NSObject <PXTileTransitionAnimationCoordinator> {

	id<NSObject> _animationOptions;

}

@property (nonatomic,readonly) id<NSObject> animationOptions;              //@synthesize animationOptions=_animationOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)optionsForAnimatingTileWithIdentifier:(PXTileIdentifier)arg1 animationType:(long long)arg2 fromGeometry:(PXTileGeometry*)arg3 fromUserData:(id)arg4 toGeometry:(PXTileGeometry*)arg5 toUserData:(id)arg6 ;
-(BOOL)getInitialGeometry:(out PXTileGeometry*)arg1 initialUserData:(out id*)arg2 forAppearingTileWithIdentifier:(PXTileIdentifier)arg3 toGeometry:(PXTileGeometry*)arg4 toUserData:(id)arg5 ;
-(BOOL)getFinalGeometry:(out PXTileGeometry*)arg1 finalUserData:(out id*)arg2 forDisappearingTileWithIdentifier:(PXTileIdentifier)arg3 fromGeometry:(PXTileGeometry*)arg4 fromUserData:(id)arg5 ;
-(BOOL)useDoubleSidedAnimationForUpdatedTileWithIdentifier:(PXTileIdentifier)arg1 fromGeometry:(PXTileGeometry*)arg2 fromUserData:(id)arg3 toGeometry:(PXTileGeometry*)arg4 toUserData:(id)arg5 ;
-(id<NSObject>)animationOptions;
-(id)initWithAnimationOptions:(id)arg1 ;
@end

