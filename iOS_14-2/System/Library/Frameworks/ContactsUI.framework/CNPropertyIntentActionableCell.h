/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNPropertySimpleTransportCell.h>

@class NSArray;

@interface CNPropertyIntentActionableCell : CNPropertySimpleTransportCell {

	NSArray* _actions;

}

@property (nonatomic,retain) NSArray * actions;              //@synthesize actions=_actions - In the implementation block
-(void)setActions:(NSArray *)arg1 ;
-(NSArray *)actions;
-(id)defaultContext;
-(void)updateTransportButtons;
-(BOOL)shouldPerformDefaultAction;
-(void)performDefaultAction;
-(id)transportsMapping;
-(void)transportButton1Clicked:(id)arg1 ;
-(void)transportButton2Clicked:(id)arg1 ;
-(void)transportButton3Clicked:(id)arg1 ;
@end

