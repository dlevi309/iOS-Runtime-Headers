/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppSSOCore.framework/AppSSOCore
*/


@class NSString, NSURL, NSDictionary, NSData;

@interface SOAuthorizationParametersCore : NSObject {

	BOOL _useInternalExtensions;
	NSString* _operation;
	NSURL* _url;
	NSDictionary* _httpHeaders;
	NSData* _httpBody;
	NSData* _auditTokenData;
	long long _responseCode;

}

@property (nonatomic,copy) NSString * operation;                      //@synthesize operation=_operation - In the implementation block
@property (nonatomic,retain) NSURL * url;                             //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSDictionary * httpHeaders;              //@synthesize httpHeaders=_httpHeaders - In the implementation block
@property (nonatomic,retain) NSData * httpBody;                       //@synthesize httpBody=_httpBody - In the implementation block
@property (nonatomic,retain) NSData * auditTokenData;                 //@synthesize auditTokenData=_auditTokenData - In the implementation block
@property (assign,nonatomic) BOOL useInternalExtensions;              //@synthesize useInternalExtensions=_useInternalExtensions - In the implementation block
@property (assign,nonatomic) long long responseCode;                  //@synthesize responseCode=_responseCode - In the implementation block
-(void)setOperation:(NSString *)arg1 ;
-(id)init;
-(NSString *)operation;
-(void)setResponseCode:(long long)arg1 ;
-(void)setAuditTokenData:(NSData *)arg1 ;
-(NSURL *)url;
-(NSData *)httpBody;
-(void)setHttpHeaders:(NSDictionary *)arg1 ;
-(BOOL)useInternalExtensions;
-(NSDictionary *)httpHeaders;
-(void)setHttpBody:(NSData *)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(NSData *)auditTokenData;
-(void)setUseInternalExtensions:(BOOL)arg1 ;
-(long long)responseCode;
@end

