/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
*/

#import <libobjc.A.dylib/_TtP11AppStoreKitP33_DDDE28517FCD97BF716F071D2D29E8A432JSMediaTokenServiceObjectExports_.h>

@class NSString;

@interface AppStoreKit.JSMediaTokenServiceObject : NSObject <_TtP11AppStoreKitP33_DDDE28517FCD97BF716F071D2D29E8A432JSMediaTokenServiceObjectExports_> {

	 tokenService;

}

@property (readonly,nonatomic) NSString * tokenString; 
-(id)init;
-(NSString *)tokenString;
-(id)refreshToken;
-(id)overrideToken:(id)arg1 ;
-(void)resetToken;
@end

