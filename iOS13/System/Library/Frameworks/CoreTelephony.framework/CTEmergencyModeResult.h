/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CTXPCServiceSubscriptionContext *)context;
-(CTEmergencyMode *)mode;
-(id)initWithMode:(id)arg1 andContext:(id)arg2 ;
@end

