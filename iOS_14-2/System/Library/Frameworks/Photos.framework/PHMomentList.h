/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHCollectionList.h>

@class NSDate;

@interface PHMomentList : PHCollectionList {

	short _granularityLevel;
	int _sortIndex;
	NSDate* _representativeDate;

}

@property (nonatomic,readonly) int sortIndex;                            //@synthesize sortIndex=_sortIndex - In the implementation block
@property (nonatomic,readonly) short granularityLevel;                   //@synthesize granularityLevel=_granularityLevel - In the implementation block
@property (nonatomic,readonly) NSDate * representativeDate;              //@synthesize representativeDate=_representativeDate - In the implementation block
+(id)entityKeyMap;
+(id)identifierCode;
+(id)fetchType;
+(id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2 ;
+(BOOL)managedObjectSupportsTrashedState;
+(id)propertiesToFetchWithHint:(unsigned long long)arg1 ;
+(id)managedEntityName;
-(id)localizedTitle;
-(BOOL)collectionHasFixedOrder;
-(BOOL)hasLocalizedTitle;
-(NSDate *)representativeDate;
-(id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3 ;
-(id)localizedLocationNames;
-(Class)changeRequestClass;
-(id)description;
-(short)granularityLevel;
-(long long)collectionListType;
-(BOOL)hasLocationInfo;
-(int)sortIndex;
@end

