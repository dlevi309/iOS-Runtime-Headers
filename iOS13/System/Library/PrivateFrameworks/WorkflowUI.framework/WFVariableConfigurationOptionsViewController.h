/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UITableViewController.h>

@protocol WFVariableConfigurationOptionsViewControllerDelegate;
@class NSString, NSArray, WFVariableConfigurationOption;

@interface WFVariableConfigurationOptionsViewController : UITableViewController {

	id<WFVariableConfigurationOptionsViewControllerDelegate> _delegate;
	NSString* _userIdentifier;
	NSArray* _options;
	WFVariableConfigurationOption* _defaultOption;
	long long _selectedOptionIndex;

}

@property (nonatomic,readonly) NSArray * options;                                                                   //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) WFVariableConfigurationOption * defaultOption;                                       //@synthesize defaultOption=_defaultOption - In the implementation block
@property (assign,nonatomic) long long selectedOptionIndex;                                                         //@synthesize selectedOptionIndex=_selectedOptionIndex - In the implementation block
@property (assign,nonatomic,__weak) id<WFVariableConfigurationOptionsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * userIdentifier;                                                      //@synthesize userIdentifier=_userIdentifier - In the implementation block
-(NSArray *)options;
-(NSString *)userIdentifier;
-(id<WFVariableConfigurationOptionsViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFVariableConfigurationOptionsViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(WFVariableConfigurationOption *)defaultOption;
-(long long)selectedOptionIndex;
-(void)setSelectedOptionIndex:(long long)arg1 ;
-(id)initWithTitle:(id)arg1 userIdentifier:(id)arg2 options:(id)arg3 defaultOption:(id)arg4 selectedOption:(id)arg5 ;
@end

