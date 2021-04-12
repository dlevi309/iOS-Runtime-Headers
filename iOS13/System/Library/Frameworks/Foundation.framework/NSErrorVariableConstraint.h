/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/NSLayoutConstraint.h>

@class NSISVariable;

@interface NSErrorVariableConstraint : NSLayoutConstraint {

	NSISVariable* _errorVariable;
	double _errorValue;

}
-(void)dealloc;
-(id)initWithVariable:(id)arg1 value:(double)arg2 ;
-(id)constrainedConstraint;
-(int)nsis_orientationHintForVariable:(id)arg1 ;
-(BOOL)_lowerIntoExpression:(id)arg1 reportingConstantIsRounded:(BOOL*)arg2 ;
@end

