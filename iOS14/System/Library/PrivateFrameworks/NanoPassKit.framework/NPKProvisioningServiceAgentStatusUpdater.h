/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class IDSService, IDSProtobuf, NSString, NSObject, NSDictionary;

@interface NPKProvisioningServiceAgentStatusUpdater : NSObject {

	IDSService* _service;
	IDSProtobuf* _pendingStatusProtobuf;
	long long _messagePriority;
	NSString* _responseIdentifier;
	NSObject*<OS_dispatch_source> _statusTimer;
	NSObject*<OS_dispatch_queue> _queue;
	NSDictionary* _sendOptions;
	unsigned long long _updatesSent;
	unsigned long long _maxUpdates;

}

@property (nonatomic,retain) IDSService * service;                                   //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) IDSProtobuf * pendingStatusProtobuf;                    //@synthesize pendingStatusProtobuf=_pendingStatusProtobuf - In the implementation block
@property (assign,nonatomic) long long messagePriority;                              //@synthesize messagePriority=_messagePriority - In the implementation block
@property (nonatomic,copy) NSString * responseIdentifier;                            //@synthesize responseIdentifier=_responseIdentifier - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> statusTimer;              //@synthesize statusTimer=_statusTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSDictionary * sendOptions;                             //@synthesize sendOptions=_sendOptions - In the implementation block
@property (assign,nonatomic) unsigned long long updatesSent;                         //@synthesize updatesSent=_updatesSent - In the implementation block
@property (assign,nonatomic) unsigned long long maxUpdates;                          //@synthesize maxUpdates=_maxUpdates - In the implementation block
-(NSDictionary *)sendOptions;
-(void)setSendOptions:(NSDictionary *)arg1 ;
-(NSObject*<OS_dispatch_source>)statusTimer;
-(void)setStatusTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setService:(IDSService *)arg1 ;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(IDSService *)service;
-(void)dealloc;
-(void)_sendStatusUpdate;
-(id)initWithPendingStatusProtobuf:(id)arg1 service:(id)arg2 priority:(long long)arg3 maxUpdates:(unsigned long long)arg4 responseIdentifier:(id)arg5 sendOptions:(id)arg6 queue:(id)arg7 updateInterval:(double)arg8 ;
-(IDSProtobuf *)pendingStatusProtobuf;
-(NSString *)responseIdentifier;
-(long long)messagePriority;
-(unsigned long long)updatesSent;
-(void)setUpdatesSent:(unsigned long long)arg1 ;
-(unsigned long long)maxUpdates;
-(id)initWithPendingStatusProtobuf:(id)arg1 service:(id)arg2 priority:(long long)arg3 maxUpdates:(unsigned long long)arg4 responseIdentifier:(id)arg5 sendOptions:(id)arg6 queue:(id)arg7 ;
-(void)setPendingStatusProtobuf:(IDSProtobuf *)arg1 ;
-(void)setMessagePriority:(long long)arg1 ;
-(void)setResponseIdentifier:(NSString *)arg1 ;
-(void)setMaxUpdates:(unsigned long long)arg1 ;
@end

