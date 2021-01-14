/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNQuickContactAction.h>

@class CNPropertyAction;

@interface CNQuickPropertyAction : CNQuickContactAction

@property (nonatomic,readonly) CNPropertyAction * propertyAction; 
-(BOOL)enabled;
-(unsigned long long)score;
-(id)_coreDuetValue;
-(id)titleForContext:(long long)arg1 ;
-(id)subtitleForContext:(long long)arg1 ;
-(void)performWithCompletionBlock:(/*^block*/id)arg1 ;
-(CNPropertyAction *)propertyAction;
-(id)propertyItem;
-(id)initWithPropertyAction:(id)arg1 ;
-(id)identifier;
@end

