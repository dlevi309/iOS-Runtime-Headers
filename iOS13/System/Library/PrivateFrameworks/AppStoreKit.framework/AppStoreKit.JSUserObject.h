/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
*/

#import <libobjc.A.dylib/_TtP11AppStoreKitP33_8FC66B30E604F9835E1C3CBA5211B91519JSUserObjectExports_.h>

@class NSString, NSNumber;

@interface AppStoreKit.JSUserObject : NSObject <_TtP11AppStoreKitP33_8FC66B30E604F9835E1C3CBA5211B91519JSUserObjectExports_> {

	 accounts;

}

@property (readonly,nonatomic) NSString * firstName; 
@property (readonly,nonatomic) NSString * lastName; 
@property (readonly,nonatomic) NSString * accountIdentifier; 
@property (readonly,nonatomic) NSString * dsid; 
@property (readonly,nonatomic) BOOL isManagedAppleID; 
@property (readonly,nonatomic) BOOL isUnderThirteen; 
@property (readonly,nonatomic) NSNumber * userAgeIfAvailable; 
-(id)init;
-(NSString *)dsid;
-(NSString *)accountIdentifier;
-(NSString *)firstName;
-(NSString *)lastName;
-(BOOL)isManagedAppleID;
-(BOOL)isUnderThirteen;
-(NSNumber *)userAgeIfAvailable;
-(id)cookiesForUrl:(id)arg1 ;
-(id)cookieForUrlWithName:(id)arg1 :(id)arg2 ;
@end

