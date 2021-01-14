/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface CTSweetgumPlanGroup : NSObject <NSSecureCoding> {

	long long _planCategory;
	NSArray* _plans;

}

@property (assign,nonatomic) long long planCategory;              //@synthesize planCategory=_planCategory - In the implementation block
@property (nonatomic,retain) NSArray * plans;                     //@synthesize plans=_plans - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)plans;
-(void)setPlans:(NSArray *)arg1 ;
-(long long)planCategory;
-(void)setPlanCategory:(long long)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

