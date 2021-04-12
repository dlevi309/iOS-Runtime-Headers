/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
*/

#import <ActionPredictionHeuristicsInternal/ATXHeuristicActionMaker.h>

@class ATXAction;

@interface ATXHeuristicActionMakerForAction : ATXHeuristicActionMaker {

	ATXAction* _action;

}
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithAction:(id)arg1 ;
-(id)_makeAction;
-(id)actionTypeName;
@end

