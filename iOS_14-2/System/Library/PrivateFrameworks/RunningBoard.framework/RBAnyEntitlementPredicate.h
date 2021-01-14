/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <RunningBoard/RunningBoard-Structs.h>
#import <RunningBoard/RBEntitlementPredicate.h>

@class NSArray;

@interface RBAnyEntitlementPredicate : RBEntitlementPredicate {

	NSArray* _predicate;

}
-(id)allEntitlements;
-(unsigned long long)count;
-(BOOL)matchesEntitlements:(id)arg1 ;
-(id)description;
-(id)initWithArray:(id)arg1 forDomain:(id)arg2 attribute:(id)arg3 errors:(id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

