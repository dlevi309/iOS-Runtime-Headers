/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
*/

#import <ExposureNotificationDaemon/ENTestResultNetworkRequest.h>

@class NSString, NSData;

@interface ENTestResultCertificateRequest : ENTestResultNetworkRequest {

	NSString* _token;
	NSData* _symmetricKey;
	NSData* _HMAC;
	NSString* _certificate;

}

@property (nonatomic,copy,readonly) NSString * token;                    //@synthesize token=_token - In the implementation block
@property (nonatomic,copy,readonly) NSData * symmetricKey;               //@synthesize symmetricKey=_symmetricKey - In the implementation block
@property (nonatomic,copy,readonly) NSData * HMAC;                       //@synthesize HMAC=_HMAC - In the implementation block
@property (nonatomic,copy,readonly) NSString * certificate;              //@synthesize certificate=_certificate - In the implementation block
+(id)deriveHMACForTemporaryExposureKeys:(id)arg1 symmetricKey:(id)arg2 ;
+(id)certificateRequestWithToken:(id)arg1 temporaryExposureKeys:(id)arg2 APIKey:(id)arg3 requestURL:(id)arg4 URLSession:(id)arg5 queue:(id)arg6 error:(id*)arg7 ;
-(NSData *)HMAC;
-(NSString *)certificate;
-(NSString *)token;
-(id)bodyJSON;
-(id)handleResponse:(id)arg1 body:(id)arg2 ;
-(NSData *)symmetricKey;
@end

