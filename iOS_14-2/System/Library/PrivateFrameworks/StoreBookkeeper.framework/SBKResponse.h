/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
*/


@class NSDictionary, NSError, NSString, SBKResponseStatus;

@interface SBKResponse : NSObject {

	NSDictionary* _responseDictionary;
	unsigned long long _responseCode;
	NSDictionary* _responseHeaderFields;
	NSError* _error;
	double _retrySeconds;
	NSString* _MIMEType;
	SBKResponseStatus* _responseStatus;

}

@property (nonatomic,readonly) NSString * MIMEType;                              //@synthesize MIMEType=_MIMEType - In the implementation block
@property (nonatomic,readonly) SBKResponseStatus * responseStatus;               //@synthesize responseStatus=_responseStatus - In the implementation block
@property (nonatomic,readonly) unsigned long long responseCode;                  //@synthesize responseCode=_responseCode - In the implementation block
@property (nonatomic,readonly) NSDictionary * responseHeaderFields;              //@synthesize responseHeaderFields=_responseHeaderFields - In the implementation block
@property (nonatomic,readonly) NSDictionary * responseDictionary;                //@synthesize responseDictionary=_responseDictionary - In the implementation block
@property (nonatomic,readonly) NSError * error;                                  //@synthesize error=_error - In the implementation block
@property (readonly) long long statusCode; 
@property (copy,readonly) NSString * consoleDescription; 
@property (readonly) NSError * requestError; 
@property (readonly) BOOL isSuccess; 
@property (readonly) BOOL isRecoverable; 
@property (readonly) BOOL isError; 
@property (readonly) BOOL shouldFileRadar; 
@property (readonly) BOOL isGenericError; 
@property (readonly) BOOL isUnsupportedClient; 
@property (readonly) BOOL isAuthenticationError; 
@property (readonly) BOOL isValidationError; 
@property (readonly) BOOL isPuntedError; 
@property (readonly) double retrySeconds;                                        //@synthesize retrySeconds=_retrySeconds - In the implementation block
+(id)responseWithResponse:(id)arg1 ;
+(id)responseWithURLResponse:(id)arg1 responseDictionary:(id)arg2 ;
+(id)responseWithCode:(unsigned long long)arg1 headerFields:(id)arg2 responseDictionary:(id)arg3 MIMEType:(id)arg4 error:(id)arg5 ;
-(NSString *)MIMEType;
-(BOOL)isSuccess;
-(NSDictionary *)responseDictionary;
-(NSError *)error;
-(long long)statusCode;
-(BOOL)isError;
-(id)description;
-(NSString *)consoleDescription;
-(BOOL)isRecoverable;
-(SBKResponseStatus *)responseStatus;
-(unsigned long long)responseCode;
-(double)retrySeconds;
-(BOOL)isAuthenticationError;
-(NSError *)requestError;
-(NSDictionary *)responseHeaderFields;
-(BOOL)isUnsupportedClient;
-(BOOL)isGenericError;
-(BOOL)isValidationError;
-(id)initWithCode:(unsigned long long)arg1 headerFields:(id)arg2 responseDictionary:(id)arg3 MIMEType:(id)arg4 error:(id)arg5 ;
-(BOOL)isPuntedError;
-(id)initWithURLResponse:(id)arg1 responseDictionary:(id)arg2 ;
-(BOOL)shouldFileRadar;
@end

