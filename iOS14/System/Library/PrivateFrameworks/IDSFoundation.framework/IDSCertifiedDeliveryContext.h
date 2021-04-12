/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/


@class NSString, NSData, NSNumber, IDSCertifiedDeliveryReplayKey, NSDictionary;

@interface IDSCertifiedDeliveryContext : NSObject {

	BOOL _generateDeliveryReceipt;
	NSString* _originalGUID;
	NSString* _service;
	long long _certifiedDeliveryVersion;
	NSData* _certifiedDeliveryRTS;
	NSData* _senderToken;
	NSNumber* _failureReason;
	NSString* _failureReasonMessage;
	IDSCertifiedDeliveryReplayKey* _replayKey;
	NSDictionary* _deliveryStatusContext;
	NSString* _localURI;
	NSString* _remoteURI;
	NSData* _queryHash;

}

@property (nonatomic,readonly) NSString * originalGUID;                                //@synthesize originalGUID=_originalGUID - In the implementation block
@property (nonatomic,readonly) NSString * service;                                     //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) long long certifiedDeliveryVersion;                     //@synthesize certifiedDeliveryVersion=_certifiedDeliveryVersion - In the implementation block
@property (nonatomic,readonly) NSData * certifiedDeliveryRTS;                          //@synthesize certifiedDeliveryRTS=_certifiedDeliveryRTS - In the implementation block
@property (nonatomic,readonly) NSData * senderToken;                                   //@synthesize senderToken=_senderToken - In the implementation block
@property (nonatomic,retain) NSNumber * failureReason;                                 //@synthesize failureReason=_failureReason - In the implementation block
@property (nonatomic,retain) NSString * failureReasonMessage;                          //@synthesize failureReasonMessage=_failureReasonMessage - In the implementation block
@property (nonatomic,readonly) IDSCertifiedDeliveryReplayKey * replayKey;              //@synthesize replayKey=_replayKey - In the implementation block
@property (assign,nonatomic) BOOL generateDeliveryReceipt;                             //@synthesize generateDeliveryReceipt=_generateDeliveryReceipt - In the implementation block
@property (nonatomic,retain) NSDictionary * deliveryStatusContext;                     //@synthesize deliveryStatusContext=_deliveryStatusContext - In the implementation block
@property (nonatomic,readonly) NSString * localURI;                                    //@synthesize localURI=_localURI - In the implementation block
@property (nonatomic,readonly) NSString * remoteURI;                                   //@synthesize remoteURI=_remoteURI - In the implementation block
@property (nonatomic,readonly) NSData * queryHash;                                     //@synthesize queryHash=_queryHash - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
-(NSDictionary *)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)initWithGUID:(id)arg1 service:(id)arg2 certifiedDeliveryVersion:(long long)arg3 certifiedDeliveryRTS:(id)arg4 senderToken:(id)arg5 failureReason:(id)arg6 failureReasonMessage:(id)arg7 replayKey:(id)arg8 generateDeliveryReceipt:(BOOL)arg9 deliveryStatusContext:(id)arg10 localURI:(id)arg11 remoteURI:(id)arg12 queryHash:(id)arg13 ;
-(NSNumber *)failureReason;
-(NSDictionary *)deliveryStatusContext;
-(NSString *)originalGUID;
-(id)description;
-(void)setFailureReason:(NSNumber *)arg1 ;
-(NSString *)localURI;
-(NSData *)senderToken;
-(NSData *)certifiedDeliveryRTS;
-(long long)certifiedDeliveryVersion;
-(NSString *)failureReasonMessage;
-(BOOL)generateDeliveryReceipt;
-(void)setFailureReasonMessage:(NSString *)arg1 ;
-(void)setGenerateDeliveryReceipt:(BOOL)arg1 ;
-(id)initWithGUID:(id)arg1 service:(id)arg2 certifiedDeliveryVersion:(long long)arg3 certifiedDeliveryRTS:(id)arg4 senderToken:(id)arg5 ;
-(id)initWithGUID:(id)arg1 service:(id)arg2 certifiedDeliveryVersion:(long long)arg3 certifiedDeliveryRTS:(id)arg4 senderToken:(id)arg5 localURI:(id)arg6 remoteURI:(id)arg7 ;
-(id)initWithGUID:(id)arg1 service:(id)arg2 certifiedDeliveryVersion:(long long)arg3 certifiedDeliveryRTS:(id)arg4 senderToken:(id)arg5 failureReason:(id)arg6 failureReasonMessage:(id)arg7 ;
-(id)initWithCertifiedDeliveryContext:(id)arg1 queryHash:(id)arg2 ;
-(id)initWithGUID:(id)arg1 service:(id)arg2 certifiedDeliveryVersion:(long long)arg3 certifiedDeliveryRTS:(id)arg4 senderToken:(id)arg5 localURI:(id)arg6 remoteURI:(id)arg7 replayKey:(id)arg8 ;
-(NSString *)remoteURI;
-(NSData *)queryHash;
-(IDSCertifiedDeliveryReplayKey *)replayKey;
-(void)setDeliveryStatusContext:(NSDictionary *)arg1 ;
-(NSString *)service;
@end

