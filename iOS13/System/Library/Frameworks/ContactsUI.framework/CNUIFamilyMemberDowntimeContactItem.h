/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)label;
-(CNContact *)contact;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)selected;
-(id)initWithContact:(id)arg1 label:(id)arg2 ;
@end

