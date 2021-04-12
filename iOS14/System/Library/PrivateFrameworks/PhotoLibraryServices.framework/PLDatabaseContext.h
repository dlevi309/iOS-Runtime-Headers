/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)performTransaction:(/*^block*/id)arg1 ;
-(id)momentLibrary;
-(id)nonTransientLibrary;
-(id)newMomentLibrary;
-(id)newCplLibrary;
-(void)performTransactionSync:(/*^block*/id)arg1 ;
-(void)perform:(/*^block*/id)arg1 ;
-(id)lowPriorityTransientLibrary;
-(id)initWithLibraryBundle:(id)arg1 ;
-(id)transientLibraryWithCurrentQoS;
-(id)highPriorityTransientLibrary;
-(id)newLowPriorityTransientLibrary;
-(void)invalidate;
-(id)cplLibrary;
-(id)newHighPriorityTransientLibrary;
-(void)performSync:(/*^block*/id)arg1 ;
-(id)newNonTransientLibrary;
-(void)dealloc;
@end

