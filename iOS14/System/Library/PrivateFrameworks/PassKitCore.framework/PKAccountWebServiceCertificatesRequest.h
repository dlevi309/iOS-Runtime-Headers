/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKAccountWebServiceRequest.h>

@class NSURL;

@interface PKAccountWebServiceCertificatesRequest : PKAccountWebServiceRequest {

	NSURL* _baseURL;
	unsigned long long _destination;

}

@property (nonatomic,retain) NSURL * baseURL;                             //@synthesize baseURL=_baseURL - In the implementation block
@property (assign,nonatomic) unsigned long long destination;              //@synthesize destination=_destination - In the implementation block
-(void)setDestination:(unsigned long long)arg1 ;
-(NSURL *)baseURL;
-(id)_urlRequestWithAppleAccountInformation:(id)arg1 ;
-(void)setBaseURL:(NSURL *)arg1 ;
-(unsigned long long)destination;
@end

