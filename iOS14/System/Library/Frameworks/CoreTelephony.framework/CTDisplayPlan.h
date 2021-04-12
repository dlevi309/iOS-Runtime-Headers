/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CTPlan, NSString;

@interface CTDisplayPlan : NSObject <NSSecureCoding> {

	BOOL _isPhysical;
	CTPlan* _plan;
	NSString* _carrierName;
	NSString* _phoneNumber;
	NSString* _label;
	long long _status;
	unsigned long long _attributes;

}

@property (nonatomic,readonly) CTPlan * plan;                              //@synthesize plan=_plan - In the implementation block
@property (nonatomic,readonly) NSString * carrierName;                     //@synthesize carrierName=_carrierName - In the implementation block
@property (nonatomic,readonly) NSString * phoneNumber;                     //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,readonly) NSString * label;                           //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) long long status;                           //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) unsigned long long attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,readonly) BOOL isPhysical;                            //@synthesize isPhysical=_isPhysical - In the implementation block
+(BOOL)supportsSecureCoding;
-(CTPlan *)plan;
-(id)initWithPlan:(id)arg1 status:(long long)arg2 attributes:(unsigned long long)arg3 isPhysical:(BOOL)arg4 carrierName:(id)arg5 phoneNumber:(id)arg6 label:(id)arg7 ;
-(BOOL)isPhysical;
-(NSString *)carrierName;
-(NSString *)phoneNumber;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)attributes;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)label;
-(BOOL)isEqual:(id)arg1 ;
-(long long)status;
@end

