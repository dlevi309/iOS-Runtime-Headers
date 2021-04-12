/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/AuthBrokerQuery.h>

@interface ABRequestHandler : NSObject <AuthBrokerQuery> {

	AuthBrokerAuthenticator* authenticator;

}
-(id)init;
-(void)fetchProxyCredential:(id)arg1 reply:(/*^block*/id)arg2 ;
@end

