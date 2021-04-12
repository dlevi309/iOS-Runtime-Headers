/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface CTPlanList : NSObject <NSSecureCoding> {

	NSArray* _plans;

}

@property (nonatomic,readonly) NSArray * plans;              //@synthesize plans=_plans - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)plans;
-(id)initWithPlans:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

