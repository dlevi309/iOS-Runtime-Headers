/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
*/

#import <ActionPredictionHeuristicsInternal/ATXHeuristicActionMaker.h>

@class ATXHeuristicObjectHandle, NSString;

@interface ATXHeuristicCreateCalendarEventActionMaker : ATXHeuristicActionMaker {

	ATXHeuristicObjectHandle* _event;
	NSString* _suggestionsInfoUniqueKey;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_makeAction;
-(id)actionTypeName;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 event:(id)arg3 suggestionsInfoUniqueKey:(id)arg4 ;
@end

