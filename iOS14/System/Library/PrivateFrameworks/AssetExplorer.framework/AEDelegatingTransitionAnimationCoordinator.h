/*
* Generated on Thursday, January 14, 2021 at 2:25:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
*/

#import <AssetExplorer/AssetExplorer-Structs.h>
#import <libobjc.A.dylib/PXTileTransitionAnimationCoordinator.h>

@protocol PXTileTransitionAnimationCoordinator;
@class NSString;

@interface AEDelegatingTransitionAnimationCoordinator : NSObject <PXTileTransitionAnimationCoordinator> {

	BOOL _enableDoubleSidedAnimations;
	id<PXTileTransitionAnimationCoordinator> __wrappedCoordinator;

}

@property (nonatomic,readonly) id<PXTileTransitionAnimationCoordinator> _wrappedCoordinator;              //@synthesize _wrappedCoordinator=__wrappedCoordinator - In the implementation block
@property (assign,nonatomic) BOOL enableDoubleSidedAnimations;                                            //@synthesize enableDoubleSidedAnimations=_enableDoubleSidedAnimations - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)optionsForAnimatingTileWithIdentifier:(PXTileIdentifier)arg1 animationType:(long long)arg2 fromGeometry:(PXTileGeometry*)arg3 fromUserData:(id)arg4 toGeometry:(PXTileGeometry*)arg5 toUserData:(id)arg6 ;
-(BOOL)getInitialGeometry:(out PXTileGeometry*)arg1 initialUserData:(out id*)arg2 forAppearingTileWithIdentifier:(PXTileIdentifier)arg3 toGeometry:(PXTileGeometry*)arg4 toUserData:(id)arg5 ;
-(BOOL)getFinalGeometry:(out PXTileGeometry*)arg1 finalUserData:(out id*)arg2 forDisappearingTileWithIdentifier:(PXTileIdentifier)arg3 fromGeometry:(PXTileGeometry*)arg4 fromUserData:(id)arg5 ;
-(BOOL)useDoubleSidedAnimationForUpdatedTileWithIdentifier:(PXTileIdentifier)arg1 fromGeometry:(PXTileGeometry*)arg2 fromUserData:(id)arg3 toGeometry:(PXTileGeometry*)arg4 toUserData:(id)arg5 ;
-(id)initWithWrappedCoordinator:(id)arg1 ;
-(BOOL)enableDoubleSidedAnimations;
-(void)setEnableDoubleSidedAnimations:(BOOL)arg1 ;
-(id<PXTileTransitionAnimationCoordinator>)_wrappedCoordinator;
@end

