/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSString, NSData, NSURL;

@interface CKDCodeLocalFunctionInvokeURLRequest : CKDURLRequest {

	/*^block*/id _serializedResultsCallback;
	NSString* _serviceName;
	NSString* _functionName;
	NSData* _serializedParameters;
	NSURL* _resolvedBaseURL;

}

@property (nonatomic,copy) NSString * serviceName;                       //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,copy) NSString * functionName;                      //@synthesize functionName=_functionName - In the implementation block
@property (nonatomic,retain) NSData * serializedParameters;              //@synthesize serializedParameters=_serializedParameters - In the implementation block
@property (nonatomic,copy) NSURL * resolvedBaseURL;                      //@synthesize resolvedBaseURL=_resolvedBaseURL - In the implementation block
@property (nonatomic,copy) id serializedResultsCallback;                 //@synthesize serializedResultsCallback=_serializedResultsCallback - In the implementation block
-(long long)partitionType;
-(BOOL)allowsAnonymousAccount;
-(id)additionalHeaderValues;
-(id)url;
-(NSString *)functionName;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(NSURL *)resolvedBaseURL;
-(void)setResolvedBaseURL:(NSURL *)arg1 ;
-(void)setFunctionName:(NSString *)arg1 ;
-(NSString *)serviceName;
-(long long)databaseScope;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
-(NSData *)serializedParameters;
-(void)setSerializedParameters:(NSData *)arg1 ;
-(id)requestBodyStream;
-(BOOL)requestGETPreAuth;
-(Class)expectedResponseClass;
-(BOOL)parsingStandaloneMessage;
-(long long)serverType;
-(BOOL)shouldCompressBody;
-(Class)requestMessageClass;
-(id)serializedResultsCallback;
-(id)initWithOperation:(id)arg1 serviceName:(id)arg2 functionName:(id)arg3 serializedParameters:(id)arg4 resolvedBaseURL:(id)arg5 ;
-(void)setSerializedResultsCallback:(id)arg1 ;
@end

