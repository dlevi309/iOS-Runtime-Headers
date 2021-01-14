/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
*/

#import <ExposureNotificationDaemon/ENTestResultNetworkRequest.h>

@class NSString, NSSet, NSDictionary;

@interface ENTestResultVerificationRequest : ENTestResultNetworkRequest {

	NSString* _verificationCode;
	NSSet* _acceptedTestTypes;
	NSString* _token;
	NSDictionary* _metadata;

}

@property (nonatomic,copy,readonly) NSString * verificationCode;              //@synthesize verificationCode=_verificationCode - In the implementation block
@property (nonatomic,copy,readonly) NSSet * acceptedTestTypes;                //@synthesize acceptedTestTypes=_acceptedTestTypes - In the implementation block
@property (nonatomic,copy,readonly) NSString * token;                         //@synthesize token=_token - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * metadata;                  //@synthesize metadata=_metadata - In the implementation block
+(id)_metadataFromVerificationResponseDictionary:(id)arg1 error:(id*)arg2 ;
+(id)verificationRequestWithCode:(id)arg1 acceptedReportTypes:(id)arg2 APIKey:(id)arg3 requestURL:(id)arg4 URLSession:(id)arg5 queue:(id)arg6 error:(id*)arg7 ;
-(NSString *)token;
-(NSDictionary *)metadata;
-(NSString *)verificationCode;
-(id)_testVerificationErrorForErrorCodeString:(id)arg1 ;
-(id)errorForUnsuccessfulResponse:(id)arg1 body:(id)arg2 ;
-(id)bodyJSON;
-(id)handleResponse:(id)arg1 body:(id)arg2 ;
-(NSSet *)acceptedTestTypes;
@end

