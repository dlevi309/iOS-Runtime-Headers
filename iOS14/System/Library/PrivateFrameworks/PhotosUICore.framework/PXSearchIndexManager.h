/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class PHPhotoLibrary, PSIDatabase, PLSearchMetadataStore, NSTimer;

@interface PXSearchIndexManager : NSObject {

	PHPhotoLibrary* _photoLibrary;
	PSIDatabase* _searchIndex;
	PLSearchMetadataStore* _searchMetadataStore;
	NSTimer* _searchIndexStatusTimer;

}

@property (nonatomic,readonly) PLSearchMetadataStore * searchMetadataStore;              //@synthesize searchMetadataStore=_searchMetadataStore - In the implementation block
@property (nonatomic,retain) NSTimer * searchIndexStatusTimer;                           //@synthesize searchIndexStatusTimer=_searchIndexStatusTimer - In the implementation block
@property (nonatomic,readonly) PHPhotoLibrary * photoLibrary;                            //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (nonatomic,readonly) PSIDatabase * searchIndex;                                //@synthesize searchIndex=_searchIndex - In the implementation block
-(id)initWithPhotoLibrary:(id)arg1 ;
-(id)init;
-(PHPhotoLibrary *)photoLibrary;
-(void)_openSearchIndexWithCompletion:(/*^block*/id)arg1 ;
-(void)startMonitoringSearchIndexStatus;
-(PSIDatabase *)searchIndex;
-(void)stopMonitoringSearchIndexStatus;
-(PLSearchMetadataStore *)searchMetadataStore;
-(NSTimer *)searchIndexStatusTimer;
-(void)setSearchIndexStatusTimer:(NSTimer *)arg1 ;
@end

