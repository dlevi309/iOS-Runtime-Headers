/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DAEASOAuthFramework.framework/DAEASOAuthFramework
*/


@class NSError, NSDictionary, NSString, NSDate;

@interface DAEASOAuthTokenRefreshResponse : NSObject {

	long long _statusCode;
	NSError* _error;
	NSDictionary* _responseBody;
	NSString* _accessToken;
	NSString* _refreshToken;
	NSDate* _expiryDate;

}

@property (nonatomic,readonly) long long statusCode;                     //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,readonly) NSError * error;                          //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSDictionary * responseBody;              //@synthesize responseBody=_responseBody - In the implementation block
@property (nonatomic,readonly) NSString * accessToken;                   //@synthesize accessToken=_accessToken - In the implementation block
@property (nonatomic,readonly) NSString * refreshToken;                  //@synthesize refreshToken=_refreshToken - In the implementation block
@property (nonatomic,readonly) NSDate * expiryDate;                      //@synthesize expiryDate=_expiryDate - In the implementation block
-(NSError *)error;
-(long long)statusCode;
-(NSDate *)expiryDate;
-(NSDictionary *)responseBody;
-(NSString *)accessToken;
-(id)initWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3 ;
-(NSString *)refreshToken;
@end

