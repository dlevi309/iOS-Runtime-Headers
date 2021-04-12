/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXDataSectionManager.h>
#import <libobjc.A.dylib/PXCollectionFetchOperationDelegate.h>
#import <libobjc.A.dylib/PXPhotoLibraryUIChangeObserver.h>
#import <libobjc.A.dylib/PXDataSectionManagerEnabling.h>

@protocol PXNavigationListItem;
@class PHCollection, NSOperationQueue, PHFetchResult, NSString;

@interface PXNavigationListItemDataSectionManager : PXDataSectionManager <PXCollectionFetchOperationDelegate, PXPhotoLibraryUIChangeObserver, PXDataSectionManagerEnabling> {

	BOOL _enabled;
	BOOL _hiddenWhenEmpty;
	PHCollection* _collection;
	NSOperationQueue* _workQueue;
	id<PXNavigationListItem> _listItem;
	PHFetchResult* _fetchResult;

}

@property (nonatomic,retain) PHFetchResult * fetchResult;                                      //@synthesize fetchResult=_fetchResult - In the implementation block
@property (getter=isCollectionEmpty,nonatomic,readonly) BOOL collectionEmpty; 
@property (getter=isCollectionVisible,nonatomic,readonly) BOOL collectionVisible; 
@property (nonatomic,readonly) PHCollection * collection;                                      //@synthesize collection=_collection - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * workQueue;                                   //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) id<PXNavigationListItem> listItem;                              //@synthesize listItem=_listItem - In the implementation block
@property (assign,getter=isHiddenWhenEmpty,nonatomic) BOOL hiddenWhenEmpty;                    //@synthesize hiddenWhenEmpty=_hiddenWhenEmpty - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                    //@synthesize enabled=_enabled - In the implementation block
-(PHFetchResult *)fetchResult;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg1 ;
-(NSOperationQueue *)workQueue;
-(PHCollection *)collection;
-(BOOL)isCollectionEmpty;
-(BOOL)isCollectionVisible;
-(void)updateDataSectionIfNecessary;
-(BOOL)isHiddenWhenEmpty;
-(void)setEnabled:(BOOL)arg1 ;
-(NSString *)description;
-(id)createDataSection;
-(BOOL)allowsEmptyDataSection;
-(id)initWithItem:(id)arg1 ;
-(id<PXNavigationListItem>)listItem;
-(void)setFetchResult:(PHFetchResult *)arg1 ;
-(void)setHiddenWhenEmpty:(BOOL)arg1 ;
-(id)initWithCollection:(id)arg1 workQueue:(id)arg2 ;
-(BOOL)isEnabled;
-(void)collectionFetchOperationDidComplete:(id)arg1 ;
-(id)initWithChildDataSectionManagers:(id)arg1 ;
@end

