/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class BKSHIDEventDeferringPredicate, BKSHIDEventDeferringTarget, NSString;

@interface BKSHIDEventDeferringRule : NSObject <NSCopying, NSSecureCoding> {

	BKSHIDEventDeferringPredicate* _predicate;
	BKSHIDEventDeferringTarget* _target;
	NSString* _reason;

}

@property (nonatomic,copy,readonly) BKSHIDEventDeferringPredicate * predicate;              //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,copy,readonly) BKSHIDEventDeferringTarget * target;                    //@synthesize target=_target - In the implementation block
@property (nonatomic,copy,readonly) NSString * reason;                                      //@synthesize reason=_reason - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)ruleForDeferringEventsMatchingPredicate:(id)arg1 toTarget:(id)arg2 withReason:(id)arg3 ;
-(BKSHIDEventDeferringPredicate *)predicate;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)reason;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_initWithPredicate:(id)arg1 target:(id)arg2 reason:(id)arg3 ;
-(BKSHIDEventDeferringTarget *)target;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

