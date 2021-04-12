/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class _UIStatusBar;


@protocol _UIStatusBarVisualProvider <NSObject>
@property (assign,nonatomic,__weak) _UIStatusBar * statusBar; 
@property (nonatomic,readonly) BOOL supportsIndirectPointerTouchActions; 
@property (nonatomic,readonly) BOOL canFixupDisplayItemAttributes; 
@optional
+(CGSize*)intrinsicLockScreenContentSizeForOrientation:(long long)arg1;
-(void)itemCreated:(id)arg1;
-(void)dataUpdated:(id)arg1;
-(id)regionIdentifiersForPartWithIdentifier:(id)arg1;
-(void)modeUpdatedFromMode:(long long)arg1;
-(void)styleUpdatedFromStyle:(long long)arg1;
-(void)sizeUpdatedFromSize:(CGSize)arg1;
-(void)avoidanceFrameUpdatedFromFrame:(CGRect)arg1;
-(id)willUpdateWithData:(id)arg1;
-(void)statusBarRegionsUpdated;
-(id)region:(id)arg1 willSetDisplayItems:(id)arg2;
-(void)statusBarEnabledPartsUpdated;
-(id)displayItemIdentifiersForPartWithIdentifier:(id)arg1;
-(BOOL)showSensorActivityIndicatorWithoutPortalView;
-(BOOL)canFixupDisplayItemAttributes;
-(void)orientationUpdatedFromOrientation:(long long)arg1;
-(id)overriddenStyleAttributesForDisplayItemWithIdentifier:(id)arg1;
-(id)removalAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;
-(id)additionAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;
-(void)actionable:(id)arg1 highlighted:(BOOL)arg2 initialPress:(BOOL)arg3;

@required
+(CGSize*)intrinsicContentSizeForOrientation:(long long)arg1;
-(void)setStatusBar:(id)arg1;
-(_UIStatusBar *)statusBar;
-(id)styleAttributesForStyle:(long long)arg1;
-(BOOL)supportsIndirectPointerTouchActions;
-(id)setupInContainerView:(id)arg1;
-(id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg1;

@end

