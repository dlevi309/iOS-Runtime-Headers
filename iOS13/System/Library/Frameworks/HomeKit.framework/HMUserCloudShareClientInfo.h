/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCoder:(id)arg1 ;
-(id)initWithAccountAuthToken:(id)arg1 ;
-(NSData *)accountAuthToken;
@end

