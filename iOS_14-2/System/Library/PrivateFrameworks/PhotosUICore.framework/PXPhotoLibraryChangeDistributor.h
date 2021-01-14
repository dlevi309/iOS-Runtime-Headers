/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/PHPhotoLibraryChangeObserver.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore, OS_dispatch_group;
@class PHPhotoLibrary, NSHashTable, NSObject, NSMutableSet, NSString;

@interface PXPhotoLibraryChangeDistributor : NSObject <PHPhotoLibraryChangeObserver> {

	PHPhotoLibrary* _photoLibrary;
	NSHashTable* _observers;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_semaphore> _changeDeliverySemaphore;
	NSObject*<OS_dispatch_group> _changePausingGroup;
	NSMutableSet* _changePausingTokens;

}

@property (getter=areChangesPaused,nonatomic,readonly) BOOL changesPaused; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)registerChangeObserver:(id)arg1 ;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(void)unregisterChangeObserver:(id)arg1 ;
-(void)endPausingChanges:(id)arg1 ;
-(id)beginPausingChangesWithTimeout:(double)arg1 ;
-(void)_notifyPausedStateChange;
-(void)photoLibraryDidChange:(id)arg1 ;
-(BOOL)areChangesPaused;
-(void)distributeChangeOnMainQueue:(id)arg1 ;
-(void)dealloc;
@end

