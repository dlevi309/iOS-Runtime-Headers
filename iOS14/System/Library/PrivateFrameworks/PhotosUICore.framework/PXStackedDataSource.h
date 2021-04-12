/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXSectionedDataSource.h>

@class NSArray;

@interface PXStackedDataSource : PXSectionedDataSource {

	NSArray* _dataSections;

}

@property (nonatomic,readonly) NSArray * dataSections;              //@synthesize dataSections=_dataSections - In the implementation block
-(id)init;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(long long)numberOfSections;
-(id)objectAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2 ;
-(id)initWithDataSections:(id)arg1 ;
-(id)changeDetailsToDataSource:(id)arg1 sectionChanges:(id)arg2 itemChanges:(id)arg3 ;
-(NSArray *)dataSections;
@end

