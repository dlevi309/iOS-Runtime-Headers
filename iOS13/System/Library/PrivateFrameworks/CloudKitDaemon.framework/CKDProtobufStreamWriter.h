/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSData, NSInputStream, NSOutputStream, NSObject, NSFileHandle, NSString;

@interface CKDProtobufStreamWriter : NSObject <NSStreamDelegate> {

	NSMutableArray* _allObjects;
	NSData* _curData;
	unsigned long long _curDataPos;
	NSInputStream* _inputStream;
	NSOutputStream* _outputStream;
	z_stream_s* _zlibStream;
	BOOL _haveFlushedZlib;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	BOOL _shouldCompress;
	BOOL _hasInitedCompression;
	BOOL _haveFinishedCompression;
	BOOL _haveFinishedStreaming;
	unsigned long long _bufferSize;
	/*^block*/id _logRequestObjectBlock;
	NSFileHandle* _binaryLogFileHandle;

}

@property (assign,nonatomic) BOOL shouldCompress;                             //@synthesize shouldCompress=_shouldCompress - In the implementation block
@property (assign,nonatomic) BOOL hasInitedCompression;                       //@synthesize hasInitedCompression=_hasInitedCompression - In the implementation block
@property (assign,nonatomic) BOOL haveFinishedCompression;                    //@synthesize haveFinishedCompression=_haveFinishedCompression - In the implementation block
@property (assign) BOOL haveFinishedStreaming;                                //@synthesize haveFinishedStreaming=_haveFinishedStreaming - In the implementation block
@property (assign,nonatomic) unsigned long long bufferSize;                   //@synthesize bufferSize=_bufferSize - In the implementation block
@property (nonatomic,copy) id logRequestObjectBlock;                          //@synthesize logRequestObjectBlock=_logRequestObjectBlock - In the implementation block
@property (nonatomic,retain) NSFileHandle * binaryLogFileHandle;              //@synthesize binaryLogFileHandle=_binaryLogFileHandle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)open;
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(void)tearDown;
-(unsigned long long)bufferSize;
-(void)setBufferSize:(unsigned long long)arg1 ;
-(BOOL)shouldCompress;
-(id)_dataForMessage:(id)arg1 ;
-(void)setStreamedObjects:(id)arg1 ;
-(id)initWithCompression:(BOOL)arg1 ;
-(void)setLogRequestObjectBlock:(id)arg1 ;
-(void)_tearDownOutputStream;
-(void)setHaveFinishedStreaming:(BOOL)arg1 ;
-(BOOL)haveFinishedCompression;
-(void)setHaveFinishedCompression:(BOOL)arg1 ;
-(id)_compressBodyData:(id)arg1 shouldFlush:(BOOL)arg2 ;
-(long long)_streamNextObject:(id)arg1 ;
-(id)logRequestObjectBlock;
-(void)_prepareObjectForStreaming:(id)arg1 ;
-(long long)_writeDataToStream:(id)arg1 ;
-(BOOL)haveFinishedStreaming;
-(BOOL)_finishStreaming:(id)arg1 ;
-(void)setShouldCompress:(BOOL)arg1 ;
-(NSFileHandle *)binaryLogFileHandle;
-(void)setBinaryLogFileHandle:(NSFileHandle *)arg1 ;
-(BOOL)hasInitedCompression;
-(void)setHasInitedCompression:(BOOL)arg1 ;
@end

