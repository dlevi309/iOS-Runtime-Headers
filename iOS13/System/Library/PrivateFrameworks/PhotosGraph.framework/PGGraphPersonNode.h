/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGGraphNode.h>
#import <libobjc.A.dylib/PGPersonResult.h>

@class NSString, NSDate;

@interface PGGraphPersonNode : PGGraphNode <PGPersonResult>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) NSString * localIdentifier; 
@property (nonatomic,readonly) NSString * contactIdentifier; 
@property (nonatomic,readonly) NSString * suggestedContactIdentifier; 
@property (nonatomic,readonly) BOOL isVerified; 
@property (nonatomic,readonly) BOOL isInferredChild; 
@property (nonatomic,readonly) NSDate * birthdayDate; 
@property (nonatomic,readonly) NSString * keywordDescription; 
@property (readonly) BOOL isUserCreated; 
@property (readonly) BOOL isFavorite; 
@property (readonly) NSString * localIdentifier; 
@property (readonly) NSString * contactIdentifier; 
@property (readonly) unsigned long long gender; 
@property (readonly) unsigned long long ageCategory; 
@property (readonly) NSDate * birthdayDate; 
@property (readonly) NSDate * potentialBirthdayDate; 
@property (readonly) NSDate * anniversaryDate; 
@property (readonly) BOOL isMemberOfMyFamily; 
@property (readonly) BOOL isMyPartner; 
@property (readonly) BOOL isMyChild; 
@property (readonly) BOOL isMyParent; 
@property (readonly) BOOL isMyMother; 
@property (readonly) BOOL isMyFather; 
@property (readonly) BOOL isMySibling; 
@property (readonly) BOOL isMyCoworker; 
@property (readonly) BOOL isMyFriend; 
@property (readonly) BOOL isMyAcquaintance; 
@property (readonly) BOOL isInferredMemberOfMyFamily; 
@property (readonly) BOOL isMyInferredPartner; 
@property (readonly) BOOL isMyInferredChild; 
@property (readonly) BOOL isMyInferredParent; 
@property (readonly) BOOL isMyInferredMother; 
@property (readonly) BOOL isMyInferredFather; 
@property (readonly) BOOL isMyInferredSibling; 
@property (readonly) BOOL isMyInferredCoworker; 
@property (readonly) BOOL isMyInferredFriend; 
@property (readonly) BOOL isMyInferredAcquaintance; 
+(unsigned long long)type;
+(id)personScoreSortDescriptors;
+(id)propertiesWithPerson:(id)arg1 ;
+(id)identifyingPropertyKeysWithProperties:(id)arg1 ;
-(NSString *)displayName;
-(NSString *)contactIdentifier;
-(NSString *)localIdentifier;
-(unsigned long long)ageCategory;
-(BOOL)isVerified;
-(BOOL)isFavorite;
-(unsigned long long)gender;
-(BOOL)isUserCreated;
-(NSDate *)birthdayDate;
-(NSDate *)potentialBirthdayDate;
-(NSDate *)anniversaryDate;
-(void)mergeProperties:(id)arg1 ;
-(id)associatedNodesForRemoval;
-(long long)compareToPerson:(id)arg1 ;
-(NSString *)suggestedContactIdentifier;
-(BOOL)isInferredChild;
-(BOOL)isMeNode;
-(double)personScore;
-(BOOL)belongsToBestSocialGroups;
-(id)personMomentNodes;
-(id)personSocialGroupNodes;
-(void)personEnumerateMomentNodesUsingBlock:(/*^block*/id)arg1 ;
-(void)personEnumerateSocialGroupNodesUsingBlock:(/*^block*/id)arg1 ;
-(void)personEnumerateHomeOrWorkAddressNodesUsingBlock:(/*^block*/id)arg1 ;
-(void)personEnumerateBirthdayMomentNodesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)_hasRelationshipLabel:(id)arg1 withStatus:(unsigned long long)arg2 ;
-(BOOL)isMemberOfMyFamily;
-(BOOL)isMyPartner;
-(BOOL)isMyChild;
-(BOOL)isMyParent;
-(BOOL)isMyMother;
-(BOOL)isMyFather;
-(BOOL)isMySibling;
-(BOOL)isMyCoworker;
-(BOOL)isMyFriend;
-(BOOL)isMyAcquaintance;
-(BOOL)isInferredMemberOfMyFamily;
-(BOOL)isMyInferredPartner;
-(BOOL)isMyInferredChild;
-(BOOL)isMyInferredParent;
-(BOOL)isMyInferredMother;
-(BOOL)isMyInferredFather;
-(BOOL)isMyInferredSibling;
-(BOOL)isMyInferredCoworker;
-(BOOL)isMyInferredFriend;
-(BOOL)isMyInferredAcquaintance;
-(void)enumerateContactSuggestionsSortedByWeightMatchingQuery:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)_contactSuggestionEdge:(id)arg1 fitsQuery:(unsigned long long)arg2 ;
-(id)_contactSuggestionEdgesSortedByWeight;
-(id)stringDescription;
@end

