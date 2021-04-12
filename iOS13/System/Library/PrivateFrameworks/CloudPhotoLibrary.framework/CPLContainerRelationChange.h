/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CPLRecordChange.h>

@class NSString, CPLContainerRelation;

@interface CPLContainerRelationChange : CPLRecordChange {

	NSString* _itemIdentifier;
	CPLContainerRelation* _relation;

}

@property (nonatomic,copy) NSString * itemIdentifier;                      //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,retain) CPLContainerRelation * relation;              //@synthesize relation=_relation - In the implementation block
+(id)relationToContainerWithIdentifier:(id)arg1 ;
+(id)relationWithItemScopedIdentifier:(id)arg1 containerIdentifier:(id)arg2 ;
+(id)relationWithItemIdentifier:(id)arg1 containerIdentifier:(id)arg2 ;
-(id)description;
-(NSString *)itemIdentifier;
-(void)setItemIdentifier:(NSString *)arg1 ;
-(CPLContainerRelation *)relation;
-(void)setRelation:(CPLContainerRelation *)arg1 ;
-(id)itemScopedIdentifier;
-(BOOL)supportsDeletion;
-(id)secondaryIdentifier;
-(void)setSecondaryIdentifier:(id)arg1 ;
-(BOOL)supportsDirectDeletion;
-(id)scopedIdentifiersForMapping;
-(id)translateToCloudChangeUsingIDMapping:(id)arg1 error:(id*)arg2 ;
-(id)translateToClientChangeUsingIDMapping:(id)arg1 error:(id*)arg2 ;
-(void)setItemScopedIdentifier:(id)arg1 ;
-(id)containerScopedIdentifier;
-(void)setContainerScopedIdentifier:(id)arg1 ;
-(id)relatedIdentifier;
-(void)setRelatedIdentifier:(id)arg1 ;
-(id)scopedIdentifierForQuarantine;
-(BOOL)validateFullRecord;
-(id)compactedChangeWithRelatedChanges:(id)arg1 isOnlyChange:(BOOL)arg2 fullRecord:(id)arg3 usingClientCache:(id)arg4 ;
@end

