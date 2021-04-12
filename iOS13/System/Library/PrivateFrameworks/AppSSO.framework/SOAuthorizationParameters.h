/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(SOAuthorizationParametersCore *)authorizationParametersCore;
-(BOOL)useInternalExtensions;
@end

