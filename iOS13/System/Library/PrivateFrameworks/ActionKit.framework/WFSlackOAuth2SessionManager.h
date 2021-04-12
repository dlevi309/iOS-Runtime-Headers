/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/WFOAuth2SessionManager.h>
#import <libobjc.A.dylib/WFOAuth2ProviderSessionManager.h>

@class NSString;

@interface WFSlackOAuth2SessionManager : WFOAuth2SessionManager <WFOAuth2ProviderSessionManager>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithClientID:(id)arg1 clientSecret:(id)arg2 ;
-(id)initWithSessionConfiguration:(id)arg1 clientID:(id)arg2 clientSecret:(id)arg3 ;
@end

