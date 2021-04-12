/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNQuickPropertyAction.h>

@class NSOrderedSet, CNQuickAction;

@interface CNQuickDisambiguateAction : CNQuickPropertyAction {

	BOOL _ignoreMainAction;
	NSOrderedSet* _actions;
	CNQuickAction* _mainAction;

}

@property (nonatomic,retain) NSOrderedSet * actions;                         //@synthesize actions=_actions - In the implementation block
@property (assign,nonatomic,__weak) CNQuickAction * mainAction;              //@synthesize mainAction=_mainAction - In the implementation block
@property (assign,nonatomic) BOOL ignoreMainAction;                          //@synthesize ignoreMainAction=_ignoreMainAction - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)initWithActions:(id)arg1 ;
-(NSOrderedSet *)actions;
-(void)setActions:(NSOrderedSet *)arg1 ;
-(id)titleForContext:(long long)arg1 ;
-(id)subtitleForContext:(long long)arg1 ;
-(void)performWithCompletionBlock:(/*^block*/id)arg1 ;
-(CNQuickAction *)mainAction;
-(void)setMainAction:(CNQuickAction *)arg1 ;
-(BOOL)ignoreMainAction;
-(void)setIgnoreMainAction:(BOOL)arg1 ;
@end

