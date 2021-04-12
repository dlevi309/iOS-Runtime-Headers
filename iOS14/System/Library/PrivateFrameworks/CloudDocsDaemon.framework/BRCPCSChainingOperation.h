/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	BOOL _syncDownBeforeRetry;
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
-(id)createActivity;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)initWithRootItem:(id)arg1 appLibrary:(id)arg2 ;
-(void)setShouldFillBatch:(BOOL)arg1 ;
-(void)setPcsChainCompletionBlock:(id)arg1 ;
-(void)_sendRecordBatch:(id)arg1 recursed:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_sendRecordBatch:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_buildRecordListWithCompletion:(/*^block*/id)arg1 ;
-(void)_chainRecords;
-(id)pcsChainCompletionBlock;
-(BOOL)shouldFillBatch;
@end

