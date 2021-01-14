/*
* Generated on Thursday, January 14, 2021 at 2:26:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
*/

#import <libobjc.A.dylib/_TtP11AppStoreKitP33_DDDE28517FCD97BF716F071D2D29E8A432JSMediaTokenServiceObjectExports_.h>

@class NSString;

@interface AppStoreKit.JSMediaTokenServiceObject : NSObject <_TtP11AppStoreKitP33_DDDE28517FCD97BF716F071D2D29E8A432JSMediaTokenServiceObjectExports_> {

	 tokenService;

}

@property (readonly,nonatomic) NSString * tokenString; 
-(id)init;
-(id)overrideToken:(id)arg1 ;
-(NSString *)tokenString;
-(id)refreshToken;
-(void)resetToken;
@end

