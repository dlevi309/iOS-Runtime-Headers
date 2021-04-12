/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFControlFlowAction.h>
#import <libobjc.A.dylib/WFArrayParameterEventObserver.h>
#import <libobjc.A.dylib/WFVariableDelegate.h>

@class WFVariableString, NSString;

@interface WFChooseFromMenuAction : WFControlFlowAction <WFArrayParameterEventObserver, WFVariableDelegate> {

	long long _latestMenuChoice;
	WFVariableString* _itemTitle;

}

@property (nonatomic,copy) WFVariableString * itemTitle;                //@synthesize itemTitle=_itemTitle - In the implementation block
@property (nonatomic,readonly) long long latestMenuChoice;              //@synthesize latestMenuChoice=_latestMenuChoice - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)name;
-(id)localizedName;
-(WFVariableString *)itemTitle;
-(void)setItemTitle:(WFVariableString *)arg1 ;
-(void)initializeParameters;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(BOOL)inputRequired;
-(id)serializedParameters;
-(id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3 ;
-(id)createAccompanyingActions;
-(id)inputSourceInWorkflow:(id)arg1 ;
-(BOOL)inputPassthrough;
-(id)defaultOutputName;
-(long long)latestMenuChoice;
-(void)variableDidChange:(id)arg1 ;
-(void)arrayParameter:(id)arg1 itemWasAppended:(id)arg2 ;
-(void)arrayParameter:(id)arg1 itemWasMovedFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3 ;
-(void)arrayParameter:(id)arg1 itemWasUpdatedAtIndex:(unsigned long long)arg2 toValue:(id)arg3 ;
-(void)arrayParameter:(id)arg1 confirmDeletionOfItemAtIndex:(unsigned long long)arg2 withHandler:(/*^block*/id)arg3 ;
-(id)newIntermediaryActionWithMenuItemTitle:(id)arg1 ;
-(void)showNotificationWithInput:(id)arg1 ;
-(void)showAlertWithInput:(id)arg1 ;
-(id)intermediaryActions;
-(unsigned long long)numberOfActionsIncludedWithAction:(id)arg1 ;
@end

