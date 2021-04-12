/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
*/


@protocol FPDFileCoordinationProviderDelegate
@required
-(id)_fileReactorID;
-(void)_writerWithID:(id)arg1 didFinishWritingForURL:(id)arg2;
-(id)_providedItemsOperationQueue;
-(void)_provideItemAtURL:(id)arg1 toReaderWithID:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)_cancelProvidingItemAtURL:(id)arg1 toReaderWithID:(id)arg2;
-(id)_physicalURLForURL:(id)arg1;
-(void)_providedItemAtURL:(id)arg1 didGainPresenterWithID:(id)arg2;
-(void)_providedItemAtURL:(id)arg1 didLosePresenterWithID:(id)arg2;
-(void)_providedItemAtURL:(id)arg1 withPresenterWithID:(id)arg2 didMoveToURL:(id)arg3;
-(id)_siblingDelegateForURL:(id)arg1;

@end

