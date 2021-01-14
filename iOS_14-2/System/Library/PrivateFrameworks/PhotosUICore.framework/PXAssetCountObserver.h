/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/PXPhotoLibraryUIChangeObserver.h>

@protocol OS_dispatch_queue, PXAssetCountObserverDelegate;
@class PHPhotoLibrary, NSObject, PHFetchResult, NSString;

@interface PXAssetCountObserver : NSObject <PXPhotoLibraryUIChangeObserver> {

	PHPhotoLibrary* _photoLibrary;
	unsigned long long _numberOfAssets;
	NSObject*<OS_dispatch_queue> _serialQueue;
	id<PXAssetCountObserverDelegate> _delegate;
	PHFetchResult* _fetchResult;

}

@property (nonatomic,retain) PHFetchResult * fetchResult;                                   //@synthesize fetchResult=_fetchResult - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfAssets;                             //@synthesize numberOfAssets=_numberOfAssets - In the implementation block
@property (assign,nonatomic,__weak) id<PXAssetCountObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PHFetchResult *)fetchResult;
-(void)setNumberOfAssets:(unsigned long long)arg1 ;
-(id)init;
-(id<PXAssetCountObserverDelegate>)delegate;
-(id)_fetchOptions;
-(id)initWithPhotoLibrary:(id)arg1 qosClass:(unsigned)arg2 ;
-(void)observeReferencedAssets;
-(void)observeInternalFetchPredicate:(id)arg1 ;
-(void)_serialQueue_observeReferencedAssets;
-(void)_serialQueue_observeInternalFetchPredicate:(id)arg1 ;
-(void)setDelegate:(id<PXAssetCountObserverDelegate>)arg1 ;
-(id)prepareForPhotoLibraryChange:(id)arg1 ;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2 ;
-(void)setFetchResult:(PHFetchResult *)arg1 ;
-(unsigned long long)numberOfAssets;
@end

