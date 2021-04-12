/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)providerID;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)appAdamID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithAppAdamID:(id)arg1 providerID:(id)arg2 ;
@end

