/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)reason;
-(BKSHIDEventDeferringTarget *)target;
-(BKSHIDEventDeferringPredicate *)predicate;
-(id)_initWithPredicate:(id)arg1 target:(id)arg2 reason:(id)arg3 ;
@end

