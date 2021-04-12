/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
*/

#import <CloudDocs/BROperation.h>
#import <libobjc.A.dylib/NSProgressReporting.h>

@class BRGlobalProgressProxy, NSMutableArray, NSOperationQueue, BRUploadAllFilesForLogOutOperation, NSString;

@interface BRDownloadAndUploadAllFilesForLogOutOperation : BROperation <NSProgressReporting> {

	BRGlobalProgressProxy* _progress;
	NSMutableArray* _fileCoordinators;
	/*^block*/id _downloadAllFilesCompletionBlock;
	NSOperationQueue* _internalQueue;
	BRUploadAllFilesForLogOutOperation* _uploadOp;

}

@property (retain) BRGlobalProgressProxy * progress;                //@synthesize progress=_progress - In the implementation block
@property (copy) id downloadAllFilesCompletionBlock;                //@synthesize downloadAllFilesCompletionBlock=_downloadAllFilesCompletionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BRGlobalProgressProxy *)progress;
-(id)init;
-(void)main;
-(id)downloadAllFilesCompletionBlock;
-(void)setDownloadAllFilesCompletionBlock:(id)arg1 ;
-(void)setProgress:(BRGlobalProgressProxy *)arg1 ;
-(void)cancel;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
@end

