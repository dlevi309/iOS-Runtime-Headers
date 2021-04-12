/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,readonly) long long latestMenuChoice;              //@synthesize latestMenuChoice=_latestMenuChoice - In the implementation block
@property (nonatomic,copy) WFVariableString * itemTitle;                //@synthesize itemTitle=_itemTitle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setItemTitle:(WFVariableString *)arg1 ;
-(id)name;
-(WFVariableString *)itemTitle;
-(id)serializedParameters;
-(void)initializeParameters;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(BOOL)inputRequired;
-(id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3 ;
-(BOOL)inputPassthrough;
-(id)createAccompanyingActions;
-(id)inputSourceInWorkflow:(id)arg1 ;
-(id)defaultOutputName;
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
-(long long)latestMenuChoice;
@end

