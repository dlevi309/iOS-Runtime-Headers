/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class PLPhotoLibraryBundle, PLLazyObject;

@interface PLDatabaseContext : NSObject {

	PLPhotoLibraryBundle* _libraryBundle;
	PLLazyObject* _lazyHighPriorityTransientLibrary;
	PLLazyObject* _lazyLowPriorityTransientLibrary;
	PLLazyObject* _lazyCplLibrary;
	PLLazyObject* _lazyMomentLibrary;
	PLLazyObject* _lazyNonTransientLibrary;

}
-(void)dealloc;
-(void)invalidate;
-(void)perform:(/*^block*/id)arg1 ;
-(void)performTransaction:(/*^block*/id)arg1 ;
-(id)transientLibraryWithCurrentQoS;
-(id)initWithLibraryBundle:(id)arg1 ;
-(id)newHighPriorityTransientLibrary;
-(id)highPriorityTransientLibrary;
-(id)newLowPriorityTransientLibrary;
-(id)lowPriorityTransientLibrary;
-(void)performSync:(/*^block*/id)arg1 ;
-(void)performTransactionSync:(/*^block*/id)arg1 ;
-(id)newCplLibrary;
-(id)cplLibrary;
-(id)newMomentLibrary;
-(id)momentLibrary;
-(id)newNonTransientLibrary;
-(id)nonTransientLibrary;
@end

