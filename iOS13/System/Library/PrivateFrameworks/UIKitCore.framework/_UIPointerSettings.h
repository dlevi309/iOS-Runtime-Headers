/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <PrototypeTools/PTSettings.h>

@class _UIPointerEffectSizeRuleSettings, _UIFreeformPointerSettings, _UIBeamPointerSettings, _UILinkPointerSettings, _UIPointerHighlightEffectSettings, _UIPointerLiftEffectSettings, _UIPointerHoverEffectSettings, _UIPointerSBAppIconEffectSettings, _UIPointerTextBehaviorSettings, _UINavigationAndToolbarBehaviorSettings, _UITabBarBehaviorSettings, _UISearchBarBehaviorSettings;

@interface _UIPointerSettings : PTSettings {

	BOOL _showRegions;
	BOOL _showEffectPlatter;
	_UIPointerEffectSizeRuleSettings* _sizeRuleSettings;
	_UIFreeformPointerSettings* _freeformPointerSettings;
	_UIBeamPointerSettings* _beamSettings;
	_UILinkPointerSettings* _linkPointerSettings;
	_UIPointerHighlightEffectSettings* _highlightEffectSettings;
	_UIPointerLiftEffectSettings* _liftEffectSettings;
	_UIPointerHoverEffectSettings* _hoverEffectSettings;
	_UIPointerSBAppIconEffectSettings* _SBAppIconEffectSettings;
	_UIPointerTextBehaviorSettings* _textSettings;
	_UINavigationAndToolbarBehaviorSettings* _navigationAndToolbarSettings;
	_UITabBarBehaviorSettings* _tabBarSettings;
	_UISearchBarBehaviorSettings* _searchBarSettings;

}

@property (assign,nonatomic) BOOL showRegions;                                                                                       //@synthesize showRegions=_showRegions - In the implementation block
@property (assign,nonatomic) BOOL showEffectPlatter;                                                                                 //@synthesize showEffectPlatter=_showEffectPlatter - In the implementation block
@property (nonatomic,retain) _UIPointerEffectSizeRuleSettings * sizeRuleSettings;                                                    //@synthesize sizeRuleSettings=_sizeRuleSettings - In the implementation block
@property (nonatomic,retain) _UIFreeformPointerSettings * freeformPointerSettings;                                                   //@synthesize freeformPointerSettings=_freeformPointerSettings - In the implementation block
@property (nonatomic,retain) _UIBeamPointerSettings * beamSettings;                                                                  //@synthesize beamSettings=_beamSettings - In the implementation block
@property (nonatomic,retain) _UILinkPointerSettings * linkPointerSettings;                                                           //@synthesize linkPointerSettings=_linkPointerSettings - In the implementation block
@property (nonatomic,retain) _UIPointerHighlightEffectSettings * highlightEffectSettings;                                            //@synthesize highlightEffectSettings=_highlightEffectSettings - In the implementation block
@property (nonatomic,retain) _UIPointerLiftEffectSettings * liftEffectSettings;                                                      //@synthesize liftEffectSettings=_liftEffectSettings - In the implementation block
@property (nonatomic,retain) _UIPointerHoverEffectSettings * hoverEffectSettings;                                                    //@synthesize hoverEffectSettings=_hoverEffectSettings - In the implementation block
@property (setter=BAppIconEffectSettings,nonatomic,retain) _UIPointerSBAppIconEffectSettings * SBAppIconEffectSettings;              //@synthesize SBAppIconEffectSettings=_SBAppIconEffectSettings - In the implementation block
@property (nonatomic,retain) _UIPointerTextBehaviorSettings * textSettings;                                                          //@synthesize textSettings=_textSettings - In the implementation block
@property (nonatomic,retain) _UINavigationAndToolbarBehaviorSettings * navigationAndToolbarSettings;                                 //@synthesize navigationAndToolbarSettings=_navigationAndToolbarSettings - In the implementation block
@property (nonatomic,retain) _UITabBarBehaviorSettings * tabBarSettings;                                                             //@synthesize tabBarSettings=_tabBarSettings - In the implementation block
@property (nonatomic,retain) _UISearchBarBehaviorSettings * searchBarSettings;                                                       //@synthesize searchBarSettings=_searchBarSettings - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(_UINavigationAndToolbarBehaviorSettings *)navigationAndToolbarSettings;
-(_UISearchBarBehaviorSettings *)searchBarSettings;
-(_UITabBarBehaviorSettings *)tabBarSettings;
-(_UIPointerHighlightEffectSettings *)highlightEffectSettings;
-(_UIPointerLiftEffectSettings *)liftEffectSettings;
-(_UIPointerHoverEffectSettings *)hoverEffectSettings;
-(_UIPointerSBAppIconEffectSettings *)SBAppIconEffectSettings;
-(_UIFreeformPointerSettings *)freeformPointerSettings;
-(_UIBeamPointerSettings *)beamSettings;
-(_UIPointerEffectSizeRuleSettings *)sizeRuleSettings;
-(void)setShowRegions:(BOOL)arg1 ;
-(void)setShowEffectPlatter:(BOOL)arg1 ;
-(BOOL)showRegions;
-(BOOL)showEffectPlatter;
-(void)setSizeRuleSettings:(_UIPointerEffectSizeRuleSettings *)arg1 ;
-(void)setFreeformPointerSettings:(_UIFreeformPointerSettings *)arg1 ;
-(void)setBeamSettings:(_UIBeamPointerSettings *)arg1 ;
-(_UILinkPointerSettings *)linkPointerSettings;
-(void)setLinkPointerSettings:(_UILinkPointerSettings *)arg1 ;
-(void)setHighlightEffectSettings:(_UIPointerHighlightEffectSettings *)arg1 ;
-(void)setLiftEffectSettings:(_UIPointerLiftEffectSettings *)arg1 ;
-(void)setHoverEffectSettings:(_UIPointerHoverEffectSettings *)arg1 ;
-(void)setSBAppIconEffectSettings:(_UIPointerSBAppIconEffectSettings *)arg1 ;
-(_UIPointerTextBehaviorSettings *)textSettings;
-(void)setTextSettings:(_UIPointerTextBehaviorSettings *)arg1 ;
-(void)setNavigationAndToolbarSettings:(_UINavigationAndToolbarBehaviorSettings *)arg1 ;
-(void)setTabBarSettings:(_UITabBarBehaviorSettings *)arg1 ;
-(void)setSearchBarSettings:(_UISearchBarBehaviorSettings *)arg1 ;
@end

