/*
* Generated on Thursday, January 14, 2021 at 2:29:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/FeedItemPlugins/MenstrualCyclesAppPlugin.healthplugin/MenstrualCyclesAppPlugin
*/

#import <MenstrualCyclesAppPlugin/MenstrualCyclesAppPlugin-Structs.h>
#import <MenstrualCyclesAppPlugin/MenstrualCyclesAppPlugin.ListCell.h>
#import <libobjc.A.dylib/WDFavoriteDisplayTypesControllerObserver.h>

@interface MenstrualCyclesAppPlugin.FavoritesCell : MenstrualCyclesAppPlugin.ListCell <WDFavoriteDisplayTypesControllerObserver> {

	 favoriteIndicator;
	 isFavorited;

}

@property (readonly,nonatomic) BOOL accessibilityIsFavorited; 
-(void)favoriteDisplayTypesControllerReady:(id)arg1 ;
-(void)favoriteDisplayTypesControllerDidUpdate:(id)arg1 ;
-(BOOL)accessibilityIsFavorited;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

