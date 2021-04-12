/*
* Generated on Thursday, January 14, 2021 at 2:20:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIDiffableDataSourceState.h>
@class NSUUID, NSOrderedSet;


@protocol _UIDiffableDataSourceState <_UIDiffableDataSourceQuerying,NSObject>
@property (nonatomic,readonly) NSUUID * generationID; 
@property (nonatomic,readonly) NSOrderedSet * identifiers; 
@property (nonatomic,readonly) NSOrderedSet * sections; 
@property (nonatomic,readonly) id<_UIDataSourceSnapshotTranslating> dataSourceSnapshot; 
@required
-(id<_UIDataSourceSnapshotTranslating>)dataSourceSnapshot;
-(id)sectionIndexesForItemIndexRange:(NSRange)arg1;
-(NSOrderedSet *)identifiers;
-(NSUUID *)generationID;
-(NSOrderedSet *)sections;

@end

#import <libobjc.A.dylib/NSCopying.h>

@protocol _UIDataSourceSnapshotTranslating;
@class NSUUID, NSOrderedSet, NSString;

@interface _UIDiffableDataSourceState : NSObject <_UIDiffableDataSourceState, NSCopying> {

	NSUUID* _generationID;
	NSOrderedSet* _identifiers;
	NSOrderedSet* _sections;
	id<_UIDataSourceSnapshotTranslating> _dataSourceSnapshot;

}

@property (nonatomic,readonly) NSUUID * generationID; 
@property (nonatomic,readonly) NSOrderedSet * identifiers; 
@property (nonatomic,readonly) NSOrderedSet * sections; 
@property (nonatomic,readonly) id<_UIDataSourceSnapshotTranslating> dataSourceSnapshot; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)sectionIdentifierForSectionContainingItemIdentifier:(id)arg1 ;
-(id)initWithState:(id)arg1 ;
-(id)sectionIdentifiers;
-(id<_UIDataSourceSnapshotTranslating>)dataSourceSnapshot;
-(id)itemIdentifiersInSectionWithIdentifier:(id)arg1 ;
-(id)sectionIndexesForItemIndexRange:(NSRange)arg1 ;
-(long long)indexOfItemIdentifier:(id)arg1 ;
-(NSOrderedSet *)identifiers;
-(long long)indexOfSectionIdentifier:(id)arg1 ;
-(id)itemIdentifiers;
-(NSUUID *)generationID;
-(id)init;
-(long long)numberOfItems;
-(long long)numberOfItemsInSection:(id)arg1 ;
-(id)itemIdentifierForIndexPath:(id)arg1 ;
-(long long)numberOfSections;
-(id)indexPathForItemIdentifier:(id)arg1 ;
-(NSOrderedSet *)sections;
-(id)initWithGenerationID:(id)arg1 identifiers:(id)arg2 sections:(id)arg3 dataSourceSnapshot:(id)arg4 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

