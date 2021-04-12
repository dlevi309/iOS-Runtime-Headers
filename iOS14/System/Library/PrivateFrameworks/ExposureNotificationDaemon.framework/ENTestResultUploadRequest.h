/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
*/

#import <ExposureNotificationDaemon/ENTestResultNetworkRequest.h>

@class NSString, NSData, NSArray, NSNumber;

@interface ENTestResultUploadRequest : ENTestResultNetworkRequest {

	NSString* _certificate;
	NSString* _healthAuthorityID;
	NSString* _requestRevisionToken;
	NSData* _symmetricKey;
	NSArray* _temporaryExposureKeys;
	NSNumber* _symptomOnsetInterval;
	BOOL _userDidTravel;
	NSString* _requestPadding;
	NSString* _responseRevisionToken;
	NSNumber* _insertedExposures;

}

@property (nonatomic,copy,readonly) NSString * requestPadding;                     //@synthesize requestPadding=_requestPadding - In the implementation block
@property (nonatomic,copy,readonly) NSString * responseRevisionToken;              //@synthesize responseRevisionToken=_responseRevisionToken - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * insertedExposures;                  //@synthesize insertedExposures=_insertedExposures - In the implementation block
+(id)uploadRequestWithCertificate:(id)arg1 healthAuthorityID:(id)arg2 revisionToken:(id)arg3 symmetricKey:(id)arg4 temporaryExposureKeys:(id)arg5 userMetadata:(id)arg6 requestURL:(id)arg7 URLSession:(id)arg8 queue:(id)arg9 error:(id*)arg10 ;
-(id)bodyJSON;
-(id)handleResponse:(id)arg1 body:(id)arg2 ;
-(NSString *)requestPadding;
-(NSString *)responseRevisionToken;
-(NSNumber *)insertedExposures;
@end

