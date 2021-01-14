/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(BOOL)shouldReallyQuarantineRecord;
-(NSString *)itemIdentifier;
-(id)itemScopedIdentifier;
-(void)setItemIdentifier:(NSString *)arg1 ;
-(BOOL)supportsDeletion;
-(id)description;
-(void)setRelation:(CPLContainerRelation *)arg1 ;
-(CPLContainerRelation *)relation;
-(BOOL)supportsDirectDeletion;
-(id)scopedIdentifiersForMapping;
-(id)translateToCloudChangeUsingIDMapping:(id)arg1 error:(id*)arg2 ;
-(id)translateToClientChangeUsingIDMapping:(id)arg1 error:(id*)arg2 ;
-(id)compactedChangeWithRelatedChanges:(id)arg1 isOnlyChange:(BOOL)arg2 fullRecord:(id)arg3 usingStorageView:(id)arg4 ;
-(void)setItemScopedIdentifier:(id)arg1 ;
-(id)containerScopedIdentifier;
-(void)setContainerScopedIdentifier:(id)arg1 ;
-(id)relatedIdentifier;
-(void)setRelatedIdentifier:(id)arg1 ;
-(id)secondaryIdentifier;
-(void)setSecondaryIdentifier:(id)arg1 ;
-(BOOL)validateFullRecord;
@end

