/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
*/

#import <libobjc.A.dylib/PHPhotoLibraryChangeObserver.h>

@protocol OS_dispatch_queue;
@class NSArray, PHPhotoLibrary, PXPlacesStore, NSMutableArray, NSObject, NSString;

@interface PXPlacesPhotoAssetsStore : NSObject <PHPhotoLibraryChangeObserver> {

	BOOL _didInitiateLoad;
	BOOL _didCompleteLoad;
	NSArray* _fetchResults;
	PHPhotoLibrary* _photoLibrary;
	PXPlacesStore* _store;
	NSMutableArray* _completions;
	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (nonatomic,retain) NSArray * fetchResults;                                //@synthesize fetchResults=_fetchResults - In the implementation block
@property (nonatomic,retain) PHPhotoLibrary * photoLibrary;                         //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (nonatomic,retain) PXPlacesStore * store;                                 //@synthesize store=_store - In the implementation block
@property (assign,nonatomic) BOOL didInitiateLoad;                                  //@synthesize didInitiateLoad=_didInitiateLoad - In the implementation block
@property (assign,nonatomic) BOOL didCompleteLoad;                                  //@synthesize didCompleteLoad=_didCompleteLoad - In the implementation block
@property (nonatomic,retain) NSMutableArray * completions;                          //@synthesize completions=_completions - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;              //@synthesize serialQueue=_serialQueue - In the implementation block
@property (readonly) id<PXPlacesGeotaggedItemDataSource> dataSource; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(PXPlacesStore *)store;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(NSMutableArray *)completions;
-(void)setCompletions:(NSMutableArray *)arg1 ;
-(void)setStore:(PXPlacesStore *)arg1 ;
-(id<PXPlacesGeotaggedItemDataSource>)dataSource;
-(PHPhotoLibrary *)photoLibrary;
-(void)setPhotoLibrary:(PHPhotoLibrary *)arg1 ;
-(void)photoLibraryDidChange:(id)arg1 ;
-(NSArray *)fetchResults;
-(void)setFetchResults:(NSArray *)arg1 ;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)loadWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithFetchResults:(id)arg1 ;
-(void)_handleAssetsImport;
-(void)_addItems:(id)arg1 intoStore:(id)arg2 ;
-(BOOL)didInitiateLoad;
-(void)setDidInitiateLoad:(BOOL)arg1 ;
-(BOOL)didCompleteLoad;
-(void)setDidCompleteLoad:(BOOL)arg1 ;
@end

