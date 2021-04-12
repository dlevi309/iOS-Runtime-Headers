/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIStatusBarItem.h>

@class _UIBatteryView, _UIStaticBatteryView, _UIStatusBarImageView, _UIStatusBarStringView;

@interface _UIStatusBarBatteryItem : _UIStatusBarItem {

	BOOL _highlighted;
	_UIBatteryView* _batteryView;
	_UIStaticBatteryView* _staticBatteryView;
	_UIStatusBarImageView* _chargingView;
	_UIStatusBarStringView* _percentView;

}

@property (nonatomic,retain) _UIBatteryView * batteryView;                          //@synthesize batteryView=_batteryView - In the implementation block
@property (nonatomic,retain) _UIStaticBatteryView * staticBatteryView;              //@synthesize staticBatteryView=_staticBatteryView - In the implementation block
@property (nonatomic,retain) _UIStatusBarImageView * chargingView;                  //@synthesize chargingView=_chargingView - In the implementation block
@property (nonatomic,retain) _UIStatusBarStringView * percentView;                  //@synthesize percentView=_percentView - In the implementation block
@property (assign,nonatomic) BOOL highlighted;                                      //@synthesize highlighted=_highlighted - In the implementation block
+(id)iconDisplayIdentifier;
+(id)staticIconDisplayIdentifier;
+(id)chargingDisplayIdentifier;
+(id)percentDisplayIdentifier;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)highlighted;
-(id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2 ;
-(id)viewForIdentifier:(id)arg1 ;
-(id)dependentEntryKeys;
-(_UIBatteryView *)batteryView;
-(_UIStaticBatteryView *)staticBatteryView;
-(_UIStatusBarImageView *)chargingView;
-(_UIStatusBarStringView *)percentView;
-(void)_create_batteryView;
-(void)_create_staticBatteryView;
-(void)_create_chargingView;
-(void)_create_percentView;
-(void)setBatteryView:(_UIBatteryView *)arg1 ;
-(void)setStaticBatteryView:(_UIStaticBatteryView *)arg1 ;
-(void)setChargingView:(_UIStatusBarImageView *)arg1 ;
-(void)setPercentView:(_UIStatusBarStringView *)arg1 ;
@end

