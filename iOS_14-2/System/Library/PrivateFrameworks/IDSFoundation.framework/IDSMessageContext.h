/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/


@protocol OS_os_transaction;
#import <IDSFoundation/IDSFoundation-Structs.h>
@class NSObject, IDSCertifiedDeliveryContext, NSString, NSData, NSNumber, NSError, NSDictionary, NSDate;

@interface IDSMessageContext : NSObject {

	id _boostContext;
	NSObject*<OS_os_transaction> _transaction;
	IDSCertifiedDeliveryContext* _certifiedDeliveryContext;
	NSString* _storageGuid;
	NSString* _outgoingResponseIdentifier;
	NSString* _incomingResponseIdentifier;
	NSString* _serviceIdentifier;
	NSString* _fromID;
	NSString* _toID;
	NSString* _originalDestinationDevice;
	NSString* _originalGUID;
	NSData* _engramGroupID;
	NSNumber* _originalCommand;
	NSNumber* _serverTimestamp;
	NSNumber* _originalTimestamp;
	NSError* _wpConnectionError;
	NSString* _senderCorrelationIdentifier;
	NSString* _resourceTransferURLString;
	NSString* _resourceTransferSandboxExtension;
	NSDictionary* _resourceTransferMetadata;
	NSNumber* _broadcastTime;
	NSNumber* _priority;
	NSNumber* _messageSequenceNumber;
	NSNumber* _bytesSent;
	NSNumber* _totalBytes;
	double _averageLocalRTT;
	long long _broadcastID;
	long long _connectionType;
	long long _localMessageState;
	long long _endpointState;
	os_unfair_lock_s _lock;
	BOOL _expectsPeerResponse;
	BOOL _wantsManualAck;
	BOOL _fromServerStorage;
	BOOL _deviceBlackedOut;
	BOOL _wantsAppAck;
	BOOL _usedEngram;
	BOOL _messageHadEncryptedData;

}

@property (assign,nonatomic) BOOL wantsAppAck; 
@property (nonatomic,copy) NSString * storageGuid; 
@property (nonatomic,retain) NSNumber * broadcastTime; 
@property (nonatomic,retain) NSNumber * priority; 
@property (nonatomic,retain) id boostContext;                                                       //@synthesize boostContext=_boostContext - In the implementation block
@property (assign,nonatomic) long long broadcastID; 
@property (assign,nonatomic) long long connectionType; 
@property (assign,nonatomic) BOOL usedEngram; 
@property (nonatomic,copy,readonly) NSNumber * messageSequenceNumber;                               //@synthesize messageSequenceNumber=_messageSequenceNumber - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * bytesSent; 
@property (nonatomic,copy,readonly) NSNumber * totalBytes; 
@property (nonatomic,readonly) long long endpointState;                                             //@synthesize endpointState=_endpointState - In the implementation block
@property (nonatomic,readonly) IDSCertifiedDeliveryContext * certifiedDeliveryContext;              //@synthesize certifiedDeliveryContext=_certifiedDeliveryContext - In the implementation block
@property (nonatomic,copy) NSDictionary * resourceTransferMetadata; 
@property (nonatomic,copy) NSString * resourceTransferURLString; 
@property (nonatomic,copy) NSString * resourceTransferSandboxExtension; 
@property (nonatomic,copy) NSString * outgoingResponseIdentifier; 
@property (nonatomic,copy) NSString * incomingResponseIdentifier; 
@property (nonatomic,copy) NSString * serviceIdentifier; 
@property (nonatomic,copy) NSString * fromID; 
@property (nonatomic,copy) NSString * toID; 
@property (nonatomic,copy) NSString * originalDestinationDevice; 
@property (nonatomic,copy) NSString * originalGUID;                                                 //@synthesize originalGUID=_originalGUID - In the implementation block
@property (nonatomic,copy) NSData * engramGroupID; 
@property (nonatomic,copy) NSNumber * originalCommand; 
@property (nonatomic,copy) NSNumber * serverTimestamp; 
@property (nonatomic,copy) NSNumber * originalTimestamp; 
@property (assign,nonatomic) BOOL expectsPeerResponse; 
@property (assign,nonatomic) BOOL wantsManualAck; 
@property (assign,nonatomic) BOOL fromServerStorage; 
@property (assign,nonatomic) BOOL messageHadEncryptedData;                                          //@synthesize messageHadEncryptedData=_messageHadEncryptedData - In the implementation block
@property (nonatomic,readonly) NSDate * serverReceivedTime; 
@property (nonatomic,readonly) double averageLocalRTT;                                              //@synthesize averageLocalRTT=_averageLocalRTT - In the implementation block
@property (nonatomic,readonly) long long localMessageState;                                         //@synthesize localMessageState=_localMessageState - In the implementation block
@property (nonatomic,readonly) BOOL deviceBlackedOut;                                               //@synthesize deviceBlackedOut=_deviceBlackedOut - In the implementation block
@property (nonatomic,readonly) NSError * wpConnectionError; 
@property (nonatomic,copy) NSString * senderCorrelationIdentifier; 
-(id)pkDescription;
-(NSString *)toID;
-(void)setOriginalTimestamp:(NSNumber *)arg1 ;
-(BOOL)usedEngram;
-(NSString *)fromID;
-(long long)connectionType;
-(void)setWantsManualAck:(BOOL)arg1 ;
-(NSDictionary *)resourceTransferMetadata;
-(NSData *)engramGroupID;
-(NSString *)resourceTransferSandboxExtension;
-(NSString *)resourceTransferURLString;
-(NSNumber *)messageSequenceNumber;
-(void)setUsedEngram:(BOOL)arg1 ;
-(NSNumber *)totalBytes;
-(void)setConnectionType:(long long)arg1 ;
-(void)setOutgoingResponseIdentifier:(NSString *)arg1 ;
-(void)setIncomingResponseIdentifier:(NSString *)arg1 ;
-(void)setStorageGuid:(NSString *)arg1 ;
-(void)setOriginalDestinationDevice:(NSString *)arg1 ;
-(void)setOriginalGuid:(id)arg1 ;
-(NSString *)originalDestinationDevice;
-(NSString *)originalGUID;
-(void)setEngramGroupID:(NSData *)arg1 ;
-(void)setOriginalCommand:(NSNumber *)arg1 ;
-(void)setBroadcastTime:(NSNumber *)arg1 ;
-(void)setServerTimestamp:(NSNumber *)arg1 ;
-(void)setSenderCorrelationIdentifier:(NSString *)arg1 ;
-(void)setBytesSent:(NSNumber *)arg1 ;
-(NSString *)senderCorrelationIdentifier;
-(void)setWPConnectionError:(id)arg1 ;
-(NSError *)wpConnectionError;
-(void)setTotalBytes:(NSNumber *)arg1 ;
-(void)setResourceTransferURLString:(NSString *)arg1 ;
-(void)setResourceTransferMetadata:(NSDictionary *)arg1 ;
-(void)setBroadcastID:(long long)arg1 ;
-(void)setResourceTransferSandboxExtension:(NSString *)arg1 ;
-(BOOL)wantsManualAck;
-(void)setFromServerStorage:(BOOL)arg1 ;
-(BOOL)fromServerStorage;
-(BOOL)messageHadEncryptedData;
-(void)setMessageHadEncryptedData:(BOOL)arg1 ;
-(double)averageLocalRTT;
-(BOOL)deviceBlackedOut;
-(IDSCertifiedDeliveryContext *)certifiedDeliveryContext;
-(void)setServiceIdentifier:(NSString *)arg1 ;
-(long long)localMessageState;
-(long long)endpointState;
-(NSString *)serviceIdentifier;
-(id)objectForKey:(id)arg1 ;
-(void)setToID:(NSString *)arg1 ;
-(BOOL)expectsPeerResponse;
-(id)boostContext;
-(NSNumber *)bytesSent;
-(NSNumber *)serverTimestamp;
-(NSNumber *)priority;
-(void)setFromID:(NSString *)arg1 ;
-(NSString *)storageGuid;
-(void)setBoostContext:(id)arg1 ;
-(long long)broadcastID;
-(void)setPriority:(NSNumber *)arg1 ;
-(void)setWantsAppAck:(BOOL)arg1 ;
-(BOOL)wantsAppAck;
-(void)setExpectsPeerResponse:(BOOL)arg1 ;
-(NSNumber *)broadcastTime;
-(NSDate *)serverReceivedTime;
-(id)initWithDictionary:(id)arg1 boostContext:(id)arg2 ;
-(NSString *)outgoingResponseIdentifier;
-(NSNumber *)originalTimestamp;
-(NSNumber *)originalCommand;
-(NSString *)incomingResponseIdentifier;
-(void)setOriginalGUID:(NSString *)arg1 ;
@end

