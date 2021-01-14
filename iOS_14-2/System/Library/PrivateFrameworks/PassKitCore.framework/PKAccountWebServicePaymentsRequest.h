/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKAccountWebServiceRequest.h>

@class NSString, NSURL, NSDate;

@interface PKAccountWebServicePaymentsRequest : PKAccountWebServiceRequest {

	NSString* _accountIdentifier;
	NSURL* _baseURL;
	NSDate* _beginDate;
	NSDate* _endDate;
	long long _state;

}

@property (nonatomic,copy) NSString * accountIdentifier;              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,retain) NSURL * baseURL;                         //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,copy) NSDate * beginDate;                        //@synthesize beginDate=_beginDate - In the implementation block
@property (nonatomic,copy) NSDate * endDate;                          //@synthesize endDate=_endDate - In the implementation block
@property (assign,nonatomic) long long state;                         //@synthesize state=_state - In the implementation block
-(NSDate *)endDate;
-(NSURL *)baseURL;
-(NSString *)accountIdentifier;
-(void)setEndDate:(NSDate *)arg1 ;
-(NSDate *)beginDate;
-(void)setBeginDate:(NSDate *)arg1 ;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(id)_urlRequestWithAppleAccountInformation:(id)arg1 ;
-(void)setState:(long long)arg1 ;
-(long long)state;
-(void)setBaseURL:(NSURL *)arg1 ;
@end

