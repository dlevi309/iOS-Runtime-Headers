/*
* Generated on Thursday, January 14, 2021 at 2:25:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <libobjc.A.dylib/HMDDataStreamSocketPrivate.h>

@protocol HMDDataStreamSocketDelegate, OS_dispatch_queue;
@class NSString, HMDDataStreamStreamProtocol, NSObject, HMFUnfairLock, NSMutableArray;

@interface HMDDataStreamSocket : NSObject <HMDDataStreamSocketPrivate> {

	BOOL _closed;
	NSString* _applicationProtocolName;
	id<HMDDataStreamSocketDelegate> _delegate;
	HMDDataStreamStreamProtocol* _streamProtocol;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMFUnfairLock* _lock;
	NSMutableArray* _pendingReads;

}

@property (__weak,readonly) HMDDataStreamStreamProtocol * streamProtocol;              //@synthesize streamProtocol=_streamProtocol - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                           //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) HMFUnfairLock * lock;                                             //@synthesize lock=_lock - In the implementation block
@property (assign,getter=isClosed,nonatomic) BOOL closed;                              //@synthesize closed=_closed - In the implementation block
@property (readonly) NSMutableArray * pendingReads;                                    //@synthesize pendingReads=_pendingReads - In the implementation block
@property (__weak) id<HMDDataStreamSocketDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NSString * applicationProtocolName;                               //@synthesize applicationProtocolName=_applicationProtocolName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_queue>)workQueue;
-(BOOL)isClosed;
-(id<HMDDataStreamSocketDelegate>)delegate;
-(void)close;
-(void)setClosed:(BOOL)arg1 ;
-(HMFUnfairLock *)lock;
-(void)setDelegate:(id<HMDDataStreamSocketDelegate>)arg1 ;
-(id)readData;
-(BOOL)writeData:(id)arg1 error:(id*)arg2 ;
-(HMDDataStreamStreamProtocol *)streamProtocol;
-(void)closeWithError:(id)arg1 ;
-(NSString *)applicationProtocolName;
-(id)initWithStreamProtocol:(id)arg1 applicationProtocolName:(id)arg2 workQueue:(id)arg3 ;
-(NSMutableArray *)pendingReads;
-(void)handleIncomingData:(id)arg1 ;
@end

