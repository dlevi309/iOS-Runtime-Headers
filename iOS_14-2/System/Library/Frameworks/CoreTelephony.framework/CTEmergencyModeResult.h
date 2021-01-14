/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CTEmergencyMode, CTXPCServiceSubscriptionContext;

@interface CTEmergencyModeResult : NSObject <NSCopying, NSSecureCoding> {

	CTEmergencyMode* _mode;
	CTXPCServiceSubscriptionContext* _context;

}

@property (nonatomic,readonly) CTEmergencyMode * mode;                                 //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) CTXPCServiceSubscriptionContext * context;              //@synthesize context=_context - In the implementation block
+(BOOL)supportsSecureCoding;
-(CTEmergencyMode *)mode;
-(id)initWithMode:(id)arg1 andContext:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CTXPCServiceSubscriptionContext *)context;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

