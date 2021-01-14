/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@class PXAssetsDataSource;

@interface PXZoomableInlineHeaderSectionInfoMetaDataStore : NSObject {

	/*function pointer*/void** _sectionInfosByLevel[2];
	long long _sectionsCountByLevel[2];
	long long _sectionsCapacityByLevel[2];
	PXAssetsDataSource* _dataSource;

}

@property (nonatomic,readonly) PXAssetsDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(void)_resizeStorageIfNeededForNumberOfSections:(long long)arg1 level:(unsigned long long)arg2 ;
-(void)addSectionInfo:(SCD_Struct_PX98)arg1 forLevel:(unsigned long long)arg2 ;
-(id)initWithDataSource:(id)arg1 ;
-(PXAssetsDataSource *)dataSource;
-(id)description;
-(BOOL)updateWithDataSourceAfterChanges:(id)arg1 changeDetails:(id)arg2 ;
-(const SCD_Struct_PX98*)sectionInfosForLevel:(unsigned long long)arg1 ;
-(void)resetSectionInfos;
-(long long)numberOfSectionInfosForLevel:(unsigned long long)arg1 ;
-(void)dealloc;
@end

