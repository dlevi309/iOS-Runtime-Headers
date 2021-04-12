/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFParameter.h>

@class NSArray;

@interface WFEnumerationParameter : WFParameter {

	BOOL _alwaysShowsButton;
	NSArray* _staticPossibleStates;
	NSArray* _displayNames;

}

@property (nonatomic,readonly) NSArray * staticPossibleStates;                       //@synthesize staticPossibleStates=_staticPossibleStates - In the implementation block
@property (nonatomic,readonly) NSArray * displayNames;                               //@synthesize displayNames=_displayNames - In the implementation block
@property (nonatomic,readonly) BOOL preferItemPickerSheet; 
@property (nonatomic,readonly) NSArray * possibleStatesForLocalization; 
@property (nonatomic,readonly) BOOL alwaysShowsButton;                               //@synthesize alwaysShowsButton=_alwaysShowsButton - In the implementation block
@property (nonatomic,readonly) NSArray * possibleStates; 
@property (nonatomic,readonly) BOOL hidesAccessoryIconInEditor; 
-(id)initWithDefinition:(id)arg1 ;
-(NSArray *)possibleStates;
-(NSArray *)displayNames;
-(Class)singleStateClass;
-(NSArray *)possibleStatesForLocalization;
-(id)localizedTitleForButtonWithState:(id)arg1 ;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(id)localizedLabelForPossibleState:(id)arg1 inMultipleState:(id)arg2 ;
-(id)localizedLabelForMultipleState:(id)arg1 ;
-(id)localizedLabelForMultipleCompleteState:(id)arg1 ;
-(id)localizedSubtitleLabelForPossibleState:(id)arg1 ;
-(id)accessoryColorForPossibleState:(id)arg1 ;
-(id)accessoryIconForPossibleState:(id)arg1 ;
-(BOOL)hidesAccessoryIconInEditor;
-(BOOL)preferItemPickerSheet;
-(BOOL)parameterStateIsValid:(id)arg1 ;
-(void)possibleStatesDidChange;
-(void)startUpdatingPossibleValues;
-(void)stopUpdatingPossibleValues;
-(BOOL)alwaysShowsButton;
-(NSArray *)staticPossibleStates;
@end

