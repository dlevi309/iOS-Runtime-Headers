/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSString, NSData, NSURL;

@interface CKDCodeLocalFunctionInvokeURLRequest : CKDURLRequest {

	/*^block*/id _serializedResultsCallback;
	NSString* _serviceName;
	NSString* _functionName;
	NSData* _serializedParameters;
	NSURL* _explicitBaseURL;

}

@property (nonatomic,copy) NSString * serviceName;                       //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,copy) NSString * functionName;                      //@synthesize functionName=_functionName - In the implementation block
@property (nonatomic,retain) NSData * serializedParameters;              //@synthesize serializedParameters=_serializedParameters - In the implementation block
@property (nonatomic,copy) NSURL * explicitBaseURL;                      //@synthesize explicitBaseURL=_explicitBaseURL - In the implementation block
@property (nonatomic,copy) id serializedResultsCallback;                 //@synthesize serializedResultsCallback=_serializedResultsCallback - In the implementation block
-(id)url;
-(NSString *)serviceName;
-(long long)partitionType;
-(void)setServiceName:(NSString *)arg1 ;
-(NSString *)functionName;
-(void)setFunctionName:(NSString *)arg1 ;
-(NSURL *)explicitBaseURL;
-(void)setExplicitBaseURL:(NSURL *)arg1 ;
-(id)additionalHeaderValues;
-(NSData *)serializedParameters;
-(BOOL)requestGETPreAuth;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(Class)expectedResponseClass;
-(BOOL)parsingStandaloneMessage;
-(long long)serverType;
-(BOOL)shouldCompressBody;
-(BOOL)allowsAnonymousAccount;
-(Class)requestMessageClass;
-(id)requestBodyStream;
-(void)setSerializedParameters:(NSData *)arg1 ;
-(id)serializedResultsCallback;
-(id)initWithServiceName:(id)arg1 functionName:(id)arg2 serializedParameters:(id)arg3 explicitBaseURL:(id)arg4 ;
-(void)setSerializedResultsCallback:(id)arg1 ;
@end

