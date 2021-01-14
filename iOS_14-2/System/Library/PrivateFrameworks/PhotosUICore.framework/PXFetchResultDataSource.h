/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXSectionedDataSource.h>

@class PHFetchResult;

@interface PXFetchResultDataSource : PXSectionedDataSource {

	PHFetchResult* _fetchResult;

}

@property (nonatomic,readonly) PHFetchResult * fetchResult;              //@synthesize fetchResult=_fetchResult - In the implementation block
-(PHFetchResult *)fetchResult;
-(id)init;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(id)objectsInIndexPath:(PXSimpleIndexPath)arg1 ;
-(long long)numberOfSections;
-(id)objectAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(id)initWithFetchResult:(id)arg1 ;
-(long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2 ;
@end

