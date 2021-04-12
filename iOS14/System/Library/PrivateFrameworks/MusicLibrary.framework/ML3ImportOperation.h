/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <Foundation/NSOperation.h>

@class ML3ServiceDatabaseImport, NSError, NSData;

@interface ML3ImportOperation : NSOperation {

	/*^block*/id _clientCompletionHandler;
	BOOL _suspended;
	BOOL _success;
	float _progress;
	ML3ServiceDatabaseImport* _import;
	/*^block*/id _progressBlock;
	NSError* _error;
	NSData* _returnData;

}

@property (nonatomic,readonly) unsigned long long importSource; 
@property (nonatomic,readonly) ML3ServiceDatabaseImport * import;              //@synthesize import=_import - In the implementation block
@property (assign,getter=isSuspended,nonatomic) BOOL suspended;                //@synthesize suspended=_suspended - In the implementation block
@property (nonatomic,readonly) float progress;                                 //@synthesize progress=_progress - In the implementation block
@property (nonatomic,copy) id progressBlock;                                   //@synthesize progressBlock=_progressBlock - In the implementation block
@property (nonatomic,readonly) BOOL success;                                   //@synthesize success=_success - In the implementation block
@property (nonatomic,readonly) NSError * error;                                //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSData * returnData;                            //@synthesize returnData=_returnData - In the implementation block
+(id)importOperationWithSourceType:(unsigned long long)arg1 databaseImport:(id)arg2 ;
-(BOOL)success;
-(void)setSuccess:(BOOL)arg1 ;
-(void)setProgressBlock:(id)arg1 ;
-(BOOL)isSuspended;
-(float)progress;
-(id)init;
-(void)setSuspended:(BOOL)arg1 ;
-(/*^block*/id)_clientCompletionHandler;
-(ML3ServiceDatabaseImport *)import;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(id)longDescription;
-(void)main;
-(id)progressBlock;
-(unsigned long long)importSource;
-(void)setProgress:(float)arg1 ;
-(void)_writerTransactionWithBlock:(/*^block*/id)arg1 ;
-(id)initWithDatabaseImport:(id)arg1 ;
-(void)setReturnData:(NSData *)arg1 ;
-(void)_setClientCompletionHandler:(/*^block*/id)arg1 ;
-(NSData *)returnData;
@end

