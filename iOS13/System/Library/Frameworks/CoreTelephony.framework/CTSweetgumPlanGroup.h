/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)planCategory;
-(void)setPlanCategory:(long long)arg1 ;
-(NSArray *)plans;
-(void)setPlans:(NSArray *)arg1 ;
@end

