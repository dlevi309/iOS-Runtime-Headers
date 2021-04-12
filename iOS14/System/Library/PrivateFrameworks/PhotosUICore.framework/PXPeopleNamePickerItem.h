/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class PHPerson, CNContact, NSAttributedString;

@interface PXPeopleNamePickerItem : NSObject {

	PHPerson* _person;
	CNContact* _contact;
	NSAttributedString* _title;
	NSAttributedString* _subtitle;

}

@property (readonly) PHPerson * person;                          //@synthesize person=_person - In the implementation block
@property (readonly) CNContact * contact;                        //@synthesize contact=_contact - In the implementation block
@property (readonly) NSAttributedString * title;                 //@synthesize title=_title - In the implementation block
@property (readonly) NSAttributedString * subtitle;              //@synthesize subtitle=_subtitle - In the implementation block
-(PHPerson *)person;
-(CNContact *)contact;
-(NSAttributedString *)subtitle;
-(id)initWithPerson:(id)arg1 searchPrefix:(id)arg2 ;
-(id)initWithContact:(id)arg1 searchPrefix:(id)arg2 ;
-(NSAttributedString *)title;
@end

