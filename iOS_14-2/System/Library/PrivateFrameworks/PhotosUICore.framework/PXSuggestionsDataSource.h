/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXSectionedDataSource.h>

@protocol PXDisplaySuggestionFetchResult;
@interface PXSuggestionsDataSource : PXSectionedDataSource {

	id<PXDisplaySuggestionFetchResult> _suggestions;

}

@property (nonatomic,readonly) id<PXDisplaySuggestionFetchResult> suggestions;              //@synthesize suggestions=_suggestions - In the implementation block
-(id<PXDisplaySuggestionFetchResult>)suggestions;
-(id)init;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(long long)numberOfSections;
-(id)initWithSuggestionsFetchResult:(id)arg1 ;
-(id)objectAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2 ;
@end

