/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
*/


@protocol FPDFileCoordinationProviderDelegate
@required
-(id)_providedItemsOperationQueue;
-(id)_siblingDelegateForURL:(id)arg1;
-(void)_cancelProvidingItemAtURL:(id)arg1 toReaderWithID:(id)arg2;
-(void)_providedItemAtURL:(id)arg1 didGainPresenterWithID:(id)arg2;
-(id)_fileReactorID;
-(void)_providedItemAtURL:(id)arg1 withPresenterWithID:(id)arg2 didMoveToURL:(id)arg3;
-(void)_provideItemAtURL:(id)arg1 toReaderWithID:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)_writerWithID:(id)arg1 didFinishWritingForURL:(id)arg2;
-(void)_providedItemAtURL:(id)arg1 didLosePresenterWithID:(id)arg2;
-(id)_physicalURLForURL:(id)arg1;

@end

