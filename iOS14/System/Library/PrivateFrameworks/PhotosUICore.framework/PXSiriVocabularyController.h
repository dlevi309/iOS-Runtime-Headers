/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/PHPhotoLibraryChangeObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, PHFetchResult, NSString;

@interface PXSiriVocabularyController : NSObject <PHPhotoLibraryChangeObserver> {

	BOOL _needsAlbumsVocabularyUpdate;
	BOOL _needsPeopleVocabularyUpdate;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	NSObject*<OS_dispatch_queue> _processingQueue;
	PHFetchResult* _albumFetchResult;
	PHFetchResult* _peopleFetchResult;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> propertyQueue;                //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> processingQueue;              //@synthesize processingQueue=_processingQueue - In the implementation block
@property (assign,nonatomic) BOOL needsAlbumsVocabularyUpdate;                          //@synthesize needsAlbumsVocabularyUpdate=_needsAlbumsVocabularyUpdate - In the implementation block
@property (assign,nonatomic) BOOL needsPeopleVocabularyUpdate;                          //@synthesize needsPeopleVocabularyUpdate=_needsPeopleVocabularyUpdate - In the implementation block
@property (nonatomic,retain) PHFetchResult * albumFetchResult;                          //@synthesize albumFetchResult=_albumFetchResult - In the implementation block
@property (nonatomic,retain) PHFetchResult * peopleFetchResult;                         //@synthesize peopleFetchResult=_peopleFetchResult - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(void)updateVocabulary;
-(void)setNeedsPeopleVocabularyUpdate:(BOOL)arg1 ;
-(id)init;
-(void)_onQueueUpdatePeopleVocabulary;
-(void)setNeedsAlbumsVocabularyUpdate:(BOOL)arg1 ;
-(PHFetchResult *)albumFetchResult;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(BOOL)needsAlbumsVocabularyUpdate;
-(void)photoLibraryDidChange:(id)arg1 ;
-(void)setPropertyQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)processingQueue;
-(void)setAlbumFetchResult:(PHFetchResult *)arg1 ;
-(BOOL)needsPeopleVocabularyUpdate;
-(void)_onQueueUpdateAlbumVocabulary;
-(PHFetchResult *)peopleFetchResult;
-(void)setPeopleFetchResult:(PHFetchResult *)arg1 ;
-(void)setProcessingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)_localizedTitlesForAssetCollectionFetchResult:(id)arg1 ;
-(void)dealloc;
@end

