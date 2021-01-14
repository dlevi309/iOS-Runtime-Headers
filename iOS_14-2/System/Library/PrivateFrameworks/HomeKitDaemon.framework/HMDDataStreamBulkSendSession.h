/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDDataStreamBulkSendSession.h>

@protocol HMDDataStreamBulkSendSession <NSObject>
@property (getter=isActive,readonly) BOOL active; 
@required
-(void)read:(/*^block*/id)arg1;
-(BOOL)isActive;
-(void)cancelWithReason:(unsigned short)arg1;

@end


@protocol OS_dispatch_queue;
@class HMDDataStreamBulkSendProtocol, NSNumber, NSObject, NSMutableArray, NSError, NSString;

@interface HMDDataStreamBulkSendSession : NSObject <HMFLogging, HMDDataStreamBulkSendSession> {

	BOOL _isClosed;
	BOOL _hasReceivedEof;
	HMDDataStreamBulkSendProtocol* _bulkSendProtocol;
	NSNumber* _sessionIdentifier;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _activeReadHandler;
	NSMutableArray* _pendingReads;
	NSError* _pendingError;
	NSString* _logIdentifier;

}

@property (nonatomic,copy) id activeReadHandler;                                                     //@synthesize activeReadHandler=_activeReadHandler - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingReads;                                          //@synthesize pendingReads=_pendingReads - In the implementation block
@property (nonatomic,retain) NSError * pendingError;                                                 //@synthesize pendingError=_pendingError - In the implementation block
@property (nonatomic,readonly) NSString * logIdentifier;                                             //@synthesize logIdentifier=_logIdentifier - In the implementation block
@property (nonatomic,__weak,readonly) HMDDataStreamBulkSendProtocol * bulkSendProtocol;              //@synthesize bulkSendProtocol=_bulkSendProtocol - In the implementation block
@property (nonatomic,readonly) NSNumber * sessionIdentifier;                                         //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                   //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isActive,readonly) BOOL active; 
+(id)logCategory;
-(void)read:(/*^block*/id)arg1 ;
-(BOOL)isActive;
-(NSString *)logIdentifier;
-(NSNumber *)sessionIdentifier;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)dealloc;
-(void)cancelWithReason:(unsigned short)arg1 ;
-(NSMutableArray *)pendingReads;
-(void)setPendingReads:(NSMutableArray *)arg1 ;
-(void)asyncHandleRemoteCloseWithError:(id)arg1 ;
-(id)initWithProtocol:(id)arg1 sessionIdentifier:(id)arg2 queue:(id)arg3 logIdentifier:(id)arg4 ;
-(void)asyncHandleIncomingPackets:(id)arg1 isEof:(BOOL)arg2 ;
-(HMDDataStreamBulkSendProtocol *)bulkSendProtocol;
-(NSError *)pendingError;
-(void)_closeSession;
-(id)activeReadHandler;
-(void)setActiveReadHandler:(id)arg1 ;
-(void)_pumpReadDataIfPossible;
-(void)setPendingError:(NSError *)arg1 ;
@end

