/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, AKPushMessage, NSDictionary;

@interface AKCircleRequestPayload : NSObject <NSSecureCoding> {

	NSString* _serverInfo;
	NSData* _clientInfo;
	long long _clientErrorCode;
	NSString* _altDSID;
	NSString* _transactionId;
	AKPushMessage* _responseMessage;
	NSDictionary* _responseInfo;
	unsigned long long _circleStep;

}

@property (nonatomic,retain) AKPushMessage * responseMessage;              //@synthesize responseMessage=_responseMessage - In the implementation block
@property (nonatomic,retain) NSDictionary * responseInfo;                  //@synthesize responseInfo=_responseInfo - In the implementation block
@property (assign,nonatomic) unsigned long long circleStep;                //@synthesize circleStep=_circleStep - In the implementation block
@property (nonatomic,retain) NSString * serverInfo;                        //@synthesize serverInfo=_serverInfo - In the implementation block
@property (nonatomic,retain) NSData * clientInfo;                          //@synthesize clientInfo=_clientInfo - In the implementation block
@property (assign,nonatomic) long long clientErrorCode;                    //@synthesize clientErrorCode=_clientErrorCode - In the implementation block
@property (nonatomic,retain) NSString * altDSID;                           //@synthesize altDSID=_altDSID - In the implementation block
@property (nonatomic,retain) NSString * transactionId;                     //@synthesize transactionId=_transactionId - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)payloadWithMessage:(id)arg1 ;
-(NSString *)serverInfo;
-(NSData *)clientInfo;
-(void)setClientInfo:(NSData *)arg1 ;
-(unsigned long long)circleStep;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setServerInfo:(NSString *)arg1 ;
-(long long)clientErrorCode;
-(void)setCircleStep:(unsigned long long)arg1 ;
-(BOOL)isRequestingPayload;
-(BOOL)isAcceptingPayload;
-(id)replyPayload;
-(void)setClientErrorCode:(long long)arg1 ;
-(AKPushMessage *)responseMessage;
-(void)setResponseMessage:(AKPushMessage *)arg1 ;
-(NSDictionary *)responseInfo;
-(void)setResponseInfo:(NSDictionary *)arg1 ;
-(id)description;
-(NSString *)altDSID;
-(void)setAltDSID:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)transactionId;
-(void)setTransactionId:(NSString *)arg1 ;
@end

