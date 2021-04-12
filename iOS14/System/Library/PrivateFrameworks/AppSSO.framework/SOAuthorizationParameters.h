/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppSSO.framework/AppSSO
*/


@class SOAuthorizationParametersCore, NSString, NSURL, NSDictionary, NSData;

@interface SOAuthorizationParameters : NSObject {

	SOAuthorizationParametersCore* _authorizationParametersCore;
	long long _responseCode;

}

@property (nonatomic,readonly) SOAuthorizationParametersCore * authorizationParametersCore; 
@property (nonatomic,copy) NSString * operation; 
@property (nonatomic,retain) NSURL * url; 
@property (nonatomic,retain) NSDictionary * httpHeaders; 
@property (nonatomic,retain) NSData * httpBody; 
@property (nonatomic,retain) NSData * auditTokenData; 
@property (assign,nonatomic) BOOL useInternalExtensions; 
@property (assign,nonatomic) long long responseCode;                                                     //@synthesize responseCode=_responseCode - In the implementation block
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
-(SOAuthorizationParametersCore *)authorizationParametersCore;
-(void)setUseInternalExtensions:(BOOL)arg1 ;
-(long long)responseCode;
@end

