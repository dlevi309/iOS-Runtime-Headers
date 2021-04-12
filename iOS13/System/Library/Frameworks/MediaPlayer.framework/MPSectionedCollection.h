/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/_MPStateDumpPropertyListTransformable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface MPSectionedCollection : NSObject <_MPStateDumpPropertyListTransformable, NSCopying, NSMutableCopying, NSSecureCoding> {

	NSArray* _sectionedItems;
	NSArray* _sections;

}

@property (nonatomic,readonly) id firstSection; 
@property (nonatomic,readonly) id lastSection; 
@property (nonatomic,readonly) id firstItem; 
@property (nonatomic,readonly) id lastItem; 
@property (nonatomic,readonly) long long totalItemCount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)firstItem;
-(long long)globalIndexForIndexPath:(id)arg1 ;
-(long long)numberOfSections;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(id)indexPathForGlobalIndex:(long long)arg1 ;
-(void)enumerateItemsUsingBlock:(/*^block*/id)arg1 ;
-(id)sectionAtIndex:(long long)arg1 ;
-(id)lastItem;
-(id)itemAtIndexPath:(id)arg1 ;
-(id)allItems;
-(id)_stateDumpObject;
-(id)allSections;
-(void)enumerateSectionsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateItemsInSectionAtIndex:(long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)firstSection;
-(id)itemsInSectionAtIndex:(long long)arg1 ;
-(BOOL)hasSameContentAsSectionedCollection:(id)arg1 ;
-(id)lastSection;
-(long long)totalItemCount;
-(id)changeDetailsToSectionedCollection:(id)arg1 isEqualBlock:(/*^block*/id)arg2 isUpdatedBlock:(/*^block*/id)arg3 ;
-(void)_initializeAsEmptySectionedCollection;
-(id)identifiersForItemAtIndexPath:(id)arg1 ;
-(id)identifiersForSectionAtIndex:(long long)arg1 ;
-(void)enumerateItemIdentifiersUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateSectionIdentifiersUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateItemIdentifiersInSectionAtIndex:(long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)indexPathForItemWithIdentifiersIntersectingSet:(id)arg1 ;
@end

