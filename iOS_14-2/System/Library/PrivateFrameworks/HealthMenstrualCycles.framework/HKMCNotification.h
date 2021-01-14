/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDateComponents;

@interface HKMCNotification : NSObject <NSSecureCoding> {

	NSString* _category;
	NSDateComponents* _dueDateComponents;

}

@property (nonatomic,copy) NSString * category;                               //@synthesize category=_category - In the implementation block
@property (nonatomic,copy) NSDateComponents * dueDateComponents;              //@synthesize dueDateComponents=_dueDateComponents - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setCategory:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)category;
-(NSDateComponents *)dueDateComponents;
-(void)setDueDateComponents:(NSDateComponents *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCategory:(id)arg1 dueDateComponents:(id)arg2 ;
@end

