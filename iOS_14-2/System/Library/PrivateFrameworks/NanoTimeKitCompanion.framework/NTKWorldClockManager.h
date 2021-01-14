/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
@class WorldClockManager, NSArray;

@interface NTKWorldClockManager : NSObject {

	WorldClockManager* _frameworkManager;
	os_unfair_lock_s _frameworkLock;

}

@property (nonatomic,readonly) NSArray * cities; 
+(id)sharedManager;
-(void)saveCities;
-(id)init;
-(BOOL)checkIfCitiesModified;
-(void)loadCities;
-(NSArray *)cities;
-(unsigned long long)addCity:(id)arg1 ;
-(BOOL)canAddCity;
@end

