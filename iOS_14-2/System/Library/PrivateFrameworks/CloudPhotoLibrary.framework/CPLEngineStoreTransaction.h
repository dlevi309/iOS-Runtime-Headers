/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/


@class NSThread, NSMutableArray, CPLTransaction, NSError, NSString, CPLEngineWriteTransactionBlocker;

@interface CPLEngineStoreTransaction : NSObject {

	NSThread* _currentThread;
	BOOL _forWrite;
	NSMutableArray* _cleanupBlocks;
	CPLTransaction* _dirty;
	NSError* _error;
	NSString* _name;
	CPLEngineWriteTransactionBlocker* _blocker;

}

@property (nonatomic,retain) CPLEngineWriteTransactionBlocker * blocker;              //@synthesize blocker=_blocker - In the implementation block
@property (nonatomic,copy) NSError * error;                                           //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) NSString * name;                                           //@synthesize name=_name - In the implementation block
-(BOOL)do:(/*^block*/id)arg1 ;
-(BOOL)canRead;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(NSString *)name;
-(id)description;
-(CPLEngineWriteTransactionBlocker *)blocker;
-(void)setName:(NSString *)arg1 ;
-(BOOL)canWrite;
-(id)redactedDescription;
-(void)dealloc;
-(void)_transactionDidFinish;
-(void)_transactionWillBeginOnThread:(id)arg1 ;
-(void)_releaseDirty;
-(id)initForWrite:(BOOL)arg1 identifier:(id)arg2 description:(id)arg3 ;
-(BOOL)_forWrite;
-(void)addCleanupBlock:(/*^block*/id)arg1 ;
-(void)setBlocker:(CPLEngineWriteTransactionBlocker *)arg1 ;
@end

