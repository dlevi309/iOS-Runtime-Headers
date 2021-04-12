/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
*/

#import <FTServices/FTServices-Structs.h>
#import <FTServices/FTIDSMessage.h>

@class NSString, NSData, NSDictionary, NSMutableDictionary, NSNumber;

@interface IDSWebTunnelRequestMessage : FTIDSMessage {

	NSString* _messageRequestUUID;
	NSString* _messageURL;
	NSData* _messageRequestBodyData;
	NSDictionary* _messageRequestBodyDictionary;
	NSMutableDictionary* _messageHeaders;
	NSNumber* _maximumResponseSize;
	NSDictionary* _responseBodyDictionary;
	NSData* _responseBodyData;
	NSDictionary* _responseHeaders;
	NSNumber* _responseCode;
	NSNumber* _responseStatus;
	BOOL _disableIDSTranslation;
	NSString* _userAgentOverride;

}

@property (nonatomic,copy) NSString * messageRequestUUID;                            //@synthesize messageRequestUUID=_messageRequestUUID - In the implementation block
@property (nonatomic,copy) NSString * messageURL;                                    //@synthesize messageURL=_messageURL - In the implementation block
@property (nonatomic,copy) NSData * messageRequestBodyData;                          //@synthesize messageRequestBodyData=_messageRequestBodyData - In the implementation block
@property (nonatomic,copy) NSDictionary * messageRequestBodyDictionary;              //@synthesize messageRequestBodyDictionary=_messageRequestBodyDictionary - In the implementation block
@property (nonatomic,copy) NSMutableDictionary * messageHeaders;                     //@synthesize messageHeaders=_messageHeaders - In the implementation block
@property (nonatomic,copy) NSNumber * maximumResponseSize;                           //@synthesize maximumResponseSize=_maximumResponseSize - In the implementation block
@property (nonatomic,copy) NSString * userAgentOverride;                             //@synthesize userAgentOverride=_userAgentOverride - In the implementation block
@property (nonatomic,copy) NSData * responseBodyData;                                //@synthesize responseBodyData=_responseBodyData - In the implementation block
@property (nonatomic,copy) NSDictionary * responseBodyDictionary;                    //@synthesize responseBodyDictionary=_responseBodyDictionary - In the implementation block
@property (nonatomic,copy) NSDictionary * responseHeaders;                           //@synthesize responseHeaders=_responseHeaders - In the implementation block
@property (nonatomic,copy) NSNumber * responseCode;                                  //@synthesize responseCode=_responseCode - In the implementation block
@property (nonatomic,copy) NSNumber * responseStatus;                                //@synthesize responseStatus=_responseStatus - In the implementation block
@property (assign,nonatomic) BOOL disableIDSTranslation;                             //@synthesize disableIDSTranslation=_disableIDSTranslation - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithMessage:(id)arg1 ;
-(NSDictionary *)responseHeaders;
-(id)messageBody;
-(NSNumber *)responseCode;
-(void)setResponseCode:(NSNumber *)arg1 ;
-(BOOL)wantsBinaryPush;
-(BOOL)wantsCompressedBody;
-(BOOL)isWebTunnelMessage;
-(BOOL)isIDSMessage;
-(id)additionalMessageHeadersForOutgoingPush;
-(void)handleResponseHeaders:(id)arg1 ;
-(void)handleResponseDictionary:(id)arg1 ;
-(void)setMessageURL:(NSString *)arg1 ;
-(NSString *)messageURL;
-(void)setResponseBodyData:(NSData *)arg1 ;
-(NSData *)responseBodyData;
-(void)setDisableIDSTranslation:(BOOL)arg1 ;
-(void)setMessageRequestBodyData:(NSData *)arg1 ;
-(void)setUserAgentOverride:(NSString *)arg1 ;
-(void)setMessageHeaders:(NSMutableDictionary *)arg1 ;
-(void)setMessageRequestUUID:(NSString *)arg1 ;
-(NSString *)messageRequestUUID;
-(NSData *)messageRequestBodyData;
-(NSDictionary *)messageRequestBodyDictionary;
-(void)setMessageRequestBodyDictionary:(NSDictionary *)arg1 ;
-(NSMutableDictionary *)messageHeaders;
-(NSDictionary *)responseBodyDictionary;
-(void)setResponseBodyDictionary:(NSDictionary *)arg1 ;
-(void)setResponseHeaders:(NSDictionary *)arg1 ;
-(NSNumber *)responseStatus;
-(void)setResponseStatus:(NSNumber *)arg1 ;
-(BOOL)disableIDSTranslation;
-(NSString *)userAgentOverride;
-(BOOL)wantsIDSProtocolVersion;
-(NSNumber *)maximumResponseSize;
-(void)setMaximumResponseSize:(NSNumber *)arg1 ;
@end

