/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthUI/HKSwitchTableViewCell.h>
#import <libobjc.A.dylib/HKSwitchTableViewCellDelegate.h>
#import <libobjc.A.dylib/WDFavoriteDisplayTypesControllerObserver.h>

@class WDFavoriteDisplayTypesController, HKDisplayType, NSString;

@interface HKFavoriteSwitchTableViewCell : HKSwitchTableViewCell <HKSwitchTableViewCellDelegate, WDFavoriteDisplayTypesControllerObserver> {

	WDFavoriteDisplayTypesController* _favoriteDisplayTypesController;
	HKDisplayType* _displayType;

}

@property (nonatomic,retain) WDFavoriteDisplayTypesController * favoriteDisplayTypesController;              //@synthesize favoriteDisplayTypesController=_favoriteDisplayTypesController - In the implementation block
@property (nonatomic,retain) HKDisplayType * displayType;                                                    //@synthesize displayType=_displayType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultReuseIdentifier;
-(void)dealloc;
-(HKDisplayType *)displayType;
-(void)setDisplayType:(HKDisplayType *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)favoriteDisplayTypesControllerDidUpdate:(id)arg1 ;
-(void)switchCellValueChanged:(id)arg1 value:(BOOL)arg2 ;
-(WDFavoriteDisplayTypesController *)favoriteDisplayTypesController;
-(void)setFavoriteDisplayTypesController:(WDFavoriteDisplayTypesController *)arg1 ;
-(void)updateSwitchValue;
@end

