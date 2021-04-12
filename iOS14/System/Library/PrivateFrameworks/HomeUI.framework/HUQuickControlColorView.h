/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/HUQuickControlColorPickerViewInteractionDelegate.h>
#import <libobjc.A.dylib/HUQuickControlColorPaletteViewInteractionDelegate.h>
#import <libobjc.A.dylib/HUQuickControlInteractiveView.h>

@protocol HUQuickControlColorViewInteractionDelegate;
@class HUQuickControlColorViewProfile, HFColorPalette, HFColorPaletteColor, NSIndexPath, HUColorLinearPaletteView, HUColorPickerView, UISegmentedControl, NSString;

@interface HUQuickControlColorView : UIView <HUQuickControlColorPickerViewInteractionDelegate, HUQuickControlColorPaletteViewInteractionDelegate, HUQuickControlInteractiveView> {

	BOOL _showPickerModeControl;
	BOOL _userInteractionActive;
	HUQuickControlColorViewProfile* _profile;
	unsigned long long _reachabilityState;
	id<HUQuickControlColorViewInteractionDelegate> _interactionDelegate;
	HFColorPalette* _colorPalette;
	HFColorPaletteColor* _selectedColor;
	id _originalValue;
	HFColorPalette* _originalPalette;
	NSIndexPath* _originalSelectedColorIndexPath;
	HUColorLinearPaletteView* _colorLinearPaletteView;
	HUColorPickerView* _colorPickerView;
	UISegmentedControl* _colorPickerModeSegmentedControl;

}

@property (nonatomic,retain) HFColorPalette * colorPalette;                                                          //@synthesize colorPalette=_colorPalette - In the implementation block
@property (nonatomic,retain) HFColorPaletteColor * selectedColor;                                                    //@synthesize selectedColor=_selectedColor - In the implementation block
@property (nonatomic,retain) id originalValue;                                                                       //@synthesize originalValue=_originalValue - In the implementation block
@property (nonatomic,retain) HFColorPalette * originalPalette;                                                       //@synthesize originalPalette=_originalPalette - In the implementation block
@property (nonatomic,retain) NSIndexPath * originalSelectedColorIndexPath;                                           //@synthesize originalSelectedColorIndexPath=_originalSelectedColorIndexPath - In the implementation block
@property (assign,nonatomic) BOOL showPickerModeControl;                                                             //@synthesize showPickerModeControl=_showPickerModeControl - In the implementation block
@property (nonatomic,retain) HUColorLinearPaletteView * colorLinearPaletteView;                                      //@synthesize colorLinearPaletteView=_colorLinearPaletteView - In the implementation block
@property (nonatomic,retain) HUColorPickerView * colorPickerView;                                                    //@synthesize colorPickerView=_colorPickerView - In the implementation block
@property (nonatomic,readonly) UIView*<HUQuickControlInteractiveView> activeView; 
@property (nonatomic,retain) UISegmentedControl * colorPickerModeSegmentedControl;                                   //@synthesize colorPickerModeSegmentedControl=_colorPickerModeSegmentedControl - In the implementation block
@property (assign,getter=isUserInteractionActive,nonatomic) BOOL userInteractionActive;                              //@synthesize userInteractionActive=_userInteractionActive - In the implementation block
@property (assign,nonatomic,__weak) id<HUQuickControlColorViewInteractionDelegate> interactionDelegate;              //@synthesize interactionDelegate=_interactionDelegate - In the implementation block
@property (nonatomic,readonly) unsigned long long mode; 
@property (getter=isSelectedColorInPalette,nonatomic,readonly) BOOL selectedColorInPalette; 
@property (nonatomic,copy) HUQuickControlColorViewProfile * profile;                                                 //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) NSIndexPath * linearPaletteViewSelectedColorIndexPath; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id value; 
@property (nonatomic,retain) id secondaryValue; 
@property (assign,nonatomic) unsigned long long reachabilityState;                                                   //@synthesize reachabilityState=_reachabilityState - In the implementation block
-(void)setProfile:(HUQuickControlColorViewProfile *)arg1 ;
-(void)_updateLayout;
-(unsigned long long)mode;
-(void)setInteractionDelegate:(id<HUQuickControlColorViewInteractionDelegate>)arg1 ;
-(id<HUQuickControlColorViewInteractionDelegate>)interactionDelegate;
-(id)initWithProfile:(id)arg1 ;
-(id)originalValue;
-(void)setOriginalValue:(id)arg1 ;
-(void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1 ;
-(id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1 ;
-(void)setValue:(id)arg1 ;
-(void)setColorPalette:(HFColorPalette *)arg1 ;
-(HFColorPalette *)colorPalette;
-(void)layoutSubviews;
-(HFColorPaletteColor *)selectedColor;
-(HUQuickControlColorViewProfile *)profile;
-(void)setSelectedColor:(HFColorPaletteColor *)arg1 ;
-(UIView*<HUQuickControlInteractiveView>)activeView;
-(id)value;
-(id)initWithProfile:(id)arg1 colorPalette:(id)arg2 ;
-(BOOL)isSelectedColorInPalette;
-(void)storeCurrentColorInformationAsOriginalValues;
-(NSIndexPath *)linearPaletteViewSelectedColorIndexPath;
-(void)updateSelectedColorIndexPathToIndexPath:(id)arg1 ;
-(BOOL)isUserInteractionActive;
-(void)controlView:(id)arg1 interactionStateDidChange:(BOOL)arg2 forFirstTouch:(BOOL)arg3 ;
-(void)controlView:(id)arg1 valueDidChange:(id)arg2 ;
-(void)presentFullColorViewForControlView:(id)arg1 selectedColorIndexPath:(id)arg2 ;
-(void)controlView:(id)arg1 didSelectColorAtIndexPath:(id)arg2 ;
-(void)controlView:(id)arg1 colorPaletteDidChange:(id)arg2 ;
-(void)setUserInteractionActive:(BOOL)arg1 ;
-(unsigned long long)reachabilityState;
-(void)_updateUIForReachabilityState:(unsigned long long)arg1 ;
-(void)setReachabilityState:(unsigned long long)arg1 ;
-(HUColorLinearPaletteView *)colorLinearPaletteView;
-(void)setOriginalPalette:(HFColorPalette *)arg1 ;
-(void)_updateColorPicker;
-(void)_updateVisibleViews;
-(UISegmentedControl *)colorPickerModeSegmentedControl;
-(HUColorPickerView *)colorPickerView;
-(void)setOriginalSelectedColorIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)originalSelectedColorIndexPath;
-(HFColorPalette *)originalPalette;
-(void)controlView:(id)arg1 colorPickerModeDidChange:(unsigned long long)arg2 ;
-(void)cancelColorPicking;
-(BOOL)showPickerModeControl;
-(void)setShowPickerModeControl:(BOOL)arg1 ;
-(void)setColorLinearPaletteView:(HUColorLinearPaletteView *)arg1 ;
-(void)setColorPickerView:(HUColorPickerView *)arg1 ;
-(void)setColorPickerModeSegmentedControl:(UISegmentedControl *)arg1 ;
@end

