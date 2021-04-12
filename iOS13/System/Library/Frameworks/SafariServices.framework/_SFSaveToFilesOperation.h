/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <UIKit/UIDocumentPickerDelegate.h>
#import <libobjc.A.dylib/_SFDownloadPlaceholderImporter.h>

@protocol _SFSaveToFilesOperationDelegate;
@class _SFActivityItemProviderCollection, NSString, UIDocumentPickerViewController, _SFDownload;

@interface _SFSaveToFilesOperation : NSObject <UIDocumentPickerDelegate, _SFDownloadPlaceholderImporter> {

	_SFActivityItemProviderCollection* _collection;
	NSString* _containerDirectoryPath;
	UIDocumentPickerViewController* _documentPickerViewController;
	/*^block*/id _downloadPlaceholderCompletionHandler;
	/*^block*/id _prepareDownloadPlaceholderHandler;
	_SFDownload* _download;
	id<_SFSaveToFilesOperationDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_SFSaveToFilesOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<_SFSaveToFilesOperationDelegate>)delegate;
-(void)setDelegate:(id<_SFSaveToFilesOperationDelegate>)arg1 ;
-(void)start;
-(void)documentPickerWasCancelled:(id)arg1 ;
-(void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2 ;
-(id)initWithActivityItemProviderCollection:(id)arg1 ;
-(void)_showDocumentPickerForFileURL:(id)arg1 sourceURL:(id)arg2 ;
-(void)_finishWithURL:(id)arg1 ;
-(void)_copyFileData:(/*^block*/id)arg1 ;
-(id)_suggestedFilenameFromWebView;
-(id)_temporaryFileWithName:(id)arg1 ;
-(void)importPlaceholderForDownload:(id)arg1 fromURL:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

