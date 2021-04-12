/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMTransferAgent.framework/IMTransferAgent
*/

#import <IMTransferAgent/IMTransferAgent-Structs.h>
#import <IDSFoundation/IDSMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface FTiMessageRequestMMCSDownloadToken : IDSMessage <NSCopying> {

	NSString* _owner;
	NSString* _responseAuthToken;
	NSData* _signature;
	NSString* _responseRequestorID;
	long long _contentVersion;
	NSString* _contentHeaders;
	NSString* _authURLString;
	NSData* _responseContentBody;
	long long _responseContentVersion;

}

@property (copy) NSString * owner;                                //@synthesize owner=_owner - In the implementation block
@property (copy) NSData * signature;                              //@synthesize signature=_signature - In the implementation block
@property (copy) NSString * responseAuthToken;                    //@synthesize responseAuthToken=_responseAuthToken - In the implementation block
@property (copy) NSString * responseRequestorID;                  //@synthesize responseRequestorID=_responseRequestorID - In the implementation block
@property (assign) long long contentVersion;                      //@synthesize contentVersion=_contentVersion - In the implementation block
@property (copy) NSString * contentHeaders;                       //@synthesize contentHeaders=_contentHeaders - In the implementation block
@property (copy) NSString * authURLString;                        //@synthesize authURLString=_authURLString - In the implementation block
@property (copy) NSData * responseContentBody;                    //@synthesize responseContentBody=_responseContentBody - In the implementation block
@property (assign) long long responseContentVersion;              //@synthesize responseContentVersion=_responseContentVersion - In the implementation block
-(NSData *)signature;
-(id)init;
-(NSString *)owner;
-(long long)responseCommand;
-(void)handleResponseDictionary:(id)arg1 ;
-(id)requiredKeys;
-(void)setOwner:(NSString *)arg1 ;
-(void)setContentVersion:(long long)arg1 ;
-(long long)contentVersion;
-(long long)command;
-(void)setSignature:(NSData *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)messageBody;
-(long long)responseContentVersion;
-(void)setResponseContentVersion:(long long)arg1 ;
-(NSData *)responseContentBody;
-(void)setResponseContentBody:(NSData *)arg1 ;
-(NSString *)responseAuthToken;
-(void)setResponseAuthToken:(NSString *)arg1 ;
-(NSString *)responseRequestorID;
-(void)setResponseRequestorID:(NSString *)arg1 ;
-(NSString *)contentHeaders;
-(void)setContentHeaders:(NSString *)arg1 ;
-(NSString *)authURLString;
-(void)setAuthURLString:(NSString *)arg1 ;
@end

