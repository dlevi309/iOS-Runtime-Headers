/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setActions:(NSOrderedSet *)arg1 ;
-(NSOrderedSet *)actions;
-(id)description;
-(id)initWithActions:(id)arg1 ;
-(id)titleForContext:(long long)arg1 ;
-(id)subtitleForContext:(long long)arg1 ;
-(void)performWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setMainAction:(CNQuickAction *)arg1 ;
-(BOOL)ignoreMainAction;
-(void)setIgnoreMainAction:(BOOL)arg1 ;
-(CNQuickAction *)mainAction;
-(BOOL)isEqual:(id)arg1 ;
@end

