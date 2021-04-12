/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <libobjc.A.dylib/SSXPCCoding.h>

@class SSAccount, NSError, NSDictionary, NSString;

@interface SSAuthenticateResponse : NSObject <SSXPCCoding> {

	SSAccount* _authenticatedAccount;
	long long _authenticateResponseType;
	unsigned long long _credentialSource;
	NSError* _error;
	NSDictionary* _responseDictionary;

}

@property (nonatomic,retain) SSAccount * authenticatedAccount;                 //@synthesize authenticatedAccount=_authenticatedAccount - In the implementation block
@property (assign,nonatomic) long long authenticateResponseType;               //@synthesize authenticateResponseType=_authenticateResponseType - In the implementation block
@property (assign,nonatomic) unsigned long long credentialSource;              //@synthesize credentialSource=_credentialSource - In the implementation block
@property (nonatomic,retain) NSError * error;                                  //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) NSDictionary * responseDictionary;                  //@synthesize responseDictionary=_responseDictionary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)setCredentialSource:(unsigned long long)arg1 ;
-(NSDictionary *)responseDictionary;
-(void)setError:(NSError *)arg1 ;
-(void)_setError:(id)arg1 ;
-(NSError *)error;
-(void)setResponseDictionary:(NSDictionary *)arg1 ;
-(NSString *)description;
-(void)setAuthenticatedAccount:(SSAccount *)arg1 ;
-(void)setAuthenticateResponseType:(long long)arg1 ;
-(SSAccount *)authenticatedAccount;
-(long long)authenticateResponseType;
-(unsigned long long)credentialSource;
@end

