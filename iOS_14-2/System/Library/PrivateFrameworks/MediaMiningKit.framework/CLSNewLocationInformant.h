/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <MediaMiningKit/MediaMiningKit-Structs.h>
#import <MediaMiningKit/CLSInformant.h>

@interface CLSNewLocationInformant : CLSInformant
+(BOOL)doesRegion:(id)arg1 containLocation:(id)arg2 ;
+(BOOL)doesRegion:(id)arg1 intersectOtherRegion:(id)arg2 ;
+(id)shiftedLocationFromOriginalLocation:(id)arg1 ;
+(id)natureCategories;
+(id)filterBusinessItems:(id)arg1 forCategories:(id)arg2 subCategories:(id)arg3 blacklistCategories:(id)arg4 ;
+(id)searchBusinessItemsAtCoordinate:(CLLocationCoordinate2D)arg1 forCategories:(id)arg2 precision:(double)arg3 inCache:(id)arg4 ;
+(id)_categoriesDescriptionFromCategories:(id)arg1 ;
+(id)businessItemsForRegion:(id)arg1 ;
+(id)areaOfInterestCategories;
+(id)pointOfInterestCategories;
+(id)createPlaceForBusinessItem:(id)arg1 ;
+(id)classIdentifier;
+(id)informantDependenciesIdentifiers;
+(id)familyIdentifier;
+(CLLocationCoordinate2D)shiftedCoordinatesFromOriginalCoordinates:(CLLocationCoordinate2D)arg1 ;
+(BOOL)location:(CLLocationCoordinate2D)arg1 isCloseToLocation:(CLLocationCoordinate2D)arg2 ;
+(BOOL)location:(CLLocationCoordinate2D)arg1 isFarFromLocation:(CLLocationCoordinate2D)arg2 ;
+(id)regionOfInterestCategories;
-(id)_regionOfInterestCategories;
-(id)locationAreaOfInterestCluesForInputClue:(id)arg1 ;
-(id)_pointOfInterestTraits;
-(id)gatherCluesForInvestigation:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)locationRegionOfInterestCluesForInputClue:(id)arg1 ;
-(id)locationPointOfInterestCluesForInputClue:(id)arg1 ;
-(id)outputLocationCluesForOuputClueKey:(id)arg1 inputClue:(id)arg2 region:(id)arg3 traits:(id)arg4 categories:(id)arg5 exactMatch:(BOOL)arg6 precision:(double)arg7 cache:(id)arg8 ;
-(id)_regionOfInterestTraits;
@end

