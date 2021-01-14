/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setResponseCode:(NSNumber *)arg1 ;
-(BOOL)wantsBinaryPush;
-(void)setMessageURL:(NSString *)arg1 ;
-(BOOL)wantsCompressedBody;
-(BOOL)isWebTunnelMessage;
-(BOOL)isIDSMessage;
-(id)additionalMessageHeadersForOutgoingPush;
-(void)handleResponseHeaders:(id)arg1 ;
-(void)handleResponseDictionary:(id)arg1 ;
-(NSString *)messageURL;
-(id)initWithMessage:(id)arg1 ;
-(void)setDisableIDSTranslation:(BOOL)arg1 ;
-(void)setMessageRequestBodyData:(NSData *)arg1 ;
-(void)setUserAgentOverride:(NSString *)arg1 ;
-(void)setMessageHeaders:(NSMutableDictionary *)arg1 ;
-(NSData *)responseBodyData;
-(void)setMessageRequestUUID:(NSString *)arg1 ;
-(NSString *)messageRequestUUID;
-(NSData *)messageRequestBodyData;
-(NSDictionary *)messageRequestBodyDictionary;
-(void)setMessageRequestBodyDictionary:(NSDictionary *)arg1 ;
-(NSMutableDictionary *)messageHeaders;
-(NSDictionary *)responseBodyDictionary;
-(void)setResponseBodyDictionary:(NSDictionary *)arg1 ;
-(void)setResponseBodyData:(NSData *)arg1 ;
-(void)setResponseHeaders:(NSDictionary *)arg1 ;
-(NSNumber *)responseStatus;
-(void)setResponseStatus:(NSNumber *)arg1 ;
-(BOOL)disableIDSTranslation;
-(NSString *)userAgentOverride;
-(BOOL)wantsIDSProtocolVersion;
-(NSNumber *)maximumResponseSize;
-(void)setMaximumResponseSize:(NSNumber *)arg1 ;
-(NSDictionary *)responseHeaders;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)messageBody;
-(NSNumber *)responseCode;
@end

