/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
*/

#import <FMCore/FMCommandBase.h>

@protocol OS_dispatch_queue;
@class NSError, NSDictionary, NSObject;

@interface FMJSONCommand : FMCommandBase {

	BOOL __hasParsedResponseBody;
	NSError* _jsonResponseParseError;
	NSDictionary* __responseBodyDict;
	NSDictionary* __requestBodyDict;
	NSObject*<OS_dispatch_queue> _responseQueue;

}

@property (assign,nonatomic) BOOL _hasParsedResponseBody;                             //@synthesize _hasParsedResponseBody=__hasParsedResponseBody - In the implementation block
@property (nonatomic,retain) NSDictionary * _responseBodyDict;                        //@synthesize _responseBodyDict=__responseBodyDict - In the implementation block
@property (nonatomic,retain) NSDictionary * _requestBodyDict;                         //@synthesize _requestBodyDict=__requestBodyDict - In the implementation block
@property (nonatomic,retain) NSError * jsonResponseParseError;                        //@synthesize jsonResponseParseError=_jsonResponseParseError - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> responseQueue;              //@synthesize responseQueue=_responseQueue - In the implementation block
@property (nonatomic,readonly) NSDictionary * jsonResponseDictionary; 
@property (nonatomic,readonly) NSDictionary * serverAlertInfo; 
-(id)body;
-(id)init;
-(void)sendRequest;
-(id)headers;
-(NSObject*<OS_dispatch_queue>)responseQueue;
-(void)setResponseQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)set_hasParsedResponseBody:(BOOL)arg1 ;
-(void)set_responseBodyDict:(NSDictionary *)arg1 ;
-(void)setJsonResponseParseError:(NSError *)arg1 ;
-(NSDictionary *)_requestBodyDict;
-(id)jsonBodyDictionary;
-(void)set_requestBodyDict:(NSDictionary *)arg1 ;
-(BOOL)_hasParsedResponseBody;
-(NSDictionary *)_responseBodyDict;
-(NSDictionary *)jsonResponseDictionary;
-(NSDictionary *)serverAlertInfo;
-(NSError *)jsonResponseParseError;
@end

