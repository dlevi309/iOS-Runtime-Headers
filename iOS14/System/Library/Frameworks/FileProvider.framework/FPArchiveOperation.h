/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_copyArchivedItemsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_coordinateArchivedItemsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_zipPathExtension;
-(void)actionMain;
-(void)_archiveURLs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_prepareItemsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)archiveCompletionBlock;
-(void)setArchiveCompletionBlock:(id)arg1 ;
-(id)initWithItems:(id)arg1 destinationFolder:(id)arg2 ;
-(void)presendNotifications;
-(void)didUnarchiveItemAtURL:(id)arg1 ;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
@end

