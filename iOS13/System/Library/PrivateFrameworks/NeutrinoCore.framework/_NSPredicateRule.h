/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NSPredicateRule.h>

@protocol NSObject;
@interface _NSPredicateRule : NSPredicateRule {

	id<NSObject> _fact;
	double _grade;
	BOOL _asserting;

}
+(BOOL)supportsSecureCoding;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)performActionWithSystem:(id)arg1 ;
-(id)initWithPredicate:(id)arg1 fact:(id)arg2 grade:(double)arg3 asserting:(BOOL)arg4 ;
@end

