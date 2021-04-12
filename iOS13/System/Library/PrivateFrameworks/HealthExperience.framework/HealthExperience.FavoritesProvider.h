/*
* Generated on Monday, March 1, 2021 at 2:34:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthExperience.framework/HealthExperience
*/

#import <libobjc.A.dylib/WDFavoriteDisplayTypesControllerObserver.h>

@interface HealthExperience.FavoritesProvider : NSObject <WDFavoriteDisplayTypesControllerObserver> {

	 observers;
	 favoriteDisplayTypesController;
	 nonspecificUpdatesDisabled;

}
-(void)favoriteDisplayTypesControllerReady:(id)arg1 ;
-(void)favoriteDisplayTypesControllerDidUpdate:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)favoritesChangedRemotely:(id)arg1 ;
@end

