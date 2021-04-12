/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGGraphEdge.h>

@class NSString;

@interface PGGraphContactSuggestionEdge : PGGraphEdge

@property (nonatomic,readonly) unsigned long long numberOfMomentsAtHome; 
@property (nonatomic,readonly) unsigned long long numberOfMomentsAtMentionedAddress; 
@property (nonatomic,readonly) unsigned long long numberOfWeakBirthdayMomentsAroundBirthdayDate; 
@property (nonatomic,readonly) unsigned long long numberOfWeakBirthdayMomentsAroundPotentialBirthdayDate; 
@property (nonatomic,readonly) unsigned long long numberOfMomentsOverlappingWithCalendarEvents; 
@property (nonatomic,readonly) unsigned long long numberOfAppearancesInSharedAssets; 
@property (nonatomic,readonly) unsigned long long numberOfCMMMoments; 
@property (nonatomic,readonly) double facetimeFaceprintConfidence; 
@property (nonatomic,readonly) BOOL contactFaceprintMatch; 
@property (nonatomic,readonly) NSString * relationshipsDebug; 
@property (nonatomic,readonly) unsigned long long numberOfMatchedRelationships; 
@property (nonatomic,readonly) unsigned long long numberOfMatchedMessageGroups; 
@property (nonatomic,readonly) double socialGroupsConfidence; 
@property (nonatomic,readonly) NSString * socialGroupsDebug; 
@property (nonatomic,readonly) NSString * messageGroupsDebug; 
@property (nonatomic,readonly) BOOL personContactGenderMatch; 
@property (nonatomic,readonly) BOOL personContactGenderMismatch; 
-(id)description;
-(double)confidence;
-(unsigned long long)_genderMatch;
-(unsigned long long)numberOfWeakBirthdayMomentsAroundBirthdayDate;
-(unsigned long long)numberOfWeakBirthdayMomentsAroundPotentialBirthdayDate;
-(unsigned long long)numberOfMomentsAtMentionedAddress;
-(unsigned long long)numberOfMomentsOverlappingWithCalendarEvents;
-(unsigned long long)numberOfAppearancesInSharedAssets;
-(BOOL)contactFaceprintMatch;
-(unsigned long long)numberOfMatchedRelationships;
-(id)_stringForGenderMatch:(unsigned long long)arg1 ;
-(BOOL)isFilteredOut;
-(BOOL)isHighConfidence;
-(unsigned long long)numberOfMomentsAtHome;
-(unsigned long long)numberOfCMMMoments;
-(double)facetimeFaceprintConfidence;
-(NSString *)relationshipsDebug;
-(unsigned long long)numberOfMatchedMessageGroups;
-(double)socialGroupsConfidence;
-(NSString *)socialGroupsDebug;
-(NSString *)messageGroupsDebug;
-(BOOL)personContactGenderMatch;
-(BOOL)personContactGenderMismatch;
-(id)_readableStringForContactSuggestionProperty:(id)arg1 ;
@end

