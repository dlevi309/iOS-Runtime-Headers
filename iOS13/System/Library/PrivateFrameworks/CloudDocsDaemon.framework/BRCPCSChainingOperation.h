/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/_BRCOperation.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@class BRCAppLibrary, BRCServerItem, NSString;

@interface BRCPCSChainingOperation : _BRCOperation <BRCOperationSubclass> {

	BRCAppLibrary* _appLibrary;
	BRCServerItem* _rootItem;
	BOOL _completed;
	unsigned long long _batchSize;
	int _tryCount;
	unsigned long long _chainedRecordsCount;
	BOOL _shouldFillBatch;
	/*^block*/id _pcsChainCompletionBlock;

}

@property (nonatomic,copy) id pcsChainCompletionBlock;              //@synthesize pcsChainCompletionBlock=_pcsChainCompletionBlock - In the implementation block
@property (assign,nonatomic) BOOL shouldFillBatch;                  //@synthesize shouldFillBatch=_shouldFillBatch - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(id)createActivity;
-(id)initWithRootItem:(id)arg1 appLibrary:(id)arg2 ;
-(void)setShouldFillBatch:(BOOL)arg1 ;
-(void)setPcsChainCompletionBlock:(id)arg1 ;
-(void)_sendRecordBatch:(id)arg1 recursed:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_sendRecordBatch:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_buildRecordListWithCompletion:(/*^block*/id)arg1 ;
-(id)pcsChainCompletionBlock;
-(BOOL)shouldFillBatch;
@end

