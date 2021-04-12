/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
*/


@class NSMutableArray, ACAccount, NSArray, ACDataclassAction;

@interface ACUIDataclassActionPicker : NSObject {

	NSMutableArray* _affectedDataclasses;
	ACAccount* _affectedAccount;
	NSArray* _actions;

}

@property (nonatomic,readonly) NSArray * actions;                                       //@synthesize actions=_actions - In the implementation block
@property (nonatomic,copy) NSArray * affectedDataclasses;                               //@synthesize affectedDataclasses=_affectedDataclasses - In the implementation block
@property (nonatomic,readonly) ACAccount * affectedAccount;                             //@synthesize affectedAccount=_affectedAccount - In the implementation block
@property (nonatomic,readonly) BOOL hasDestructiveActions; 
@property (nonatomic,readonly) ACDataclassAction * firstDestructiveAction; 
@property (nonatomic,readonly) long long priorityIndex; 
-(id)title;
-(id)message;
-(NSArray *)actions;
-(id)showInViewController:(id)arg1 ;
-(ACDataclassAction *)firstDestructiveAction;
-(id)actionOfType:(long long)arg1 ;
-(BOOL)hasDestructiveActions;
-(id)descriptionForDataclassAction:(id)arg1 ;
-(NSArray *)affectedDataclasses;
-(BOOL)hasActionOfType:(long long)arg1 ;
-(ACAccount *)affectedAccount;
-(id)_stringForMessage:(id)arg1 withAccountType:(id)arg2 dataclassDescription:(id)arg3 ;
-(id)initWithActions:(id)arg1 affectingAccount:(id)arg2 ;
-(void)addAffectedDataclass:(id)arg1 ;
-(long long)priorityIndex;
-(void)setAffectedDataclasses:(NSArray *)arg1 ;
@end

