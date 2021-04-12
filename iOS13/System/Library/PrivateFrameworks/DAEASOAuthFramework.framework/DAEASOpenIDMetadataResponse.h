/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DAEASOAuthFramework.framework/DAEASOAuthFramework
*/


@class NSString, NSDictionary, NSError;

@interface DAEASOpenIDMetadataResponse : NSObject {

	NSString* _tokenRequestURI;
	NSDictionary* _data;
	long long _statusCode;
	NSError* _error;
	NSString* _errorMessage;

}

@property (nonatomic,readonly) NSString * tokenRequestURI;              //@synthesize tokenRequestURI=_tokenRequestURI - In the implementation block
@property (nonatomic,readonly) NSDictionary * data;                     //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) long long statusCode;                    //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,readonly) NSError * error;                         //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSString * errorMessage;                 //@synthesize errorMessage=_errorMessage - In the implementation block
-(NSDictionary *)data;
-(NSError *)error;
-(long long)statusCode;
-(NSString *)errorMessage;
-(id)initWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3 ;
-(NSString *)tokenRequestURI;
@end

