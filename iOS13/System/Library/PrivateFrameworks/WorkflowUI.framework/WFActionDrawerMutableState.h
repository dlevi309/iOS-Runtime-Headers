/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

