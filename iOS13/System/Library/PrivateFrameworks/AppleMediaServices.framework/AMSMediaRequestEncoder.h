/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <libobjc.A.dylib/AMSBagConsumer.h>
#import <libobjc.A.dylib/AMSRequestEncoding.h>

@protocol AMSMediaTokenServiceProtocol;
@class AMSURLRequestEncoder, ACAccount, AMSProcessInfo, NSString;

@interface AMSMediaRequestEncoder : NSObject <AMSBagConsumer, AMSRequestEncoding> {

	BOOL _disableAccountMediaTypeComponent;
	id<AMSMediaTokenServiceProtocol> _tokenService;
	AMSURLRequestEncoder* _requestEncoder;

}

@property (nonatomic,readonly) AMSURLRequestEncoder * requestEncoder;                      //@synthesize requestEncoder=_requestEncoder - In the implementation block
@property (assign,nonatomic) BOOL disableAccountMediaTypeComponent;                        //@synthesize disableAccountMediaTypeComponent=_disableAccountMediaTypeComponent - In the implementation block
@property (assign,nonatomic) BOOL URLKnownToBeTrusted; 
@property (nonatomic,retain) ACAccount * account; 
@property (nonatomic,readonly) id<AMSBagProtocol> bag; 
@property (nonatomic,retain) AMSProcessInfo * clientInfo; 
@property (assign,nonatomic) BOOL disableResponseDecoding; 
@property (nonatomic,retain) NSString * logKey; 
@property (nonatomic,retain) id<AMSResponseDecoding> responseDecoder; 
@property (nonatomic,readonly) id<AMSMediaTokenServiceProtocol> tokenService;              //@synthesize tokenService=_tokenService - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)bagKeySet;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(AMSProcessInfo *)clientInfo;
-(void)setClientInfo:(AMSProcessInfo *)arg1 ;
-(id<AMSBagProtocol>)bag;
-(NSString *)logKey;
-(void)setLogKey:(NSString *)arg1 ;
-(void)setResponseDecoder:(id<AMSResponseDecoding>)arg1 ;
-(id)requestByEncodingRequest:(id)arg1 parameters:(id)arg2 ;
-(id<AMSMediaTokenServiceProtocol>)tokenService;
-(AMSURLRequestEncoder *)requestEncoder;
-(BOOL)disableResponseDecoding;
-(id<AMSResponseDecoding>)responseDecoder;
-(void)setDisableResponseDecoding:(BOOL)arg1 ;
-(id)initWithTokenService:(id)arg1 bag:(id)arg2 ;
-(BOOL)URLKnownToBeTrusted;
-(void)setURLKnownToBeTrusted:(BOOL)arg1 ;
-(id)requestWithComponents:(id)arg1 ;
-(BOOL)disableAccountMediaTypeComponent;
-(void)setDisableAccountMediaTypeComponent:(BOOL)arg1 ;
@end

