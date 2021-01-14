/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXDataSectionManager.h>
#import <libobjc.A.dylib/PXImportSourcesManagerChangeObserver.h>

@class PHPhotoLibrary, PXImportSourcesManager, NSArray, NSString;

@interface PXImportSourceDataSectionManager : PXDataSectionManager <PXImportSourcesManagerChangeObserver> {

	PHPhotoLibrary* _photoLibrary;
	PXImportSourcesManager* _importSourcesManager;
	NSArray* _importSources;

}

@property (nonatomic,readonly) PXImportSourcesManager * importSourcesManager;              //@synthesize importSourcesManager=_importSourcesManager - In the implementation block
@property (nonatomic,retain) NSArray * importSources;                                      //@synthesize importSources=_importSources - In the implementation block
@property (nonatomic,readonly) PHPhotoLibrary * photoLibrary;                              //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPhotoLibrary:(id)arg1 ;
-(PHPhotoLibrary *)photoLibrary;
-(NSArray *)importSources;
-(id)createDataSection;
-(void)importSourcesManager:(id)arg1 didUpdateImportSource:(id)arg2 ;
-(PXImportSourcesManager *)importSourcesManager;
-(void)setImportSources:(NSArray *)arg1 ;
-(id)auxiliaryObjectForKey:(id)arg1 dataSectionObject:(id)arg2 hintIndex:(long long)arg3 ;
-(id)initWithChildDataSectionManagers:(id)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

