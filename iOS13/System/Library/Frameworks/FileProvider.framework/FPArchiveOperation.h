/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <FileProvider/FPActionOperation.h>

@protocol OS_dispatch_queue;
@class NSArray, FPItemID, FPItem, NSObject, NSOperationQueue;

@interface FPArchiveOperation : FPActionOperation {

	NSArray* _items;
	FPItemID* _placeholderID;
	FPItem* _destinationFolder;
	NSObject*<OS_dispatch_queue> _queue;
	NSOperationQueue* _operationQueue;
	/*^block*/id _archiveCompletionBlock;

}

@property (nonatomic,copy) id archiveCompletionBlock;              //@synthesize archiveCompletionBlock=_archiveCompletionBlock - In the implementation block
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(void)_copyArchivedItemsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_coordinateArchivedItemsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_zipPathExtension;
-(void)_archiveURLs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_prepareItemsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)archiveCompletionBlock;
-(void)setArchiveCompletionBlock:(id)arg1 ;
-(id)initWithItems:(id)arg1 destinationFolder:(id)arg2 ;
-(void)actionMain;
-(void)presendNotifications;
-(void)didUnarchiveItemAtURL:(id)arg1 ;
@end

