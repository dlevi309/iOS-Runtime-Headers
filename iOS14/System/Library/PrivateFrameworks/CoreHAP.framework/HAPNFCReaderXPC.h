/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <HMFoundation/HMFObject.h>

@protocol OS_dispatch_queue, OS_xpc_object, HAPNFCReaderStream;
@class NSString, NSObject;

@interface HAPNFCReaderXPC : HMFObject {

	BOOL _supportsBackgroundReading;
	NSString* _stream;
	unsigned long long _source;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_xpc_object> _event;
	id<HAPNFCReaderStream> _readerStream;

}

@property (retain) NSString * stream;                                       //@synthesize stream=_stream - In the implementation block
@property (assign) unsigned long long source;                               //@synthesize source=_source - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> workQueue;                  //@synthesize workQueue=_workQueue - In the implementation block
@property (retain) NSObject*<OS_xpc_object> event;                          //@synthesize event=_event - In the implementation block
@property (retain) id<HAPNFCReaderStream> readerStream;                     //@synthesize readerStream=_readerStream - In the implementation block
@property (nonatomic,readonly) BOOL supportsBackgroundReading;              //@synthesize supportsBackgroundReading=_supportsBackgroundReading - In the implementation block
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)stream;
-(void)setStream:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)beginSession;
-(void)setReaderStream:(id<HAPNFCReaderStream>)arg1 ;
-(id<HAPNFCReaderStream>)readerStream;
-(void)setSource:(unsigned long long)arg1 ;
-(id)initReaderWithStream:(id)arg1 fromSource:(unsigned long long)arg2 workQueue:(id)arg3 readerStream:(id)arg4 ;
-(BOOL)supportsBackgroundReading;
-(NSObject*<OS_xpc_object>)event;
-(void)setEvent:(NSObject*<OS_xpc_object>)arg1 ;
-(unsigned long long)source;
@end

