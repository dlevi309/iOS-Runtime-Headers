/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)sectionAtIndex:(long long)arg1 ;
-(BOOL)hasSameContentAsSectionedCollection:(id)arg1 ;
-(id)identifiersForSectionAtIndex:(long long)arg1 ;
-(long long)totalItemCount;
-(id)firstItem;
-(id)itemsInSectionAtIndex:(long long)arg1 ;
-(void)enumerateItemIdentifiersUsingBlock:(/*^block*/id)arg1 ;
-(id)lastItem;
-(id)changeDetailsToSectionedCollection:(id)arg1 applyingUIKitWorkarounds:(BOOL)arg2 isEqualBlock:(/*^block*/id)arg3 isUpdatedBlock:(/*^block*/id)arg4 ;
-(void)_initializeAsEmptySectionedCollection;
-(id)identifiersForItemAtIndexPath:(id)arg1 ;
-(id)firstSection;
-(void)enumerateSectionsUsingBlock:(/*^block*/id)arg1 ;
-(id)init;
-(void)enumerateItemsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateSectionIdentifiersUsingBlock:(/*^block*/id)arg1 ;
-(id)allItems;
-(id)indexPathForGlobalIndex:(long long)arg1 ;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(void)enumerateItemIdentifiersInSectionAtIndex:(long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)itemAtIndexPath:(id)arg1 ;
-(long long)numberOfSections;
-(id)indexPathForItemWithIdentifiersIntersectingSet:(id)arg1 ;
-(id)lastSection;
-(id)changeDetailsToSectionedCollection:(id)arg1 isEqualBlock:(/*^block*/id)arg2 isUpdatedBlock:(/*^block*/id)arg3 ;
-(id)allSections;
-(void)encodeWithCoder:(id)arg1 ;
-(void)enumerateItemsInSectionAtIndex:(long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(NSString *)debugDescription;
-(long long)globalIndexForIndexPath:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)_stateDumpObject;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

