/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CTActivationPolicyState : NSObject <NSCopying, NSSecureCoding> {

	long long _carrierLock;

}

@property (assign,nonatomic) long long carrierLock;              //@synthesize carrierLock=_carrierLock - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)carrierLock;
-(void)setCarrierLock:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

