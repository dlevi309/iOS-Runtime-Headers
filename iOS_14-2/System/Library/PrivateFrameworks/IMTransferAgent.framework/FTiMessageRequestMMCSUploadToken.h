/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMTransferAgent.framework/IMTransferAgent
*/

#import <IMTransferAgent/IMTransferAgent-Structs.h>
#import <IDSFoundation/IDSMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString, NSNumber;

@interface FTiMessageRequestMMCSUploadToken : IDSMessage <NSCopying> {

	NSData* pushToken;
	NSString* _responseAuthToken;
	NSNumber* _length;
	NSData* _signature;
	NSString* _responseRequestURL;
	NSString* _responseRequestorID;
	long long _contentVersion;
	NSString* _contentHeaders;
	NSData* _contentBody;
	NSString* _responseContentHeaders;
	NSData* _responseContentBody;
	long long _responseContentVersion;
	NSData* _sessionToken;
	NSString* _senderID;
	NSString* _destinationID;
	NSString* _anonymousSenderID;

}

@property (copy) NSData * signature;                                  //@synthesize signature=_signature - In the implementation block
@property (copy) NSNumber * length;                                   //@synthesize length=_length - In the implementation block
@property (copy) NSString * responseAuthToken;                        //@synthesize responseAuthToken=_responseAuthToken - In the implementation block
@property (copy) NSString * responseRequestURL;                       //@synthesize responseRequestURL=_responseRequestURL - In the implementation block
@property (copy) NSString * responseRequestorID;                      //@synthesize responseRequestorID=_responseRequestorID - In the implementation block
@property (assign) long long contentVersion;                          //@synthesize contentVersion=_contentVersion - In the implementation block
@property (copy) NSString * contentHeaders;                           //@synthesize contentHeaders=_contentHeaders - In the implementation block
@property (copy) NSData * contentBody;                                //@synthesize contentBody=_contentBody - In the implementation block
@property (copy) NSString * responseContentHeaders;                   //@synthesize responseContentHeaders=_responseContentHeaders - In the implementation block
@property (copy) NSData * responseContentBody;                        //@synthesize responseContentBody=_responseContentBody - In the implementation block
@property (assign) long long responseContentVersion;                  //@synthesize responseContentVersion=_responseContentVersion - In the implementation block
@property (nonatomic,copy) NSData * pushToken; 
@property (nonatomic,copy) NSData * sessionToken;                     //@synthesize sessionToken=_sessionToken - In the implementation block
@property (nonatomic,copy) NSString * senderID;                       //@synthesize senderID=_senderID - In the implementation block
@property (nonatomic,copy) NSString * destinationID;                  //@synthesize destinationID=_destinationID - In the implementation block
@property (nonatomic,copy) NSString * anonymousSenderID;              //@synthesize anonymousSenderID=_anonymousSenderID - In the implementation block
-(void)setLength:(NSNumber *)arg1 ;
-(void)setPushToken:(NSData *)arg1 ;
-(NSData *)signature;
-(NSString *)senderID;
-(NSData *)pushToken;
-(id)init;
-(NSNumber *)length;
-(NSString *)destinationID;
-(void)setDestinationID:(NSString *)arg1 ;
-(long long)responseCommand;
-(void)setSenderID:(NSString *)arg1 ;
-(void)setSessionToken:(NSData *)arg1 ;
-(void)handleResponseDictionary:(id)arg1 ;
-(id)requiredKeys;
-(NSData *)sessionToken;
-(void)setContentVersion:(long long)arg1 ;
-(long long)contentVersion;
-(long long)command;
-(void)setSignature:(NSData *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)messageBody;
-(long long)responseContentVersion;
-(void)setResponseContentVersion:(long long)arg1 ;
-(NSString *)responseContentHeaders;
-(void)setResponseContentHeaders:(NSString *)arg1 ;
-(NSData *)responseContentBody;
-(void)setResponseContentBody:(NSData *)arg1 ;
-(NSString *)responseAuthToken;
-(void)setResponseAuthToken:(NSString *)arg1 ;
-(NSString *)responseRequestorID;
-(void)setResponseRequestorID:(NSString *)arg1 ;
-(NSString *)contentHeaders;
-(void)setContentHeaders:(NSString *)arg1 ;
-(void)setResponseRequestURL:(NSString *)arg1 ;
-(void)setContentBody:(NSData *)arg1 ;
-(void)setAnonymousSenderID:(NSString *)arg1 ;
-(NSString *)responseRequestURL;
-(NSData *)contentBody;
-(NSString *)anonymousSenderID;
@end

