/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithPredicate:(id)arg1 fact:(id)arg2 grade:(double)arg3 asserting:(BOOL)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg1 ;
-(void)performActionWithSystem:(id)arg1 ;
@end

