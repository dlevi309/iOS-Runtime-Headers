/*
* Generated on Thursday, January 14, 2021 at 2:26:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
*/

#import <libobjc.A.dylib/_TtP11AppStoreKitP33_D0BDE9BE40323AA379A31A1054CE7CC715JSCookieExports_.h>

@class NSString, NSDate;

@interface AppStoreKit.JSCookie : NSObject <_TtP11AppStoreKitP33_D0BDE9BE40323AA379A31A1054CE7CC715JSCookieExports_> {

	 name;
	 value;
	 domain;
	 path;

}

@property (readonly,nonatomic) NSString * name; 
@property (readonly,nonatomic) NSString * value; 
@property (readonly,nonatomic) NSDate * expiresDate; 
@property (readonly,nonatomic) NSString * domain; 
@property (readonly,nonatomic) NSString * path; 
-(NSDate *)expiresDate;
-(id)init;
-(NSString *)path;
-(NSString *)domain;
-(NSString *)name;
-(NSString *)value;
@end

