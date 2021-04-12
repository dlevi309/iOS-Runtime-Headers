/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGGraph.h>

@interface PGFeatureVector : PGGraph
+(id)_imprecisePostalAddressFromPlacemark:(id)arg1 ;
+(id)_personForName:(id)arg1 ;
+(id)featureVectorWithLocalDate:(id)arg1 location:(id)arg2 peopleNames:(id)arg3 ;
+(id)featureVectorWithLocalDate:(id)arg1 impreciseLocation:(id)arg2 peopleNames:(id)arg3 ;
+(id)_featureVectorWithLocalDate:(id)arg1 location:(id)arg2 peopleNames:(id)arg3 useImpreciseLocation:(BOOL)arg4 ;
+(id)featureVectorWithLocalDate:(id)arg1 location:(id)arg2 peopleUUIDs:(id)arg3 inPhotoLibrary:(id)arg4 ;
+(id)_featureVectorWithLocalDate:(id)arg1 location:(id)arg2 peopleClues:(id)arg3 useImpreciseLocation:(BOOL)arg4 ;
+(id)featureVectorWithCalendarEvent:(id)arg1 ;
+(id)featureVectorWithCalendarEvent:(id)arg1 requiresLocation:(BOOL)arg2 requiresPeople:(BOOL)arg3 ;
@end

