/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDNanoSyncDescription.h>

@class HDDaemonTransaction, NSString, HDIDSMessageCenter, IDSDevice, NSData, NSDictionary;

@interface HDIDSOutgoingResponse : NSObject <HDNanoSyncDescription> {

	HDDaemonTransaction* _transaction;
	BOOL _doNotCompress;
	BOOL _forceLocalDelivery;
	BOOL _sent;
	unsigned short _requestMessageID;
	unsigned short _messageID;
	NSString* _requestIdsIdentifier;
	HDIDSMessageCenter* _messageCenter;
	IDSDevice* _toDevice;
	NSString* _idsIdentifier;
	NSData* _data;
	unsigned long long _priority;
	double _sendTimeout;
	NSDictionary* _persistentUserInfo;
	id _pbResponse;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * requestIdsIdentifier;                   //@synthesize requestIdsIdentifier=_requestIdsIdentifier - In the implementation block
@property (nonatomic,retain) HDIDSMessageCenter * messageCenter;              //@synthesize messageCenter=_messageCenter - In the implementation block
@property (assign,nonatomic) unsigned short requestMessageID;                 //@synthesize requestMessageID=_requestMessageID - In the implementation block
@property (getter=isSent) BOOL sent;                                          //@synthesize sent=_sent - In the implementation block
@property (assign,nonatomic) unsigned short messageID;                        //@synthesize messageID=_messageID - In the implementation block
@property (nonatomic,retain) IDSDevice * toDevice;                            //@synthesize toDevice=_toDevice - In the implementation block
@property (nonatomic,copy) NSString * idsIdentifier;                          //@synthesize idsIdentifier=_idsIdentifier - In the implementation block
@property (nonatomic,retain) id pbResponse;                                   //@synthesize pbResponse=_pbResponse - In the implementation block
@property (nonatomic,retain) NSData * data;                                   //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) unsigned long long priority;                     //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) double sendTimeout;                              //@synthesize sendTimeout=_sendTimeout - In the implementation block
@property (nonatomic,retain) NSDictionary * persistentUserInfo;               //@synthesize persistentUserInfo=_persistentUserInfo - In the implementation block
@property (assign,nonatomic) BOOL doNotCompress;                              //@synthesize doNotCompress=_doNotCompress - In the implementation block
@property (assign,nonatomic) BOOL forceLocalDelivery;                         //@synthesize forceLocalDelivery=_forceLocalDelivery - In the implementation block
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(unsigned long long)priority;
-(void)setPriority:(unsigned long long)arg1 ;
-(void)send;
-(unsigned short)messageID;
-(void)setMessageID:(unsigned short)arg1 ;
-(BOOL)isSent;
-(void)setSent:(BOOL)arg1 ;
-(NSString *)idsIdentifier;
-(void)setIdsIdentifier:(NSString *)arg1 ;
-(HDIDSMessageCenter *)messageCenter;
-(void)setPbResponse:(id)arg1 ;
-(id)pbResponse;
-(NSDictionary *)persistentUserInfo;
-(void)setPersistentUserInfo:(NSDictionary *)arg1 ;
-(void)setSendTimeout:(double)arg1 ;
-(void)setMessageCenter:(HDIDSMessageCenter *)arg1 ;
-(double)sendTimeout;
-(IDSDevice *)toDevice;
-(id)nanoSyncDescription;
-(void)configureWithActivationRestore:(id)arg1 syncStore:(id)arg2 ;
-(void)configureWithStatus:(id)arg1 syncStore:(id)arg2 ;
-(BOOL)doNotCompress;
-(BOOL)forceLocalDelivery;
-(unsigned short)requestMessageID;
-(void)setDoNotCompress:(BOOL)arg1 ;
-(void)setForceLocalDelivery:(BOOL)arg1 ;
-(void)setToDevice:(IDSDevice *)arg1 ;
-(void)setRequestMessageID:(unsigned short)arg1 ;
-(NSString *)requestIdsIdentifier;
-(void)setRequestIdsIdentifier:(NSString *)arg1 ;
@end

