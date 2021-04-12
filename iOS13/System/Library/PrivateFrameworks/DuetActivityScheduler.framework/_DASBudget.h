/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler
*/

#import <DuetActivityScheduler/DuetActivityScheduler-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface _DASBudget : NSObject <NSCopying, NSSecureCoding> {

	unsigned char _allocationType;
	os_unfair_lock_s _lock;
	NSString* _name;
	double _capacity;
	double _balance;
	/*^block*/id _callback;
	double _maxBudgetValue;
	double _minBudgetValue;

}

@property (nonatomic,copy) id callback;                                   //@synthesize callback=_callback - In the implementation block
@property (assign,nonatomic) double maxBudgetValue;                       //@synthesize maxBudgetValue=_maxBudgetValue - In the implementation block
@property (assign,nonatomic) double minBudgetValue;                       //@synthesize minBudgetValue=_minBudgetValue - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s lock;                       //@synthesize lock=_lock - In the implementation block
@property (nonatomic,readonly) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) double capacity;                           //@synthesize capacity=_capacity - In the implementation block
@property (nonatomic,readonly) unsigned char allocationType;              //@synthesize allocationType=_allocationType - In the implementation block
@property (nonatomic,readonly) double balance;                            //@synthesize balance=_balance - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)budgetWithName:(id)arg1 capacity:(double)arg2 balance:(double)arg3 allocationType:(unsigned char)arg4 ;
+(id)budgetWithName:(id)arg1 capacity:(double)arg2 allocationType:(unsigned char)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(os_unfair_lock_s)lock;
-(double)capacity;
-(void)setCapacity:(double)arg1 ;
-(id)callback;
-(void)setCallback:(id)arg1 ;
-(void)setLock:(os_unfair_lock_s)arg1 ;
-(unsigned char)allocationType;
-(double)balance;
-(void)setBalance:(double)arg1 ;
-(id)initWithName:(id)arg1 capacity:(double)arg2 balance:(double)arg3 allocationType:(unsigned char)arg4 ;
-(BOOL)unlockedDecrementBy:(double)arg1 ;
-(void)decrementBy:(double)arg1 ;
-(void)registerSignificantBudgetChangeCallback:(/*^block*/id)arg1 ;
-(BOOL)isPositive;
-(void)incrementBy:(double)arg1 ;
-(double)maxBudgetValue;
-(void)setMaxBudgetValue:(double)arg1 ;
-(double)minBudgetValue;
-(void)setMinBudgetValue:(double)arg1 ;
@end

