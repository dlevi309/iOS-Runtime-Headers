/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol CPLLibraryManagerDelegate <NSObject>
@optional
-(void)libraryManagerHasStatusChanges:(id)arg1;
-(void)libraryManagerDidChangeConfiguration:(id)arg1;
-(id)displayableNameForLibraryManager:(id)arg1;
-(void)libraryManager:(id)arg1 provideLocalResource:(id)arg2 recordClass:(Class)arg3 completionHandler:(/*^block*/id)arg4;
-(void)libraryManager:(id)arg1 pushAllChangesWithCompletionHandler:(/*^block*/id)arg2;

@required
-(void)libraryManagerDidStartSynchronization:(id)arg1;
-(void)libraryManagerStatusDidChange:(id)arg1;
-(void)libraryManagerHasChangesToPull:(id)arg1;

@end

