/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
*/

#import <libobjc.A.dylib/NSFileProvider.h>

@protocol FPDFileCoordinationProviderDelegate;
@class NSURL, NSOperationQueue, NSString;

@interface FPDFileCoordinationProvider : NSObject <NSFileProvider> {

	NSURL* _providedItemsURL;
	id<FPDFileCoordinationProviderDelegate> _delegate;
	NSString* _extensionIdentifier;

}

@property (__weak) id<FPDFileCoordinationProviderDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (copy) NSString * extensionIdentifier;                                   //@synthesize extensionIdentifier=_extensionIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSURL * _providedItemsURL; 
@property (readonly) NSOperationQueue * _providedItemsOperationQueue; 
@property (copy,readonly) NSString * _fileReactorID; 
-(id<FPDFileCoordinationProviderDelegate>)delegate;
-(void)setDelegate:(id<FPDFileCoordinationProviderDelegate>)arg1 ;
-(NSString *)_fileReactorID;
-(void)_writerWithID:(id)arg1 didFinishWritingForURL:(id)arg2 ;
-(NSURL *)_providedItemsURL;
-(NSOperationQueue *)_providedItemsOperationQueue;
-(void)_provideItemAtURL:(id)arg1 toReaderWithID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_provideItemAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_cancelProvidingItemAtURL:(id)arg1 toReaderWithID:(id)arg2 ;
-(id)_physicalURLForURL:(id)arg1 ;
-(void)_providedItemAtURL:(id)arg1 didGainPresenterWithID:(id)arg2 ;
-(void)_providedItemAtURL:(id)arg1 didLosePresenterWithID:(id)arg2 ;
-(void)_providedItemAtURL:(id)arg1 withPresenterWithID:(id)arg2 didMoveToURL:(id)arg3 ;
-(NSString *)extensionIdentifier;
-(void)setExtensionIdentifier:(NSString *)arg1 ;
-(id)delegateForURL:(id)arg1 ;
-(id)initWithRootURL:(id)arg1 ;
@end

