/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSData, NSHTTPURLResponse, NSDictionary;

@interface SLFacebookResponse : NSObject <NSCoding> {

	NSData* _responseData;
	NSHTTPURLResponse* _urlResponse;
	id _untypedResponseParameters;
	long long _httpErrorCode;

}

@property (readonly) NSDictionary * responseParameters; 
@property (readonly) int APIresponseErrorCode; 
@property (readonly) long long httpErrorCode;                        //@synthesize httpErrorCode=_httpErrorCode - In the implementation block
@property (readonly) NSHTTPURLResponse * urlResponse; 
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)hasError;
-(NSDictionary *)responseParameters;
-(NSHTTPURLResponse *)urlResponse;
-(BOOL)hasBadTokenError;
-(long long)httpErrorCode;
-(id)untypedResponseParameters;
-(id)initWithResponseData:(id)arg1 urlResponse:(id)arg2 ;
-(BOOL)hasHTTPStatusOK;
-(BOOL)isBatchResponse;
-(long long)httpStatusCode;
-(int)APIresponseErrorCode;
-(BOOL)hasMissingTokenOrAppID;
-(id)checkpointURL;
-(id)failedRequestIDs;
@end

