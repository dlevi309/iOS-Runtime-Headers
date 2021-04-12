/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthExperience.framework/HealthExperience
*/

#import <libobjc.A.dylib/WDFavoriteDisplayTypesControllerObserver.h>
#import <HealthExperience/HealthPlatform.FavoritesProviding.h>

@class NSSet;

@interface HealthExperience.FavoritesProvider : NSObject <WDFavoriteDisplayTypesControllerObserver, HealthPlatform.FavoritesProviding> {

	 observers;
	 favoriteDisplayTypesController;
	 healthStore;
	 nonspecificUpdatesDisabled;

}

@property (readonly,nonatomic) NSSet * favorites; 
@property (readonly,nonatomic) BOOL isReady; 
@property (readonly,nonatomic) BOOL isCycleTrackingFavorited; 
-(void)favoriteDisplayTypesControllerReady:(id)arg1 ;
-(void)favoriteDisplayTypesControllerDidUpdate:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(id)init;
-(NSSet *)favorites;
-(BOOL)isReady;
-(void)removeObserver:(id)arg1 ;
-(void)dealloc;
-(BOOL)isFavoriteWithObject:(id)arg1 ;
-(BOOL)isCycleTrackingFavorited;
-(void)favoritesChangedRemotely:(id)arg1 ;
@end

