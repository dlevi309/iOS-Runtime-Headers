/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/


@protocol IKJSDOMLSParser <JSExport>
@property (getter=appendAsChildrenAction,readonly) long long ACTION_APPEND_AS_CHILDREN; 
@property (getter=replaceChildrenAction,readonly) long long ACTION_REPLACE_CHILDREN; 
@property (getter=insertBeforeAction,readonly) long long ACTION_INSERT_BEFORE; 
@property (getter=insertAfterAction,readonly) long long ACTION_INSERT_AFTER; 
@property (getter=replaceAction,readonly) long long ACTION_REPLACE; 
@required
-(id)parse:(id)arg1;
-(id)parseWithContext:(id)arg1 :(id)arg2 :(long long)arg3;
-(long long)appendAsChildrenAction;
-(long long)replaceChildrenAction;
-(long long)insertBeforeAction;
-(long long)insertAfterAction;
-(long long)replaceAction;

@end

