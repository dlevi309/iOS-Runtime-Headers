/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthExperience.framework/HealthExperience
*/

@class NSSet;


@protocol HealthPlatform.FavoritesProviding
@property (readonly,nonatomic) NSSet * favorites; 
@property (readonly,nonatomic) BOOL isReady; 
@property (readonly,nonatomic) BOOL isCycleTrackingFavorited; 
@required
-(void)addObserver:(id)arg1;
-(NSSet *)favorites;
-(BOOL)isReady;
-(void)removeObserver:(id)arg1;
-(BOOL)isFavoriteWithObject:(id)arg1;
-(BOOL)isCycleTrackingFavorited;

@end

