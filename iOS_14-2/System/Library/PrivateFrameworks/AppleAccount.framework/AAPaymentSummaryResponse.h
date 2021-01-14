/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/

#import <AppleAccount/AAResponse.h>

@class NSDictionary, NSString;

@interface AAPaymentSummaryResponse : AAResponse {

	NSDictionary* _responseParameters;

}

@property (nonatomic,readonly) unsigned long long numberOfCards; 
@property (nonatomic,readonly) NSString * description; 
-(NSString *)description;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(unsigned long long)numberOfCards;
@end

