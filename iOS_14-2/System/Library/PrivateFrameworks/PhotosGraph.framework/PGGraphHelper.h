/*
* Generated on Thursday, January 14, 2021 at 2:25:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@interface PGGraphHelper : NSObject
+(id)densityClusteringForObjects:(id)arg1 maximumDistance:(double)arg2 minimumNumberOfObjects:(unsigned long long)arg3 withDistanceBlock:(/*^block*/id)arg4 ;
+(id)socialGroupsOverTheYearsWithPersonClusterManager:(id)arg1 forPersons:(id)arg2 updateBlock:(/*^block*/id)arg3 ;
+(id)suggestedMeIdentifierWithPersonClusterManager:(id)arg1 forPersons:(id)arg2 updateBlock:(/*^block*/id)arg3 ;
+(id)multiLevelSocialGroupsWithPersonClusterManager:(id)arg1 forPersons:(id)arg2 updateBlock:(/*^block*/id)arg3 ;
+(id)_createSocialGraphWithPersonClusterManager:(id)arg1 persons:(id)arg2 moments:(id)arg3 inferredMePersonIdentifier:(id*)arg4 updateBlock:(/*^block*/id)arg5 ;
+(id)_socialGroupsIdentifiersInGraph:(id)arg1 includeMeNode:(BOOL)arg2 includeCouples:(BOOL)arg3 includeInvalid:(BOOL)arg4 ;
+(double)_confidenceForMePersonIdentifier:(id)arg1 withPersonClusters:(id)arg2 inPhotoLibrary:(id)arg3 ;
@end

