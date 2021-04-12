/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
*/

#import <Radio/RadioRequest.h>

@class SSURLConnectionRequest;

@interface RadioTermsCheckRequest : RadioRequest {

	SSURLConnectionRequest* _request;
	unsigned long long _acceptedTermsVersion;

}

@property (assign,nonatomic) unsigned long long acceptedTermsVersion;              //@synthesize acceptedTermsVersion=_acceptedTermsVersion - In the implementation block
-(void)cancel;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned long long)acceptedTermsVersion;
-(void)setAcceptedTermsVersion:(unsigned long long)arg1 ;
@end

