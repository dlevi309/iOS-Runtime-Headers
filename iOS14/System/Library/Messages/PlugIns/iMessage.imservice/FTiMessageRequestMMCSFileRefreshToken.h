/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Messages/PlugIns/iMessage.imservice/iMessage
*/

#import <iMessage/iMessage-Structs.h>
#import <IDSFoundation/IDSMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NSNumber;

@interface FTiMessageRequestMMCSFileRefreshToken : IDSMessage <NSCopying> {

	NSString* _owner;
	NSData* _signature;
	NSNumber* _fileLength;
	NSString* _requestContentHeaders;
	NSNumber* _requestContentVersion;
	NSString* _responseContentHeaders;
	NSData* _responseContentBody;
	NSString* _authURL;
	NSNumber* _responseContentVersion;

}

@property (nonatomic,copy) NSString * owner;                               //@synthesize owner=_owner - In the implementation block
@property (nonatomic,copy) NSData * signature;                             //@synthesize signature=_signature - In the implementation block
@property (nonatomic,copy) NSNumber * fileLength;                          //@synthesize fileLength=_fileLength - In the implementation block
@property (nonatomic,copy) NSString * authURL;                             //@synthesize authURL=_authURL - In the implementation block
@property (nonatomic,copy) NSNumber * requestContentVersion;               //@synthesize requestContentVersion=_requestContentVersion - In the implementation block
@property (nonatomic,copy) NSString * requestContentHeaders;               //@synthesize requestContentHeaders=_requestContentHeaders - In the implementation block
@property (nonatomic,copy) NSNumber * responseContentVersion;              //@synthesize responseContentVersion=_responseContentVersion - In the implementation block
@property (nonatomic,copy) NSString * responseContentHeaders;              //@synthesize responseContentHeaders=_responseContentHeaders - In the implementation block
@property (nonatomic,copy) NSData * responseContentBody;                   //@synthesize responseContentBody=_responseContentBody - In the implementation block
-(NSData *)signature;
-(id)init;
-(NSString *)owner;
-(long long)responseCommand;
-(NSString *)authURL;
-(void)handleResponseDictionary:(id)arg1 ;
-(id)requiredKeys;
-(void)setOwner:(NSString *)arg1 ;
-(long long)command;
-(void)setSignature:(NSData *)arg1 ;
-(NSNumber *)fileLength;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)messageBody;
-(void)setAuthURL:(NSString *)arg1 ;
-(void)setFileLength:(NSNumber *)arg1 ;
-(void)setRequestContentHeaders:(NSString *)arg1 ;
-(NSNumber *)requestContentVersion;
-(void)setRequestContentVersion:(NSNumber *)arg1 ;
-(NSString *)requestContentHeaders;
-(NSNumber *)responseContentVersion;
-(void)setResponseContentVersion:(NSNumber *)arg1 ;
-(NSString *)responseContentHeaders;
-(void)setResponseContentHeaders:(NSString *)arg1 ;
-(NSData *)responseContentBody;
-(void)setResponseContentBody:(NSData *)arg1 ;
@end

