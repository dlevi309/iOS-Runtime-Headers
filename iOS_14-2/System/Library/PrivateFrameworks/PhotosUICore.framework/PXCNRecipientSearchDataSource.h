/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXRecipientSearchDataSource.h>

@class NSArray;

@interface PXCNRecipientSearchDataSource : PXRecipientSearchDataSource {

	NSArray* _searchResults;

}
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(long long)numberOfSections;
-(id)objectAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2 ;
-(id)initWithSearchResults:(id)arg1 ;
@end

