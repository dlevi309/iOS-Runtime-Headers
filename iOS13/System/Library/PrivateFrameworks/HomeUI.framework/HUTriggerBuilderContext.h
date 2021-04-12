/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <libobjc.A.dylib/HFTriggerBuilderContextProviding.h>

@class NSString, NSSet;

@interface HUTriggerBuilderContext : NSObject <HFTriggerBuilderContextProviding> {

	BOOL _showTriggerSummary;
	BOOL _showTriggerEnableSwitch;
	BOOL _showActionSetsInstructions;
	BOOL _showConditionTriggers;
	BOOL _allowDurationEditing;
	BOOL _filtersEmptyActionSets;
	NSString* _testActionsInstructionDescription;
	NSString* _serviceActionsInstructionDescription;
	NSString* _deleteInstructionDescription;
	NSString* _actionEditorInstructionsDescription;
	NSString* _triggerContextAwareTitle;
	NSSet* _unsupportedTriggers;
	NSString* _deleteConfirmationAlertTitle;
	NSString* _deleteConfirmationAlertMessage;

}

@property (assign,nonatomic) BOOL showTriggerSummary;                                    //@synthesize showTriggerSummary=_showTriggerSummary - In the implementation block
@property (assign,nonatomic) BOOL showTriggerEnableSwitch;                               //@synthesize showTriggerEnableSwitch=_showTriggerEnableSwitch - In the implementation block
@property (assign,nonatomic) BOOL showActionSetsInstructions;                            //@synthesize showActionSetsInstructions=_showActionSetsInstructions - In the implementation block
@property (assign,nonatomic) BOOL showConditionTriggers;                                 //@synthesize showConditionTriggers=_showConditionTriggers - In the implementation block
@property (assign,nonatomic) BOOL allowDurationEditing;                                  //@synthesize allowDurationEditing=_allowDurationEditing - In the implementation block
@property (assign,nonatomic) BOOL filtersEmptyActionSets;                                //@synthesize filtersEmptyActionSets=_filtersEmptyActionSets - In the implementation block
@property (nonatomic,copy) NSString * testActionsInstructionDescription;                 //@synthesize testActionsInstructionDescription=_testActionsInstructionDescription - In the implementation block
@property (nonatomic,copy) NSString * serviceActionsInstructionDescription;              //@synthesize serviceActionsInstructionDescription=_serviceActionsInstructionDescription - In the implementation block
@property (nonatomic,copy) NSString * deleteInstructionDescription;                      //@synthesize deleteInstructionDescription=_deleteInstructionDescription - In the implementation block
@property (nonatomic,copy) NSString * actionEditorInstructionsDescription;               //@synthesize actionEditorInstructionsDescription=_actionEditorInstructionsDescription - In the implementation block
@property (nonatomic,copy) NSString * triggerContextAwareTitle;                          //@synthesize triggerContextAwareTitle=_triggerContextAwareTitle - In the implementation block
@property (nonatomic,copy) NSSet * unsupportedTriggers;                                  //@synthesize unsupportedTriggers=_unsupportedTriggers - In the implementation block
@property (nonatomic,copy) NSString * deleteConfirmationAlertTitle;                      //@synthesize deleteConfirmationAlertTitle=_deleteConfirmationAlertTitle - In the implementation block
@property (nonatomic,copy) NSString * deleteConfirmationAlertMessage;                    //@synthesize deleteConfirmationAlertMessage=_deleteConfirmationAlertMessage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)triggerContextAwareTitle;
-(NSSet *)unsupportedTriggers;
-(BOOL)filtersEmptyActionSets;
-(BOOL)showTriggerEnableSwitch;
-(NSString *)deleteConfirmationAlertTitle;
-(NSString *)deleteConfirmationAlertMessage;
-(NSString *)deleteInstructionDescription;
-(BOOL)showTriggerSummary;
-(BOOL)showActionSetsInstructions;
-(BOOL)showConditionTriggers;
-(BOOL)allowDurationEditing;
-(NSString *)testActionsInstructionDescription;
-(void)setTestActionsInstructionDescription:(NSString *)arg1 ;
-(NSString *)serviceActionsInstructionDescription;
-(void)setServiceActionsInstructionDescription:(NSString *)arg1 ;
-(void)setDeleteInstructionDescription:(NSString *)arg1 ;
-(NSString *)actionEditorInstructionsDescription;
-(void)setActionEditorInstructionsDescription:(NSString *)arg1 ;
-(void)setTriggerContextAwareTitle:(NSString *)arg1 ;
-(void)setUnsupportedTriggers:(NSSet *)arg1 ;
-(void)setDeleteConfirmationAlertTitle:(NSString *)arg1 ;
-(void)setDeleteConfirmationAlertMessage:(NSString *)arg1 ;
-(void)setShowTriggerSummary:(BOOL)arg1 ;
-(void)setShowTriggerEnableSwitch:(BOOL)arg1 ;
-(void)setShowActionSetsInstructions:(BOOL)arg1 ;
-(void)setShowConditionTriggers:(BOOL)arg1 ;
-(void)setAllowDurationEditing:(BOOL)arg1 ;
-(void)setFiltersEmptyActionSets:(BOOL)arg1 ;
-(id)initWithTriggerBuilderContext:(id)arg1 ;
@end

