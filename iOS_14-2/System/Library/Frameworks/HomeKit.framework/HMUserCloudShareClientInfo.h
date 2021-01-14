/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface HMUserCloudShareClientInfo : NSObject <NSSecureCoding> {

	NSData* _accountAuthToken;

}

@property (nonatomic,readonly) NSData * accountAuthToken;              //@synthesize accountAuthToken=_accountAuthToken - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithAccountAuthToken:(id)arg1 ;
-(NSData *)accountAuthToken;
-(id)initWithCoder:(id)arg1 ;
@end

