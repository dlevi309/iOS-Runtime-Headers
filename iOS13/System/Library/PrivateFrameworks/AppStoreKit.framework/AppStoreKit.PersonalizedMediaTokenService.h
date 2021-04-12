/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
*/

#import <libobjc.A.dylib/AMSMediaTokenServiceProtocol.h>

@interface AppStoreKit.PersonalizedMediaTokenService : NSObject <AMSMediaTokenServiceProtocol> {

	 tokenService;
	 accounts;
	 queue;

}
-(id)init;
-(void)invalidateMediaToken;
-(id)fetchMediaToken;
-(void)accountsDidChange;
@end

