/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

#import <libobjc.A.dylib/NSStreamDelegate.h>
#import <libobjc.A.dylib/_SYStreamPropertyProxying.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class SYCompressedFileOutputStream, NSMutableArray, NSObject, NSString;

@interface _SYOutputStreamer : NSObject <NSStreamDelegate, _SYStreamPropertyProxying> {

	SYCompressedFileOutputStream* _stream;
	NSMutableArray* _items;
	/*^block*/id _onComplete;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _source;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	BOOL _hasWrittenData;

}

@property (nonatomic,readonly) BOOL hasWrittenData;                 //@synthesize hasWrittenData=_hasWrittenData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)close;
-(void)writeData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(void)_tryToSendData;
-(void)_completeAllItemsWithError:(id)arg1 ;
-(/*^block*/id)_getCompletionBlock;
-(void)setStreamProperty:(id)arg1 forKey:(id)arg2 ;
-(id)streamPropertyForKey:(id)arg1 ;
-(id)initWithCompressedFileURL:(id)arg1 callbackQueue:(id)arg2 ;
-(void)whenComplete:(/*^block*/id)arg1 ;
-(BOOL)hasWrittenData;
@end

