/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXInboxModelDataSourceManager.h>
#import <libobjc.A.dylib/PXInboxProviderSource.h>
#import <libobjc.A.dylib/PXInboxModelTitleProvider.h>

@class NSArray, PXSampleInboxMediaProvider, NSString;

@interface PXSampleInboxDataSourceManager : PXInboxModelDataSourceManager <PXInboxProviderSource, PXInboxModelTitleProvider> {

	NSArray* _mockedModels;
	PXSampleInboxMediaProvider* _sampleMediaProvider;

}

@property (nonatomic,retain) NSArray * mockedModels;                                                                   //@synthesize mockedModels=_mockedModels - In the implementation block
@property (nonatomic,retain) PXSampleInboxMediaProvider * sampleMediaProvider;                                         //@synthesize sampleMediaProvider=_sampleMediaProvider - In the implementation block
@property (nonatomic,readonly) id<PXInboxModelDetailViewControllerProvider> detailViewControllerProvider; 
@property (nonatomic,readonly) id<PXInboxModelMediaProvider> mediaProvider; 
@property (nonatomic,readonly) id<PXInboxModelTitleProvider> titleProvider; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PXInboxModelMediaProvider>)mediaProvider;
-(id)createInitialDataSource;
-(void)requestTitleAndSubtitleForModel:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id<PXInboxModelDetailViewControllerProvider>)detailViewControllerProvider;
-(void)_generateModels;
-(id)_modelElements;
-(void)_changeData;
-(id)providerSource;
-(id)titleForModel:(id)arg1 ;
-(id)subtitleForModel:(id)arg1 ;
-(NSArray *)mockedModels;
-(void)setMockedModels:(NSArray *)arg1 ;
-(PXSampleInboxMediaProvider *)sampleMediaProvider;
-(void)setSampleMediaProvider:(PXSampleInboxMediaProvider *)arg1 ;
-(void)_updateDataSource;
-(id)init;
-(id<PXInboxModelTitleProvider>)titleProvider;
-(id)_dataSourceSnapshot;
@end

