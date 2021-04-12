/*
* Generated on Monday, March 1, 2021 at 2:35:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)accessibilityIsFavorited;
-(void)favoriteDisplayTypesControllerReady:(id)arg1 ;
-(void)favoriteDisplayTypesControllerDidUpdate:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
@end

