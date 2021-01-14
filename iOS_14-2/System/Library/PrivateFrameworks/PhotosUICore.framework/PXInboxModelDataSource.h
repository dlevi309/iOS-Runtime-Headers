/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXSectionedDataSource.h>
#import <libobjc.A.dylib/PXInboxModelDataSourceBase.h>

@class NSArray, NSString;

@interface PXInboxModelDataSource : PXSectionedDataSource <PXInboxModelDataSourceBase> {

	NSArray* _models;

}

@property (nonatomic,copy,readonly) NSArray * models;               //@synthesize models=_models - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(long long)numberOfSections;
-(id)objectAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(NSArray *)models;
-(long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2 ;
-(id)modelAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(PXSimpleIndexPath)indexPathForModel:(id)arg1 ;
-(id)initWithModels:(id)arg1 ;
@end

