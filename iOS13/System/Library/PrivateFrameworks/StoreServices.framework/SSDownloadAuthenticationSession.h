/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSDownloadSession.h>

@class NSURLAuthenticationChallenge;

@interface SSDownloadAuthenticationSession : SSDownloadSession

@property (readonly) NSURLAuthenticationChallenge * authenticationChallenge; 
-(NSURLAuthenticationChallenge *)authenticationChallenge;
-(void)_finishWithType:(int)arg1 credential:(id)arg2 ;
@end

