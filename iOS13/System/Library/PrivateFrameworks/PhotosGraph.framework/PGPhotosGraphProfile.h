/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <MediaMiningKit/CLSProfile.h>

@interface PGPhotosGraphProfile : CLSProfile
+(id)classIdentifier;
+(id)informantDependenciesIdentifiers;
+(id)profileDependenciesIdentifiers;
+(id)supportedMeaningClueKeys;
+(id)blacklistedNamesToTraverse;
+(id)blacklistedNames;
+(BOOL)isBlacklistedNode:(id)arg1 ;
+(id)poiUnknown;
+(id)poiRestaurant;
+(id)poiNightlife;
+(id)poiShopping;
+(id)poiTravel;
+(id)poiCulture;
+(id)poiMuseum;
+(id)poiEntertainment;
+(id)poiAmusementPark;
+(id)poiPark;
+(id)poiPerformance;
+(id)poiStadium;
+(id)poiActivity;
+(id)poiDiving;
+(id)poiHiking;
+(id)poiFitness;
+(id)poiHospital;
+(id)roiUrban;
+(id)roiBeach;
+(id)roiNature;
+(id)roiWater;
+(id)roiMoutain;
+(id)partOfDayMorning;
+(id)partOfDayNoon;
+(id)partOfDayAfternoon;
+(id)partOfDayEvening;
+(id)partOfDayNight;
-(void)processResultsSynchronouslyForInvestigation:(id)arg1 withProgressBlock:(/*^block*/id)arg2 ;
-(void)_insertEventCluesForClueCollection:(id)arg1 ;
-(void)_insertPlacesForClueCollection:(id)arg1 ;
-(void)_insertSceneForClueCollection:(id)arg1 ;
@end

