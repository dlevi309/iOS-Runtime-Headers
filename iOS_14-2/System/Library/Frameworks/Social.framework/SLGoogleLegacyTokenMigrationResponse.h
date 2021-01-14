/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/


@class NSError, NSString;

@interface SLGoogleLegacyTokenMigrationResponse : NSObject {

	long long _statusCode;
	NSError* _error;
	NSString* _responseBody;

}

@property (readonly) long long statusCode;                 //@synthesize statusCode=_statusCode - In the implementation block
@property (readonly) NSError * error;                      //@synthesize error=_error - In the implementation block
@property (readonly) NSString * responseBody;              //@synthesize responseBody=_responseBody - In the implementation block
-(NSError *)error;
-(long long)statusCode;
-(NSString *)responseBody;
-(id)initWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3 ;
@end

