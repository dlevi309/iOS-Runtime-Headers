/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/

#import <AppleAccount/AAResponse.h>

@class NSDictionary, NSString;

@interface AAFMIPAuthenticateResponse : AAResponse {

	NSDictionary* _tokens;
	NSDictionary* _appleAccountInfo;

}

@property (nonatomic,readonly) NSString * fmipWipeToken; 
@property (nonatomic,readonly) NSString * fmipUrl; 
@property (nonatomic,readonly) NSString * fmipDsid; 
-(NSString *)fmipUrl;
-(NSString *)fmipDsid;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(NSString *)fmipWipeToken;
@end

