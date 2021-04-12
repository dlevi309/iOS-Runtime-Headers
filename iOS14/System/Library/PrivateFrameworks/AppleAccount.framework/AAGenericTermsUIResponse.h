/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/

#import <AppleAccount/AAResponse.h>

@class NSDictionary, NSString, NSData;

@interface AAGenericTermsUIResponse : AAResponse {

	NSDictionary* _responseTermsDictionary;
	NSString* _responseAgreeURL;
	NSData* _responseData;

}

@property (nonatomic,readonly) NSData * responseData; 
@property (nonatomic,readonly) NSString * agreeURL; 
@property (nonatomic,readonly) NSDictionary * termsDictionary; 
-(NSData *)responseData;
-(NSString *)agreeURL;
-(NSDictionary *)termsDictionary;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
@end

