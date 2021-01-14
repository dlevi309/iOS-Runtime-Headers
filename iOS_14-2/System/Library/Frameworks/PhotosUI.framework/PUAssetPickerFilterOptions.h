/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol PUPickerFilter;
@class NSPredicate, NSIndexSet;

@interface PUAssetPickerFilterOptions : NSObject {

	id<PUPickerFilter> _selectionFilter;
	unsigned long long _genericAssetTypes;
	NSPredicate* _selectionFilterAssetFetchPredicate;
	NSIndexSet* _includedItems;

}

@property (nonatomic,readonly) NSPredicate * selectionFilterAssetFetchPredicate;              //@synthesize selectionFilterAssetFetchPredicate=_selectionFilterAssetFetchPredicate - In the implementation block
@property (nonatomic,readonly) NSIndexSet * includedItems;                                    //@synthesize includedItems=_includedItems - In the implementation block
@property (nonatomic,readonly) id<PUPickerFilter> selectionFilter;                            //@synthesize selectionFilter=_selectionFilter - In the implementation block
@property (nonatomic,readonly) unsigned long long genericAssetTypes;                          //@synthesize genericAssetTypes=_genericAssetTypes - In the implementation block
-(id)init;
-(id)initWithMediaTypes:(id)arg1 ;
-(BOOL)isIncluded:(unsigned long long)arg1 ;
-(id)initWithIncludedItems:(id)arg1 ;
-(id)initWithSelectionFilter:(id)arg1 ;
-(id)predicateForAssetFetch;
-(id)predicateForAlbumFetch;
-(id<PUPickerFilter>)selectionFilter;
-(unsigned long long)genericAssetTypes;
-(NSPredicate *)selectionFilterAssetFetchPredicate;
-(NSIndexSet *)includedItems;
@end

