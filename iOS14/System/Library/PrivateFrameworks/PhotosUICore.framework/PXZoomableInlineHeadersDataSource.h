/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXSectionedDataSource.h>

@class PXAssetsDataSource;

@interface PXZoomableInlineHeadersDataSource : PXSectionedDataSource {

	long long _numberOfSections;
	unsigned long long _level;
	unsigned long long _type;
	SCD_Struct_PX98* _sectionInfos;
	PXAssetsDataSource* _assetsDataSource;

}

@property (nonatomic,readonly) unsigned long long level;                           //@synthesize level=_level - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                            //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long numberOfSections;                         //@synthesize numberOfSections=_numberOfSections - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PX98* sectionInfos;                      //@synthesize sectionInfos=_sectionInfos - In the implementation block
@property (nonatomic,readonly) PXAssetsDataSource * assetsDataSource;              //@synthesize assetsDataSource=_assetsDataSource - In the implementation block
-(SCD_Struct_PX98*)sectionInfos;
-(long long)numberOfSections;
-(id)initWithAssetsDataSource:(id)arg1 level:(unsigned long long)arg2 metaDataStore:(id)arg3 ;
-(unsigned long long)level;
-(unsigned long long)type;
-(PXAssetsDataSource *)assetsDataSource;
-(void)dealloc;
@end

