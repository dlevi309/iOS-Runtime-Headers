/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIStatusBarCellularItemTypeStringProvider.h>
#import <UIKitCore/_UIStatusBarVisualProvider.h>

@class _UIStatusBar, _UIStatusBarRegion, NSString;

@interface _UIStatusBarVisualProvider_CarPlay : NSObject <_UIStatusBarCellularItemTypeStringProvider, _UIStatusBarVisualProvider> {

	BOOL _showingSensorActivityIndicator;
	BOOL _showingPill;
	_UIStatusBar* _statusBar;
	_UIStatusBarRegion* _timeRegion;
	_UIStatusBarRegion* _radarRegion;

}

@property (nonatomic,retain) _UIStatusBarRegion * timeRegion;                         //@synthesize timeRegion=_timeRegion - In the implementation block
@property (nonatomic,retain) _UIStatusBarRegion * radarRegion;                        //@synthesize radarRegion=_radarRegion - In the implementation block
@property (assign,nonatomic) BOOL showingSensorActivityIndicator;                     //@synthesize showingSensorActivityIndicator=_showingSensorActivityIndicator - In the implementation block
@property (assign,nonatomic) BOOL showingPill;                                        //@synthesize showingPill=_showingPill - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) _UIStatusBar * statusBar;                         //@synthesize statusBar=_statusBar - In the implementation block
@property (nonatomic,readonly) BOOL supportsIndirectPointerTouchActions; 
@property (nonatomic,readonly) BOOL canFixupDisplayItemAttributes; 
+(CGSize)intrinsicContentSizeForOrientation:(long long)arg1 ;
+(Class)visualProviderSubclassForScreen:(id)arg1 visualProviderInfo:(id)arg2 ;
-(void)setStatusBar:(_UIStatusBar *)arg1 ;
-(void)itemCreated:(id)arg1 ;
-(_UIStatusBar *)statusBar;
-(void)setTimeRegion:(_UIStatusBarRegion *)arg1 ;
-(id)styleAttributesForStyle:(long long)arg1 ;
-(id)condensedFontForCellularType:(long long)arg1 defaultFont:(id)arg2 baselineOffset:(double*)arg3 ;
-(void)setRadarRegion:(_UIStatusBarRegion *)arg1 ;
-(BOOL)supportsIndirectPointerTouchActions;
-(id)willUpdateWithData:(id)arg1 ;
-(void)setShowingPill:(BOOL)arg1 ;
-(id)_animationForQuietMode;
-(BOOL)showSensorActivityIndicatorWithoutPortalView;
-(id)_animationForPillTime;
-(void)setShowingSensorActivityIndicator:(BOOL)arg1 ;
-(id)_animationForBackgroundActivityPill;
-(id)_animationForSensorIndicator;
-(BOOL)showingSensorActivityIndicator;
-(id)overriddenStyleAttributesForDisplayItemWithIdentifier:(id)arg1 ;
-(id)setupInContainerView:(id)arg1 ;
-(id)stringForCellularType:(long long)arg1 condensed:(BOOL)arg2 ;
-(id)removalAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2 ;
-(id)additionAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2 ;
-(id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg1 ;
-(_UIStatusBarRegion *)timeRegion;
-(void)actionable:(id)arg1 highlighted:(BOOL)arg2 initialPress:(BOOL)arg3 ;
-(_UIStatusBarRegion *)radarRegion;
-(BOOL)showingPill;
@end

