/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/

#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface VSPrivacyConsentVoucher : NSObject <NSCopying, NSSecureCoding> {

	NSString* _appAdamID;
	NSString* _providerID;

}

@property (nonatomic,copy,readonly) NSString * appAdamID;               //@synthesize appAdamID=_appAdamID - In the implementation block
@property (nonatomic,copy,readonly) NSString * providerID;              //@synthesize providerID=_providerID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)appAdamID;
-(NSString *)providerID;
-(id)initWithAppAdamID:(id)arg1 providerID:(id)arg2 ;
@end

