/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CTPlan, NSString;

@interface CTDisplayPlan : NSObject <NSSecureCoding> {

	CTPlan* _plan;
	NSString* _carrierName;
	NSString* _phoneNumber;
	long long _status;
	unsigned long long _attributes;

}

@property (nonatomic,readonly) CTPlan * plan;                              //@synthesize plan=_plan - In the implementation block
@property (nonatomic,readonly) NSString * carrierName;                     //@synthesize carrierName=_carrierName - In the implementation block
@property (nonatomic,readonly) NSString * phoneNumber;                     //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,readonly) long long status;                           //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) unsigned long long attributes;              //@synthesize attributes=_attributes - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)attributes;
-(long long)status;
-(NSString *)phoneNumber;
-(CTPlan *)plan;
-(NSString *)carrierName;
-(id)initWithPlan:(id)arg1 status:(long long)arg2 attributes:(unsigned long long)arg3 carrierName:(id)arg4 phoneNumber:(id)arg5 ;
@end

