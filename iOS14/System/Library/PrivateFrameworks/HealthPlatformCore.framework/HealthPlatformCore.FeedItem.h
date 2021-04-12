/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthPlatformCore.framework/HealthPlatformCore
*/

#import <CoreData/NSManagedObject.h>

@class NSDate, NSString, NSData, NSSet, _TtC18HealthPlatformCore11FeedSection;

@interface HealthPlatformCore.FeedItem : NSManagedObject

@property (readonly,nonatomic) NSDate * relevantStartDateForSectionName; 
@property (copy,nonatomic) NSDate * dateSubmitted; 
@property (assign,nonatomic) BOOL hideInDiscover; 
@property (assign,nonatomic) BOOL isFavorite; 
@property (copy,nonatomic) NSString * uniqueIdentifier; 
@property (copy,nonatomic) NSString * pluginPackage; 
@property (assign,nonatomic) long long sortOrder; 
@property (copy,nonatomic) NSString * storyboardIdentifier; 
@property (copy,nonatomic) NSString * viewControllerClassName; 
@property (assign,nonatomic) double suggestionRelevanceScore; 
@property (copy,nonatomic) NSData * userData; 
@property (copy,nonatomic) NSString * contentKindRawValue; 
@property (copy,nonatomic) NSSet * dataTypes; 
@property (copy,nonatomic) NSSet * featureTags; 
@property (retain,nonatomic) _TtC18HealthPlatformCore11FeedSection * feedSection; 
@property (copy,nonatomic) NSSet * keywords; 
@property (copy,nonatomic) NSSet * profiles; 
@property (copy,nonatomic) NSString * localizedTitle; 
@property (copy,nonatomic) NSString * localizedDescription; 
@property (assign,nonatomic) short searchSectionRawValue; 
@property (assign,nonatomic) short searchSectionHintRawValue; 
@property (assign,nonatomic) long long sectionSortOrder; 
@property (copy,nonatomic) NSDate * relevantStartDate; 
@property (copy,nonatomic) NSDate * relevantEndDate; 
@property (assign,nonatomic) double relevantRampUpTime; 
@property (assign,nonatomic) double relevantRampDownTime; 
@property (copy,nonatomic) NSDate * boundingStartDate; 
@property (copy,nonatomic) NSDate * boundingEndDate; 
@property (assign,nonatomic) long long sortHint; 
@property (assign,nonatomic) BOOL indexForSearch; 
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(NSDate *)relevantStartDateForSectionName;
-(id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2 ;
@end

