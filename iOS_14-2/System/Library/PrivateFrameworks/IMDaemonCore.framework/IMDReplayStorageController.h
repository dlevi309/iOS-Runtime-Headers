/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/


@class NSString, IDSKVStore;

@interface IMDReplayStorageController : NSObject {

	NSString* _filePath;
	IDSKVStore* _store;

}

@property (nonatomic,retain) IDSKVStore * store;                        //@synthesize store=_store - In the implementation block
@property (nonatomic,retain,readonly) NSString * filePath;              //@synthesize filePath=_filePath - In the implementation block
-(NSString *)filePath;
-(void)setStore:(IDSKVStore *)arg1 ;
-(IDSKVStore *)store;
-(id)initWithFilePath:(id)arg1 ;
-(void)dealloc;
-(BOOL)storeDictionary:(id)arg1 error:(id*)arg2 ;
-(id)copyNextBatchWithSize:(unsigned long long)arg1 iterationContext:(id*)arg2 ;
-(void)deleteReplayDB;
@end

