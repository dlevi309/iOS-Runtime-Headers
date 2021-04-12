/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <IDSFoundation/IDSMessage.h>

@class NSString, NSData, NSNumber, NSDictionary;

@interface IDSCertifiedDeliveryReceiptMessage : IDSMessage {

	BOOL _generateDeliveryReceipt;
	NSString* _originalGUID;
	NSData* _senderToken;
	NSData* _certifiedDeliveryRTS;
	long long _certifiedDeliveryVersion;
	NSNumber* _failureReason;
	NSString* _failureReasonMessage;
	NSDictionary* _generatedDeliveryStatusContext;
	NSString* _localURI;
	NSString* _remoteURI;
	NSData* _queryHash;

}

@property (nonatomic,retain) NSString * originalGUID;                                    //@synthesize originalGUID=_originalGUID - In the implementation block
@property (nonatomic,retain) NSData * senderToken;                                       //@synthesize senderToken=_senderToken - In the implementation block
@property (nonatomic,retain) NSData * certifiedDeliveryRTS;                              //@synthesize certifiedDeliveryRTS=_certifiedDeliveryRTS - In the implementation block
@property (assign,nonatomic) long long certifiedDeliveryVersion;                         //@synthesize certifiedDeliveryVersion=_certifiedDeliveryVersion - In the implementation block
@property (nonatomic,retain) NSNumber * failureReason;                                   //@synthesize failureReason=_failureReason - In the implementation block
@property (nonatomic,retain) NSString * failureReasonMessage;                            //@synthesize failureReasonMessage=_failureReasonMessage - In the implementation block
@property (assign,nonatomic) BOOL generateDeliveryReceipt;                               //@synthesize generateDeliveryReceipt=_generateDeliveryReceipt - In the implementation block
@property (nonatomic,retain) NSDictionary * generatedDeliveryStatusContext;              //@synthesize generatedDeliveryStatusContext=_generatedDeliveryStatusContext - In the implementation block
@property (nonatomic,retain) NSString * localURI;                                        //@synthesize localURI=_localURI - In the implementation block
@property (nonatomic,retain) NSString * remoteURI;                                       //@synthesize remoteURI=_remoteURI - In the implementation block
@property (nonatomic,retain) NSData * queryHash;                                         //@synthesize queryHash=_queryHash - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)messageBody;
-(NSNumber *)failureReason;
-(void)setFailureReason:(NSNumber *)arg1 ;
-(long long)command;
-(NSString *)originalGUID;
-(void)setOriginalGUID:(NSString *)arg1 ;
-(long long)responseCommand;
-(id)requiredKeys;
-(NSData *)senderToken;
-(NSData *)certifiedDeliveryRTS;
-(long long)certifiedDeliveryVersion;
-(NSString *)failureReasonMessage;
-(BOOL)generateDeliveryReceipt;
-(NSString *)localURI;
-(NSString *)remoteURI;
-(NSData *)queryHash;
-(void)setSenderToken:(NSData *)arg1 ;
-(void)setCertifiedDeliveryRTS:(NSData *)arg1 ;
-(void)setCertifiedDeliveryVersion:(long long)arg1 ;
-(void)setFailureReasonMessage:(NSString *)arg1 ;
-(void)setGenerateDeliveryReceipt:(BOOL)arg1 ;
-(void)setGeneratedDeliveryStatusContext:(NSDictionary *)arg1 ;
-(void)setLocalURI:(NSString *)arg1 ;
-(void)setRemoteURI:(NSString *)arg1 ;
-(void)setQueryHash:(NSData *)arg1 ;
-(id)initWithCertifiedDeliveryContext:(id)arg1 ;
-(NSDictionary *)generatedDeliveryStatusContext;
@end

