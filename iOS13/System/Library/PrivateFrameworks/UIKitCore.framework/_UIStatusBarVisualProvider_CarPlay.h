/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIStatusBarCellularItemTypeStringProvider.h>
#import <UIKitCore/_UIStatusBarVisualProvider.h>

@class _UIStatusBar, NSDictionary, _UIStatusBarRegion, NSString;

@interface _UIStatusBarVisualProvider_CarPlay : NSObject <_UIStatusBarCellularItemTypeStringProvider, _UIStatusBarVisualProvider> {

	_UIStatusBar* _statusBar;
	NSDictionary* _orderedDisplayItemPlacements;
	_UIStatusBarRegion* _timeRegion;
	_UIStatusBarRegion* _radarRegion;

}

@property (nonatomic,retain) NSDictionary * orderedDisplayItemPlacements;              //@synthesize orderedDisplayItemPlacements=_orderedDisplayItemPlacements - In the implementation block
@property (nonatomic,retain) _UIStatusBarRegion * timeRegion;                          //@synthesize timeRegion=_timeRegion - In the implementation block
@property (nonatomic,retain) _UIStatusBarRegion * radarRegion;                         //@synthesize radarRegion=_radarRegion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) _UIStatusBar * statusBar;                          //@synthesize statusBar=_statusBar - In the implementation block
@property (nonatomic,readonly) BOOL supportsIndirectPointerTouchActions; 
@property (nonatomic,readonly) BOOL canFixupDisplayItemAttributes; 
+(CGSize)intrinsicContentSizeForOrientation:(long long)arg1 ;
-(_UIStatusBar *)statusBar;
-(void)setStatusBar:(_UIStatusBar *)arg1 ;
-(id)stringForCellularType:(long long)arg1 condensed:(BOOL)arg2 ;
-(id)condensedFontForCellularType:(long long)arg1 defaultFont:(id)arg2 baselineOffset:(double*)arg3 ;
-(id)setupInContainerView:(id)arg1 ;
-(id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg1 ;
-(id)styleAttributesForStyle:(long long)arg1 ;
-(BOOL)supportsIndirectPointerTouchActions;
-(id)willUpdateWithData:(id)arg1 ;
-(void)itemCreated:(id)arg1 ;
-(id)additionAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2 ;
-(id)removalAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2 ;
-(void)actionable:(id)arg1 highlighted:(BOOL)arg2 initialPress:(BOOL)arg3 ;
-(void)setTimeRegion:(_UIStatusBarRegion *)arg1 ;
-(void)setRadarRegion:(_UIStatusBarRegion *)arg1 ;
-(_UIStatusBarRegion *)timeRegion;
-(_UIStatusBarRegion *)radarRegion;
-(id)_animationForBackgroundActivityPill;
-(id)_animationForQuietMode;
-(NSDictionary *)orderedDisplayItemPlacements;
-(void)setOrderedDisplayItemPlacements:(NSDictionary *)arg1 ;
@end

