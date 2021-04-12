/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNPropertySimpleTransportCell.h>

@class NSArray;

@interface CNPropertyIntentActionableCell : CNPropertySimpleTransportCell {

	NSArray* _actions;

}

@property (nonatomic,retain) NSArray * actions;              //@synthesize actions=_actions - In the implementation block
-(id)defaultContext;
-(NSArray *)actions;
-(void)setActions:(NSArray *)arg1 ;
-(BOOL)shouldPerformDefaultAction;
-(void)performDefaultAction;
-(void)updateTransportButtons;
-(id)transportsMapping;
-(void)transportButton1Clicked:(id)arg1 ;
-(void)transportButton2Clicked:(id)arg1 ;
-(void)transportButton3Clicked:(id)arg1 ;
@end

