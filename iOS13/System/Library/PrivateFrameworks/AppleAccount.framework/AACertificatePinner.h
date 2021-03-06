/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/

#import <AppleAccount/AppleAccount-Structs.h>
#import <libobjc.A.dylib/NSURLConnectionDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@class NSString;

@interface AACertificatePinner : NSObject <NSURLConnectionDelegate, NSURLSessionDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedPinner;
+(BOOL)isSetupServiceHost:(id)arg1 ;
+(BOOL)isValidCertificateTrust:(SecTrustRef)arg1 ;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2 ;
@end

