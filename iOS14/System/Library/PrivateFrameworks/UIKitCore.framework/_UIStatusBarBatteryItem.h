/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)percentDisplayIdentifier;
+(id)staticIconDisplayIdentifier;
+(id)iconDisplayIdentifier;
+(id)chargingDisplayIdentifier;
-(id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2 ;
-(id)dependentEntryKeys;
-(void)_create_percentView;
-(BOOL)highlighted;
-(void)setStaticBatteryView:(_UIStaticBatteryView *)arg1 ;
-(id)viewForIdentifier:(id)arg1 ;
-(void)_create_chargingView;
-(void)setPercentView:(_UIStatusBarStringView *)arg1 ;
-(_UIStatusBarStringView *)percentView;
-(void)setChargingView:(_UIStatusBarImageView *)arg1 ;
-(void)_create_staticBatteryView;
-(_UIStatusBarImageView *)chargingView;
-(void)setBatteryView:(_UIBatteryView *)arg1 ;
-(_UIBatteryView *)batteryView;
-(void)_create_batteryView;
-(_UIStaticBatteryView *)staticBatteryView;
-(void)setHighlighted:(BOOL)arg1 ;
@end

