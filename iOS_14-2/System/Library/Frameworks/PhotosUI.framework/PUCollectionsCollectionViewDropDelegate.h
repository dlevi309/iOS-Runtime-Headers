/*
* Generated on Thursday, January 14, 2021 at 2:22:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <UIKit/UICollectionViewDropDelegate.h>

@protocol PUCollectionsCollectionViewDropDataProvider;
@class NSString;

@interface PUCollectionsCollectionViewDropDelegate : NSObject <UICollectionViewDropDelegate> {

	BOOL _dataProviderImplementsAllowDrop;
	id<PUCollectionsCollectionViewDropDataProvider> _dropDataProvider;

}

@property (assign,nonatomic,__weak) id<PUCollectionsCollectionViewDropDataProvider> dropDataProvider;              //@synthesize dropDataProvider=_dropDataProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)collectionView:(id)arg1 canHandleDropSesson:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldSpringLoadItemAtIndexPath:(id)arg2 withContext:(id)arg3 ;
-(void)collectionView:(id)arg1 performDropWithCoordinator:(id)arg2 ;
-(void)setDropDataProvider:(id<PUCollectionsCollectionViewDropDataProvider>)arg1 ;
-(id)_collectionAtIndexPath:(id)arg1 ;
-(void)_handleDrop:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(id<PUCollectionsCollectionViewDropDataProvider>)dropDataProvider;
-(id)collectionView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3 ;
-(BOOL)_canHandleDropSession:(id)arg1 ;
-(BOOL)_allowDrop;
@end

