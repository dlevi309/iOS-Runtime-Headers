/*
* Generated on Thursday, January 14, 2021 at 2:25:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGGraphOptimizedNode.h>
#import <libobjc.A.dylib/PGPersonResult.h>

@class NSString, NSDate, NSDateComponents;

@interface PGGraphPersonNode : PGGraphOptimizedNode <PGPersonResult> {

	BOOL _isFavorite;
	BOOL _isUserCreated;
	NSString* _name;
	NSString* _localIdentifier;
	NSString* _contactIdentifier;
	NSDate* _birthdayDate;
	NSDate* _potentialBirthdayDate;
	NSDate* _anniversaryDate;
	unsigned long long _sex;
	unsigned long long _ageCategory;

}

@property (nonatomic,readonly) NSString * fullName; 
@property (nonatomic,readonly) NSString * localIdentifier; 
@property (nonatomic,readonly) NSString * contactIdentifier; 
@property (nonatomic,readonly) NSString * suggestedContactIdentifier; 
@property (nonatomic,readonly) BOOL isVerified; 
@property (nonatomic,readonly) BOOL isInferredChild; 
@property (nonatomic,readonly) NSDate * birthdayDate; 
@property (nonatomic,readonly) NSString * keywordDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * name;                                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSDateComponents * birthdayDateComponents; 
@property (nonatomic,retain) NSDateComponents * potentialBirthdayDateComponents; 
@property (nonatomic,retain) NSDateComponents * anniversaryDateComponents; 
@property (readonly) BOOL isUserCreated;                                                      //@synthesize isUserCreated=_isUserCreated - In the implementation block
@property (readonly) BOOL isFavorite;                                                         //@synthesize isFavorite=_isFavorite - In the implementation block
@property (readonly) NSString * localIdentifier;                                              //@synthesize localIdentifier=_localIdentifier - In the implementation block
@property (readonly) NSString * contactIdentifier;                                            //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long sex;                                          //@synthesize sex=_sex - In the implementation block
@property (assign,nonatomic) unsigned long long ageCategory;                                  //@synthesize ageCategory=_ageCategory - In the implementation block
@property (readonly) NSDate * birthdayDate;                                                   //@synthesize birthdayDate=_birthdayDate - In the implementation block
@property (readonly) NSDate * potentialBirthdayDate;                                          //@synthesize potentialBirthdayDate=_potentialBirthdayDate - In the implementation block
@property (readonly) NSDate * anniversaryDate;                                                //@synthesize anniversaryDate=_anniversaryDate - In the implementation block
@property (readonly) BOOL belongsToAnySocialGroup; 
@property (readonly) BOOL belongsToBestSocialGroups; 
@property (readonly) BOOL isMeNode; 
@property (readonly) unsigned long long numberOfMomentNodes; 
@property (readonly) double personScore; 
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
+(id)filter;
+(unsigned long long)type;
+(id)personSortDescriptors;
+(id)specialDateForDateComponents:(id)arg1 ;
+(id)_specialDateComponentsForDate:(id)arg1 ;
+(id)personScoreSortDescriptors;
+(id)propertiesWithPerson:(id)arg1 ;
+(double)specialDateTimeIntervalForDate:(id)arg1 ;
+(id)partnerOfPerson;
+(id)fatherOfPerson;
+(id)motherOfPerson;
+(id)brotherOfPerson;
+(id)sisterOfPerson;
+(id)daughterOfPerson;
+(id)sonOfPerson;
+(id)parentOfPerson;
+(id)familyOfPerson;
+(id)familySocialGroupOfPerson;
+(id)childOfPerson;
+(id)friendOfPerson;
+(id)coworkerOfPerson;
+(id)coworkerSocialGroupOfPerson;
+(id)acquaintanceOfPerson;
+(id)vipOfPerson;
-(BOOL)isFavorite;
-(id)associatedNodesForRemoval;
-(NSString *)localIdentifier;
-(NSString *)contactIdentifier;
-(id)socialGroupNodes;
-(BOOL)isMyAcquaintance;
-(NSString *)fullName;
-(BOOL)isUserCreated;
-(NSDate *)birthdayDate;
-(NSDateComponents *)potentialBirthdayDateComponents;
-(NSDateComponents *)birthdayDateComponents;
-(BOOL)isVerified;
-(id)init;
-(void)setBiologicalSex:(unsigned long long)arg1 ;
-(BOOL)isInferredMemberOfMyFamily;
-(id)_contactSuggestionEdgesSortedByWeight;
-(BOOL)isMyParent;
-(BOOL)_contactSuggestionEdge:(id)arg1 fitsQuery:(unsigned long long)arg2 ;
-(BOOL)isMyMother;
-(BOOL)isMemberOfMyFamily;
-(BOOL)isMyInferredAcquaintance;
-(long long)compareToPerson:(id)arg1 ;
-(unsigned short)domain;
-(NSDate *)anniversaryDate;
-(BOOL)isMyInferredFather;
-(BOOL)isMyInferredChild;
-(NSString *)name;
-(BOOL)isMyFriend;
-(void)setPotentialBirthdayDateComponents:(NSDateComponents *)arg1 ;
-(void)enumerateContactSuggestionsSortedByWeightMatchingQuery:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)setBirthdayDateComponents:(NSDateComponents *)arg1 ;
-(void)setSex:(unsigned long long)arg1 ;
-(NSString *)description;
-(BOOL)isIdentifiedByProperties:(id)arg1 ;
-(BOOL)isMyInferredFriend;
-(NSString *)suggestedContactIdentifier;
-(BOOL)isMyPartner;
-(void)enumerateHomeOrWorkAddressNodesUsingBlock:(/*^block*/id)arg1 ;
-(void)setLocalProperties:(id)arg1 ;
-(BOOL)isMyFather;
-(double)personScore;
-(unsigned long long)numberOfMomentNodes;
-(BOOL)isMyCoworker;
-(BOOL)isMyChild;
-(NSDateComponents *)anniversaryDateComponents;
-(BOOL)isMeNode;
-(id)propertyDictionary;
-(NSDate *)potentialBirthdayDate;
-(BOOL)isInferredChild;
-(BOOL)_hasRelationshipLabel:(id)arg1 withStatus:(unsigned long long)arg2 ;
-(BOOL)isMyInferredParent;
-(BOOL)belongsToBestSocialGroups;
-(id)stringDescription;
-(BOOL)isMyInferredMother;
-(id)momentNodes;
-(void)setName:(NSString *)arg1 ;
-(void)enumerateSocialGroupNodesUsingBlock:(/*^block*/id)arg1 ;
-(void)setAgeCategory:(unsigned long long)arg1 ;
-(BOOL)isMyInferredPartner;
-(BOOL)isMyInferredSibling;
-(unsigned long long)ageCategory;
-(void)enumerateBirthdayMomentNodesUsingBlock:(/*^block*/id)arg1 ;
-(void)mergeProperties:(id)arg1 ;
-(id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 ;
-(BOOL)isMySibling;
-(unsigned long long)sex;
-(void)enumerateMomentNodesUsingBlock:(/*^block*/id)arg1 ;
-(void)setAnniversaryDateComponents:(NSDateComponents *)arg1 ;
-(BOOL)isMyInferredCoworker;
-(id)label;
-(BOOL)hasProperties:(id)arg1 ;
-(BOOL)belongsToAnySocialGroup;
@end

