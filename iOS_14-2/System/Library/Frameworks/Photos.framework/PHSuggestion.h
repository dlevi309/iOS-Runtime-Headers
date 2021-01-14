/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHAssetCollection.h>

@class NSData, NSDate, NSArray, NSDictionary, NSString;

@interface PHSuggestion : PHAssetCollection {

	NSData* _actionData;
	NSData* _featuresData;
	NSDate* _creationDate;
	unsigned long long _approximateCount;
	unsigned long long _approximatePhotosCount;
	unsigned long long _approximateVideosCount;
	NSArray* _assets;
	unsigned short _type;
	unsigned short _subtype;
	unsigned short _state;
	unsigned short _notificationState;
	unsigned short _featuredState;
	NSDictionary* _actionProperties;
	NSDictionary* _featuresProperties;
	long long _version;
	NSDate* _activationDate;
	NSDate* _relevantUntilDate;
	NSDate* _expungeDate;
	NSString* _subtitle;

}

@property (nonatomic,readonly) NSString * subtitle;                            //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) NSDictionary * actionProperties;                //@synthesize actionProperties=_actionProperties - In the implementation block
@property (nonatomic,readonly) NSDictionary * featuresProperties;              //@synthesize featuresProperties=_featuresProperties - In the implementation block
@property (nonatomic,readonly) BOOL containsUnverifiedPersons; 
@property (nonatomic,readonly) unsigned short type;                            //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned short subtype;                         //@synthesize subtype=_subtype - In the implementation block
@property (nonatomic,readonly) unsigned short state;                           //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) unsigned short notificationState;               //@synthesize notificationState=_notificationState - In the implementation block
@property (nonatomic,readonly) unsigned short featuredState;                   //@synthesize featuredState=_featuredState - In the implementation block
@property (nonatomic,readonly) long long version;                              //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSDate * activationDate;                        //@synthesize activationDate=_activationDate - In the implementation block
@property (nonatomic,readonly) NSDate * relevantUntilDate;                     //@synthesize relevantUntilDate=_relevantUntilDate - In the implementation block
@property (nonatomic,readonly) NSDate * expungeDate;                           //@synthesize expungeDate=_expungeDate - In the implementation block
+(id)entityKeyMap;
+(BOOL)managedObjectSupportsPendingState;
+(BOOL)managedObjectSupportsRejectedState;
+(id)identifierCode;
+(id)fetchType;
+(id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2 ;
+(double)lifetimeAfterBecomingActive;
+(id)predicateForAllFeaturedStateEnabledSuggestionTypes;
+(id)fetchSuggestionsWithOptions:(id)arg1 ;
+(id)fetchSuggestionsWithState:(unsigned short)arg1 withOptions:(id)arg2 ;
+(id)fetchSuggestionsWithState:(unsigned short)arg1 ofType:(unsigned short)arg2 withOptions:(id)arg3 ;
+(id)transientSuggestionWithInfo:(id)arg1 photoLibrary:(id)arg2 ;
+(id)availableSuggestionTypeInfosWithOptions:(id)arg1 photoLibrary:(id)arg2 ;
+(id)suggestionInfosWithOptions:(id)arg1 photoLibrary:(id)arg2 ;
+(id)localIdentifierWithUUID:(id)arg1 ;
+(BOOL)managedObjectSupportsTrashedState;
+(id)propertiesToFetchWithHint:(unsigned long long)arg1 ;
+(id)managedEntityName;
-(id)assets;
-(unsigned short)subtype;
-(NSString *)subtitle;
-(NSDate *)expungeDate;
-(id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3 ;
-(id)predicateForAllMomentsFromRepresentativeAssets;
-(NSDate *)activationDate;
-(id)localizedSubtitle;
-(unsigned short)notificationState;
-(unsigned short)featuredState;
-(NSDate *)relevantUntilDate;
-(id)description;
-(id)creationDate;
-(unsigned long long)estimatedVidoesCount;
-(id)predicateForAllAssets;
-(NSDictionary *)actionProperties;
-(NSDictionary *)featuresProperties;
-(BOOL)containsUnverifiedPersons;
-(unsigned short)type;
-(unsigned long long)estimatedAssetCount;
-(unsigned short)state;
-(long long)version;
-(unsigned long long)estimatedPhotosCount;
@end

