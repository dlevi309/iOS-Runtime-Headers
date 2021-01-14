/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXNavigationListItem.h>

@class NSString, PHCollectionList;

@interface PXNavigationListCollectionListItem : PXNavigationListItem {

	BOOL _draggable;
	BOOL _reorderable;
	BOOL _renamable;
	BOOL _deletable;
	BOOL _expandable;
	BOOL _expanded;
	NSString* _glyphImageName;
	PHCollectionList* _collection;
	long long _indentationLevel;

}

@property (nonatomic,readonly) PHCollectionList * collection;              //@synthesize collection=_collection - In the implementation block
@property (assign,nonatomic) long long indentationLevel;                   //@synthesize indentationLevel=_indentationLevel - In the implementation block
@property (assign,getter=isExpanded,nonatomic) BOOL expanded;              //@synthesize expanded=_expanded - In the implementation block
-(void)setExpanded:(BOOL)arg1 ;
-(BOOL)isExpanded;
-(PHCollectionList *)collection;
-(BOOL)isDraggable;
-(BOOL)isRenamable;
-(id)cpAnalyticsEventName;
-(id)viewControllerForCollectionWithGridPresentation:(id)arg1 existingAssetsFetchResult:(id)arg2 ;
-(long long)indentationLevel;
-(id)initWithCollectionList:(id)arg1 itemCount:(long long)arg2 ;
-(BOOL)isExpandable;
-(BOOL)isReorderable;
-(BOOL)isDeletable;
-(void)setIndentationLevel:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)glyphImageName;
-(id)representedObject;
@end

