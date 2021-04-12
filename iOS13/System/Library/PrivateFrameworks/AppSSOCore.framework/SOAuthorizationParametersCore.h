/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSString *)operation;
-(void)setOperation:(NSString *)arg1 ;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(long long)responseCode;
-(void)setResponseCode:(long long)arg1 ;
-(NSData *)httpBody;
-(NSData *)auditTokenData;
-(void)setAuditTokenData:(NSData *)arg1 ;
-(NSDictionary *)httpHeaders;
-(void)setHttpHeaders:(NSDictionary *)arg1 ;
-(void)setHttpBody:(NSData *)arg1 ;
-(void)setUseInternalExtensions:(BOOL)arg1 ;
-(BOOL)useInternalExtensions;
@end

