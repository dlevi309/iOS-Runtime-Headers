/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/_HMDAccountIdentifier.h>

@class HMDAccountHandle;

@interface _HMDAccountHandleIdentifer : _HMDAccountIdentifier {

	HMDAccountHandle* _accountHandle;

}

@property (copy,readonly) HMDAccountHandle * accountHandle;              //@synthesize accountHandle=_accountHandle - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(HMDAccountHandle *)accountHandle;
-(id)initWithAccountHandle:(id)arg1 ;
@end

