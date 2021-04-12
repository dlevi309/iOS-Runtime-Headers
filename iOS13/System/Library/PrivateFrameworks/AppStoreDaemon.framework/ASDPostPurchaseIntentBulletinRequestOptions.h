/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <AppStoreDaemon/ASDRequestOptions.h>

@class NSString;

@interface ASDPostPurchaseIntentBulletinRequestOptions : ASDRequestOptions {

	NSString* _appBundleId;
	NSString* _appName;
	NSString* _iapName;

}

@property (nonatomic,copy) NSString * appBundleId;              //@synthesize appBundleId=_appBundleId - In the implementation block
@property (nonatomic,copy) NSString * appName;                  //@synthesize appName=_appName - In the implementation block
@property (nonatomic,copy) NSString * iapName;                  //@synthesize iapName=_iapName - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)appName;
-(void)setAppName:(NSString *)arg1 ;
-(NSString *)appBundleId;
-(void)setAppBundleId:(NSString *)arg1 ;
-(NSString *)iapName;
-(void)setIapName:(NSString *)arg1 ;
@end

