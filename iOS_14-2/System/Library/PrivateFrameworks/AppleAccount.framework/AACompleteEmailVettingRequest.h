/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/

#import <AppleAccount/AAEmailVettingRequest.h>

@class NSString;

@interface AACompleteEmailVettingRequest : AAEmailVettingRequest {

	NSString* _token;

}
+(Class)responseClass;
-(id)urlString;
-(id)initWithAccount:(id)arg1 token:(id)arg2 ;
-(id)initWithURLString:(id)arg1 account:(id)arg2 token:(id)arg3 ;
-(id)bodyDictionary;
@end

