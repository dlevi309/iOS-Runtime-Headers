/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol CPLLibraryManagerDelegate <NSObject>
@optional
-(void)libraryManagerDidChangeConfiguration:(id)arg1;
-(void)libraryManagerHasStatusChanges:(id)arg1;
-(id)displayableNameForLibraryManager:(id)arg1;
-(void)libraryManager:(id)arg1 provideLocalResource:(id)arg2 recordClass:(Class)arg3 completionHandler:(/*^block*/id)arg4;

@required
-(void)libraryManagerStatusDidChange:(id)arg1;
-(void)libraryManagerDidStartSynchronization:(id)arg1;
-(void)libraryManagerHasChangesToPull:(id)arg1;

@end

