/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <MPUFoundation/MPUDataSource.h>

@class NSArray, NSMutableSet, MPMediaItemCollection, MPMediaQuerySectionInfo, MPMediaQuery;

@interface MPUQueryDataSource : MPUDataSource {

	NSArray* _entities;
	NSMutableSet* _additionalUniqueItemPropertiesToFetch;
	BOOL _hasValidEmpty;
	BOOL _hasValidRepresentativeCollection;
	BOOL _invalidateWhenEnteringForeground;
	BOOL _isEmpty;
	MPMediaItemCollection* _representativeCollection;
	MPMediaQuerySectionInfo* _sectionInfo;
	BOOL _ignoringInvalidationDueToBackgroundApplicationState;
	MPMediaQuery* _query;

}

@property (nonatomic,readonly) MPMediaQuery * query;                                                //@synthesize query=_query - In the implementation block
@property (assign,nonatomic) BOOL ignoringInvalidationDueToBackgroundApplicationState;              //@synthesize ignoringInvalidationDueToBackgroundApplicationState=_ignoringInvalidationDueToBackgroundApplicationState - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)count;
-(BOOL)isEmpty;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(MPMediaQuery *)query;
-(id)entities;
-(unsigned long long)numberOfSections;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)_mediaLibraryDidChangeNotification:(id)arg1 ;
-(id)_representativeCollection;
-(id)localizedSectionIndexTitles;
-(id)_sectionInfo;
-(void)_defaultMediaLibraryDidChangeNotification:(id)arg1 ;
-(id)initWithEntityType:(long long)arg1 ;
-(id)initWithQuery:(id)arg1 entityType:(long long)arg2 ;
-(void)_mediaLibraryDisplayValuesDidChangeNotification:(id)arg1 ;
-(void)_mediaLibraryDynamicPropertiesDidChangeNotification:(id)arg1 ;
-(void)_invalidateCalculatedEntities;
-(id)queryForEntityAtIndex:(unsigned long long)arg1 ;
-(BOOL)ignoringInvalidationDueToBackgroundApplicationState;
-(void)setIgnoringInvalidationDueToBackgroundApplicationState:(BOOL)arg1 ;
-(void)_invalidateIfNeeded;
-(void)_invalidateForDisplayValuesChangeIfNeeded;
-(BOOL)canEditEntityAtIndex:(unsigned long long)arg1 ;
-(BOOL)canSelectEntityAtIndex:(unsigned long long)arg1 ;
-(void)deleteEntityAtIndex:(unsigned long long)arg1 ;
-(long long)editingTypeForEntityAtIndex:(unsigned long long)arg1 ;
-(id)queryForEntityAtIndexPath:(id)arg1 ;
-(BOOL)showsIndexBar;
-(id)localizedSectionTitleAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfSectionForSectionTitleAtIndex:(unsigned long long)arg1 ;
-(NSRange)rangeOfSectionAtIndex:(unsigned long long)arg1 ;
-(BOOL)showsEntityCountFooter;
-(void)addAdditionalMediaEntityPropertiesToFetch:(id)arg1 ;
-(void)removeAdditionalMediaEntityPropertiesToFetch:(id)arg1 ;
-(void)_isCloudEnabledDidChangeNotification:(id)arg1 ;
-(BOOL)_deleteHidesFromCloudForIndex:(unsigned long long)arg1 hidesAll:(out BOOL*)arg2 ;
@end

