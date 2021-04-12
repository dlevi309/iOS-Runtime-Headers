/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSURL *)baseURL;
-(unsigned long long)destination;
-(void)setDestination:(unsigned long long)arg1 ;
-(void)setBaseURL:(NSURL *)arg1 ;
-(id)_urlRequestWithAppleAccountInformation:(id)arg1 ;
@end

