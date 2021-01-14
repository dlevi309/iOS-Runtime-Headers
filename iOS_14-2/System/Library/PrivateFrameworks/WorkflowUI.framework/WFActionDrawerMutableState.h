/*
* Generated on Thursday, January 14, 2021 at 2:28:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WFActionDrawerState.h>

@class WFActionDrawerState, NSIndexPath, NSString, WFActionDrawerResults, WFAction;

@interface WFActionDrawerMutableState : WFActionDrawerState

@property (assign,nonatomic) long long activePane; 
@property (nonatomic,retain) WFActionDrawerState * precedingState; 
@property (nonatomic,retain) NSIndexPath * listPosition; 
@property (nonatomic,copy) NSString * searchQuery; 
@property (assign,getter=isFocusedOnSearchBar,nonatomic) BOOL focusedOnSearchBar; 
@property (nonatomic,retain) WFActionDrawerResults * listResults; 
@property (nonatomic,copy) NSString * categoryName; 
@property (nonatomic,retain) WFAction * action; 
@property (nonatomic,copy) NSString * bundleIdentifier; 
@end

