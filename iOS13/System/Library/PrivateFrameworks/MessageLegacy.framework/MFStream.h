/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
*/

#import <libobjc.A.dylib/NSStreamDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@protocol OS_dispatch_queue;
@class NSInputStream, NSOutputStream, NSMutableDictionary, NSObject, NSError, NSCondition, NSString;

@interface MFStream : NSObject <NSStreamDelegate, NSURLSessionDelegate> {

	NSInputStream* _rStream;
	NSOutputStream* _wStream;
	NSMutableDictionary* _properties;
	/*^block*/id _callback;
	NSObject*<OS_dispatch_queue> _location;
	unsigned long long _capacity;
	unsigned long long _length;
	char* _buffer;
	NSError* _error;
	BOOL _streamCanRead;
	BOOL _streamCanWrite;
	BOOL _dispatchedBytesAvailable;
	unsigned long long _bytesRead;
	unsigned long long _bytesWritten;
	NSCondition* _condition;

}

@property (nonatomic,readonly) NSError * streamError;               //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) BOOL isOpen; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)networkThread;
+(void)setNetworkThread:(id)arg1 ;
+(id)_networkDispatchQueue;
-(void)dealloc;
-(void)close;
-(id)propertyForKey:(id)arg1 ;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(NSError *)streamError;
-(long long)read:(char*)arg1 maxLength:(unsigned long long)arg2 ;
-(long long)write:(const char*)arg1 maxLength:(unsigned long long)arg2 ;
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(BOOL)isOpen;
-(id)_copyPropertyForKey:(id)arg1 ;
-(void)_createPairWithSocketToHostName:(id)arg1 port:(long long)arg2 ;
-(void)_readBytesFromStream;
-(void)_closeAndReleaseStream:(id)arg1 logMessage:(id)arg2 ;
-(id)initCallBack:(/*^block*/id)arg1 onDispatchQueue:(id)arg2 ;
-(void)openToHostName:(id)arg1 port:(long long)arg2 ;
@end

