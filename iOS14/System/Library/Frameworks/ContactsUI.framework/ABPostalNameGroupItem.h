/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)property;
-(CNMutableContact *)contact;
-(void)setContact:(CNMutableContact *)arg1 ;
-(SEL)setter;
-(void)setProperty:(NSString *)arg1 ;
-(void)setValue:(NSString *)arg1 ;
-(void)setPlaceholder:(NSString *)arg1 ;
-(NSString *)placeholder;
-(void)setSetter:(SEL)arg1 ;
-(NSString *)value;
@end

