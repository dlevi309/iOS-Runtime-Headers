/*
* Generated on Thursday, January 14, 2021 at 2:26:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
*/

#import <libobjc.A.dylib/AMSMediaTokenServiceProtocol.h>

@interface AppStoreKit.PersonalizedMediaTokenService : NSObject <AMSMediaTokenServiceProtocol> {

	 tokenService;
	 accounts;
	 queue;

}
-(id)init;
-(void)accountsDidChange;
-(id)fetchMediaToken;
-(void)invalidateMediaToken;
@end

