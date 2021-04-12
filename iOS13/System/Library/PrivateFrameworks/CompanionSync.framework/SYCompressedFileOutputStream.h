/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <CoreFoundation/NSOutputStream.h>
#import <libobjc.A.dylib/_SYStreamRunLoopSourceHandler.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>
#import <libobjc.A.dylib/SYOutputCompressor.h>
#import <libobjc.A.dylib/SYStreamEventHandlerBlocks.h>
#import <libobjc.A.dylib/SYStreamThroughputCounter.h>
#import <libobjc.A.dylib/SYStreamProgress.h>

@class NSURL, _SYStreamGuts, NSProgress, NSString;

@interface SYCompressedFileOutputStream : NSOutputStream <_SYStreamRunLoopSourceHandler, NSStreamDelegate, SYOutputCompressor, SYStreamEventHandlerBlocks, SYStreamThroughputCounter, SYStreamProgress> {

	NSURL* _url;
	BOOL _append;
	int _fd;
	int _class;
	gzFile_s* _file;
	long long _level;
	os_unfair_lock_s _internalLock;
	_SYStreamGuts* _internal;
	/*^block*/id _onOpenComplete;
	/*^block*/id _onBytesAvailable;
	/*^block*/id _onSpaceAvailable;
	/*^block*/id _onEndOfFile;
	/*^block*/id _onError;
	/*^block*/id _onClose;
	NSProgress* _progress;
	unsigned long long _byteCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=_internal,nonatomic,readonly) _SYStreamGuts * internal; 
@property (assign,nonatomic) long long compressionLevel;                               //@synthesize level=_level - In the implementation block
@property (nonatomic,copy) id onOpenComplete;                                          //@synthesize onOpenComplete=_onOpenComplete - In the implementation block
@property (nonatomic,copy) id onBytesAvailable;                                        //@synthesize onBytesAvailable=_onBytesAvailable - In the implementation block
@property (nonatomic,copy) id onSpaceAvailable;                                        //@synthesize onSpaceAvailable=_onSpaceAvailable - In the implementation block
@property (nonatomic,copy) id onEndOfFile;                                             //@synthesize onEndOfFile=_onEndOfFile - In the implementation block
@property (nonatomic,copy) id onError;                                                 //@synthesize onError=_onError - In the implementation block
@property (nonatomic,copy) id onClose;                                                 //@synthesize onClose=_onClose - In the implementation block
@property (nonatomic,readonly) unsigned long long bytesThroughput;                     //@synthesize byteCount=_byteCount - In the implementation block
@property (nonatomic,retain) NSProgress * progress;                                    //@synthesize progress=_progress - In the implementation block
-(void)dealloc;
-(void)open;
-(void)close;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(id)propertyForKey:(id)arg1 ;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(unsigned long long)streamStatus;
-(id)streamError;
-(id)initWithURL:(id)arg1 append:(BOOL)arg2 ;
-(id)initToFileAtPath:(id)arg1 append:(BOOL)arg2 ;
-(long long)write:(const char*)arg1 maxLength:(unsigned long long)arg2 ;
-(BOOL)hasSpaceAvailable;
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(id)_internal;
-(NSProgress *)progress;
-(void)setProgress:(NSProgress *)arg1 ;
-(void)setCompressionLevel:(long long)arg1 ;
-(long long)compressionLevel;
-(void)_SY_notifyOnQueue:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_postEventToDelegate:(unsigned long long)arg1 ;
-(id)onOpenComplete;
-(void)setOnOpenComplete:(id)arg1 ;
-(id)onBytesAvailable;
-(void)setOnBytesAvailable:(id)arg1 ;
-(id)onSpaceAvailable;
-(void)setOnSpaceAvailable:(id)arg1 ;
-(id)onEndOfFile;
-(void)setOnEndOfFile:(id)arg1 ;
-(id)onError;
-(void)setOnError:(id)arg1 ;
-(id)onClose;
-(void)setOnClose:(id)arg1 ;
-(unsigned long long)bytesThroughput;
-(id)initToCompressedFileAtURL:(id)arg1 shouldAppend:(BOOL)arg2 ;
@end
