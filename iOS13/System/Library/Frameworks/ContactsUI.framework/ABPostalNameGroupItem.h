/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNCardGroupItem.h>

@class CNMutableContact, NSString;

@interface ABPostalNameGroupItem : CNCardGroupItem {

	CNMutableContact* _contact;
	SEL _setter;
	NSString* _value;
	NSString* _property;
	NSString* _placeholder;

}

@property (nonatomic,retain) CNMutableContact * contact;              //@synthesize contact=_contact - In the implementation block
@property (assign,nonatomic) SEL setter;                              //@synthesize setter=_setter - In the implementation block
@property (nonatomic,copy) NSString * value;                          //@synthesize value=_value - In the implementation block
@property (nonatomic,copy) NSString * property;                       //@synthesize property=_property - In the implementation block
@property (nonatomic,copy) NSString * placeholder;                    //@synthesize placeholder=_placeholder - In the implementation block
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(CNMutableContact *)contact;
-(void)setContact:(CNMutableContact *)arg1 ;
-(void)setPlaceholder:(NSString *)arg1 ;
-(NSString *)placeholder;
-(NSString *)property;
-(void)setProperty:(NSString *)arg1 ;
-(void)setSetter:(SEL)arg1 ;
-(SEL)setter;
@end

