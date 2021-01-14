/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXTileTransitionAnimationCoordinator.h>

@class PXTilingChange, PXBasicTileAnimationOptions, PXSectionedChangeDetailsRepository, NSArray, NSIndexSet, PXAssetsTilingLayout, NSString;

@interface PXAssetsTileTransitionCoordinator : NSObject <PXTileTransitionAnimationCoordinator> {

	BOOL _treatRemovalsAsDeletes;
	BOOL _delayInsertions;
	BOOL __shouldCrossfade;
	PXTilingChange* __tilingChange;
	PXBasicTileAnimationOptions* __basicAnimationOptions;
	PXSectionedChangeDetailsRepository* __changeHistory;
	NSArray* __changeDetails;
	NSIndexSet* __kindsWithDisabledAnimation;
	NSIndexSet* __kindsCoveringContentTiles;
	NSIndexSet* __kindsCenteredOnContentTiles;
	PXAssetsTilingLayout* __fromLayout;
	PXAssetsTilingLayout* __toLayout;

}

@property (nonatomic,readonly) PXTilingChange * _tilingChange;                                    //@synthesize _tilingChange=__tilingChange - In the implementation block
@property (nonatomic,readonly) PXBasicTileAnimationOptions * _basicAnimationOptions;              //@synthesize _basicAnimationOptions=__basicAnimationOptions - In the implementation block
@property (nonatomic,readonly) BOOL _shouldCrossfade;                                             //@synthesize _shouldCrossfade=__shouldCrossfade - In the implementation block
@property (nonatomic,readonly) PXSectionedChangeDetailsRepository * _changeHistory;               //@synthesize _changeHistory=__changeHistory - In the implementation block
@property (nonatomic,readonly) NSArray * _changeDetails;                                          //@synthesize _changeDetails=__changeDetails - In the implementation block
@property (nonatomic,readonly) NSIndexSet * _kindsWithDisabledAnimation;                          //@synthesize _kindsWithDisabledAnimation=__kindsWithDisabledAnimation - In the implementation block
@property (nonatomic,readonly) NSIndexSet * _kindsCoveringContentTiles;                           //@synthesize _kindsCoveringContentTiles=__kindsCoveringContentTiles - In the implementation block
@property (nonatomic,readonly) NSIndexSet * _kindsCenteredOnContentTiles;                         //@synthesize _kindsCenteredOnContentTiles=__kindsCenteredOnContentTiles - In the implementation block
@property (nonatomic,readonly) PXAssetsTilingLayout * _fromLayout;                                //@synthesize _fromLayout=__fromLayout - In the implementation block
@property (nonatomic,readonly) PXAssetsTilingLayout * _toLayout;                                  //@synthesize _toLayout=__toLayout - In the implementation block
@property (assign,nonatomic) BOOL treatRemovalsAsDeletes;                                         //@synthesize treatRemovalsAsDeletes=_treatRemovalsAsDeletes - In the implementation block
@property (assign,nonatomic) BOOL delayInsertions;                                                //@synthesize delayInsertions=_delayInsertions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)transitionCoordinatorForChange:(id)arg1 changeHistory:(id)arg2 ;
-(PXTilingChange *)_tilingChange;
-(id)optionsForAnimatingTileWithIdentifier:(PXTileIdentifier)arg1 animationType:(long long)arg2 fromGeometry:(PXTileGeometry*)arg3 fromUserData:(id)arg4 toGeometry:(PXTileGeometry*)arg5 toUserData:(id)arg6 ;
-(BOOL)getInitialGeometry:(out PXTileGeometry*)arg1 initialUserData:(out id*)arg2 forAppearingTileWithIdentifier:(PXTileIdentifier)arg3 toGeometry:(PXTileGeometry*)arg4 toUserData:(id)arg5 ;
-(BOOL)treatRemovalsAsDeletes;
-(BOOL)getFinalGeometry:(out PXTileGeometry*)arg1 finalUserData:(out id*)arg2 forDisappearingTileWithIdentifier:(PXTileIdentifier)arg3 fromGeometry:(PXTileGeometry*)arg4 fromUserData:(id)arg5 ;
-(BOOL)useDoubleSidedAnimationForUpdatedTileWithIdentifier:(PXTileIdentifier)arg1 fromGeometry:(PXTileGeometry*)arg2 fromUserData:(id)arg3 toGeometry:(PXTileGeometry*)arg4 toUserData:(id)arg5 ;
-(BOOL)delayInsertions;
-(id)initWithTilingChange:(id)arg1 changeHistory:(id)arg2 ;
-(void)disableAnimationsForTileKind:(unsigned long long)arg1 ;
-(void)enableAnimationsForTileKind:(unsigned long long)arg1 ;
-(void)setTreatRemovalsAsDeletes:(BOOL)arg1 ;
-(void)setDelayInsertions:(BOOL)arg1 ;
-(PXBasicTileAnimationOptions *)_basicAnimationOptions;
-(PXSectionedChangeDetailsRepository *)_changeHistory;
-(NSIndexSet *)_kindsWithDisabledAnimation;
-(PXAssetsTilingLayout *)_toLayout;
-(NSIndexSet *)_kindsCoveringContentTiles;
-(NSIndexSet *)_kindsCenteredOnContentTiles;
-(PXAssetsTilingLayout *)_fromLayout;
-(BOOL)_shouldCrossfade;
-(NSArray *)_changeDetails;
@end

