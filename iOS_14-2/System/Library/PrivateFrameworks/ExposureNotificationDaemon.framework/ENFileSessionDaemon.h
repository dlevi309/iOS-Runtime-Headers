/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
*/


@protocol OS_xpc_object, OS_os_transaction;
@class ENArchive, NSObject, NSData, ENFile;

@interface ENFileSessionDaemon : NSObject {

	ENArchive* _archive;
	NSObject*<OS_xpc_object> _nextTEKBatch;
	NSData* _signatureData;
	NSObject*<OS_os_transaction> _transaction;
	unsigned _flags;
	unsigned long long _batchSize;
	ENFile* _file;
	unsigned long long _invalidKeyCount;

}

@property (assign,nonatomic) unsigned long long batchSize;                      //@synthesize batchSize=_batchSize - In the implementation block
@property (nonatomic,readonly) ENFile * file;                                   //@synthesize file=_file - In the implementation block
@property (assign,nonatomic) unsigned flags;                                    //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) unsigned long long invalidKeyCount;              //@synthesize invalidKeyCount=_invalidKeyCount - In the implementation block
-(void)setBatchSize:(unsigned long long)arg1 ;
-(ENFile *)file;
-(unsigned long long)batchSize;
-(id)init;
-(unsigned)flags;
-(void)setFlags:(unsigned)arg1 ;
-(void)invalidate;
-(void)dealloc;
-(void)_createTransaction;
-(id)readTEKBatchAndReturnError:(id*)arg1 ;
-(unsigned long long)invalidKeyCount;
-(BOOL)activateWithArchiveFD:(int)arg1 error:(id*)arg2 ;
-(BOOL)activateWithFileFD:(int)arg1 signatureData:(id)arg2 error:(id*)arg3 ;
-(id)readSignaturesAndReturnError:(id*)arg1 ;
-(void)prepareNextTEKBatchIfNecessary;
-(BOOL)_advanceArchive:(id)arg1 toPathWithExtension:(id)arg2 error:(id*)arg3 ;
-(id)_readTEKBatchAndReturnError:(id*)arg1 ;
@end

