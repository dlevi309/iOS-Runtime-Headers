/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)altDSID;
-(void)setAltDSID:(NSString *)arg1 ;
-(NSString *)transactionId;
-(void)setTransactionId:(NSString *)arg1 ;
-(NSData *)clientInfo;
-(void)setClientInfo:(NSData *)arg1 ;
-(NSString *)serverInfo;
-(void)setServerInfo:(NSString *)arg1 ;
-(long long)clientErrorCode;
-(unsigned long long)circleStep;
-(void)setCircleStep:(unsigned long long)arg1 ;
-(BOOL)isRequestingPayload;
-(BOOL)isAcceptingPayload;
-(id)replyPayload;
-(void)setClientErrorCode:(long long)arg1 ;
-(AKPushMessage *)responseMessage;
-(void)setResponseMessage:(AKPushMessage *)arg1 ;
-(NSDictionary *)responseInfo;
-(void)setResponseInfo:(NSDictionary *)arg1 ;
@end

