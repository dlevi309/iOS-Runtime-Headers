/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@interface PGPeopleTitleUtility : NSObject
+(id)beautifiedLocationStringWithPersonNode:(id)arg1 peopleAddressEdge:(id)arg2 titleComponent:(id)arg3 insertLineBreak:(BOOL)arg4 allowFamilyHome:(BOOL)arg5 ;
+(id)nameStringForPersonNodes:(id)arg1 includeMe:(BOOL)arg2 insertLineBreaks:(BOOL)arg3 ;
+(id)nameStringForPersonNodes:(id)arg1 includeMe:(BOOL)arg2 allowUnnamed:(BOOL)arg3 allowedGroupsFormat:(unsigned long long)arg4 insertLineBreaks:(BOOL)arg5 ;
+(id)ageStringForPeopleNode:(id)arg1 date:(id)arg2 ;
+(id)ageStringForPeopleNode:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
+(id)_ageStringWithStartAge:(long long)arg1 endAge:(long long)arg2 ;
+(id)peopleGroupNameForPeopleNodes:(id)arg1 allowedGroupsFormat:(unsigned long long)arg2 ;
+(id)nameFromPersonNode:(id)arg1 ;
+(id)_placeDisplayNameForPeopleAddressNodeLabel:(id)arg1 titleComponent:(id)arg2 containsMe:(BOOL)arg3 ;
@end

