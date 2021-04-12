/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(HKDisplayType *)displayType;
-(void)setDisplayType:(HKDisplayType *)arg1 ;
-(void)switchCellValueChanged:(id)arg1 value:(BOOL)arg2 ;
-(void)favoriteDisplayTypesControllerDidUpdate:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)dealloc;
-(WDFavoriteDisplayTypesController *)favoriteDisplayTypesController;
-(void)setFavoriteDisplayTypesController:(WDFavoriteDisplayTypesController *)arg1 ;
-(void)updateSwitchValue;
@end

