/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXNavigationListItem.h>

@class PHAssetCollection;

@interface PXNavigationListAssetCollectionItem : PXNavigationListItem {

	BOOL _draggable;
	BOOL _reorderable;
	BOOL _renamable;
	BOOL _deletable;
	PHAssetCollection* _collection;
	long long _indentationLevel;

}

@property (nonatomic,readonly) PHAssetCollection * collection;              //@synthesize collection=_collection - In the implementation block
@property (assign,nonatomic) long long indentationLevel;                    //@synthesize indentationLevel=_indentationLevel - In the implementation block
-(id)imageNameForIdentifier;
-(PHAssetCollection *)collection;
-(BOOL)isDraggable;
-(id)initWithAssetCollection:(id)arg1 itemCount:(long long)arg2 ;
-(BOOL)isRenamable;
-(id)cpAnalyticsEventName;
-(id)viewControllerForCollectionWithGridPresentation:(id)arg1 existingAssetsFetchResult:(id)arg2 ;
-(long long)indentationLevel;
-(BOOL)isReorderable;
-(BOOL)isDeletable;
-(void)setIndentationLevel:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)glyphImageName;
-(id)representedObject;
@end

