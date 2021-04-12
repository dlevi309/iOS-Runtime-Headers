/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@class NSString, NSArray, WFDailyRoutineShortcutSetupTriggerBuilder, WFDailyRoutineShortcutSetupLocation;

@interface WFDailyRoutineShortcutSetupFlow : NSObject {

	NSString* _routineName;
	NSArray* _questions;
	WFDailyRoutineShortcutSetupTriggerBuilder* _trigger;
	WFDailyRoutineShortcutSetupLocation* _location;

}

@property (nonatomic,copy,readonly) NSString * routineName;                                      //@synthesize routineName=_routineName - In the implementation block
@property (nonatomic,copy,readonly) NSArray * questions;                                         //@synthesize questions=_questions - In the implementation block
@property (nonatomic,readonly) WFDailyRoutineShortcutSetupTriggerBuilder * trigger;              //@synthesize trigger=_trigger - In the implementation block
@property (nonatomic,readonly) WFDailyRoutineShortcutSetupLocation * location;                   //@synthesize location=_location - In the implementation block
-(WFDailyRoutineShortcutSetupLocation *)location;
-(WFDailyRoutineShortcutSetupTriggerBuilder *)trigger;
-(NSArray *)questions;
-(id)initWithRoutineName:(id)arg1 questions:(id)arg2 trigger:(id)arg3 location:(id)arg4 ;
-(NSString *)routineName;
@end

