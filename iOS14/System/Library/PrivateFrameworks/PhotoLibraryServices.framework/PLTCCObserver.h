/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol OS_dispatch_queue;
@class NSObject, PLPhotoLibraryBundleController;

@interface PLTCCObserver : NSObject {

	NSObject*<OS_dispatch_queue> _observerQueue;
	PLPhotoLibraryBundleController* _libraryBundleController;

}
-(void)registerAsTCCObserver;
-(void)_handleTCCEvent:(unsigned long long)arg1 auth_record:(id)arg2 ;
-(id)_systemPhotoLibrary;
-(id)initWithLibraryBundleController:(id)arg1 ;
@end

