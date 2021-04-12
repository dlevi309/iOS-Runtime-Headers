/*
* Generated on Thursday, January 14, 2021 at 2:27:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface ATSocket : NSObject <NSSecureCoding> {

	NSObject*<OS_dispatch_source> _source;
	NSMutableArray* _delegates;
	char _readBuffer[65536];
	char* _writeBuffer;
	unsigned _writeBufferOffset;
	unsigned long long _totalBytesSent;
	unsigned long long _totalBytesReceived;
	int _descriptor;
	int _transportUpdgradeExceptionCount;
	unsigned _writeBufferSize;
	long long _socketMode;
	unsigned long long _suggestedBufferSize;
	NSObject*<OS_dispatch_queue> _queue;
	id _userInfo;

}

@property (assign,nonatomic) long long socketMode;                                //@synthesize socketMode=_socketMode - In the implementation block
@property (assign,nonatomic) unsigned long long suggestedBufferSize;              //@synthesize suggestedBufferSize=_suggestedBufferSize - In the implementation block
@property (assign,nonatomic) int descriptor;                                      //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) id userInfo;                                         //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,readonly) int transportUpdgradeExceptionCount;               //@synthesize transportUpdgradeExceptionCount=_transportUpdgradeExceptionCount - In the implementation block
@property (assign,nonatomic) unsigned writeBufferSize;                            //@synthesize writeBufferSize=_writeBufferSize - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)createBoundPair:(id)arg1 ;
-(void)setUserInfo:(id)arg1 ;
-(id)flush;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(id)userInfo;
-(BOOL)open;
-(id)init;
-(BOOL)isOpen;
-(BOOL)writeAllData:(id)arg1 error:(id*)arg2 ;
-(void)close;
-(void)encodeWithCoder:(id)arg1 ;
-(int)descriptor;
-(void)writeData:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setDescriptor:(int)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_flush;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)dealloc;
-(void)setWriteBufferSize:(unsigned)arg1 ;
-(void)addTransportUpgradeException;
-(int)transportUpdgradeExceptionCount;
-(void)removeTransportUpgradeException;
-(void)closeDescriptor;
-(long long)socketMode;
-(void)notifySocketDidClose;
-(int)send:(const char*)arg1 offset:(unsigned)arg2 len:(unsigned)arg3 error:(id*)arg4 ;
-(void)notifyHasDataAvailable:(const char*)arg1 length:(long long)arg2 ;
-(int)recv:(char*)arg1 offset:(unsigned)arg2 len:(unsigned)arg3 error:(id*)arg4 ;
-(void)setSocketMode:(long long)arg1 ;
-(int)_send:(const char*)arg1 offset:(unsigned)arg2 len:(unsigned)arg3 error:(id*)arg4 ;
-(unsigned long long)suggestedBufferSize;
-(void)setSuggestedBufferSize:(unsigned long long)arg1 ;
-(unsigned)writeBufferSize;
@end

