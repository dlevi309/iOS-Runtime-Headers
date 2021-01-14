/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@class CNContact, NSString;

@interface CNUIFamilyMemberDowntimeContactItem : NSObject {

	BOOL _selected;
	CNContact* _contact;
	NSString* _label;

}

@property (nonatomic,readonly) CNContact * contact;              //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) NSString * label;                 //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) BOOL selected;                      //@synthesize selected=_selected - In the implementation block
-(CNContact *)contact;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)selected;
-(id)initWithContact:(id)arg1 label:(id)arg2 ;
-(NSString *)label;
@end

