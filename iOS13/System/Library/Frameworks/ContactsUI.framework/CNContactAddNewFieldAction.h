/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNContactAction.h>

@protocol CNContactGroupPickerDelegate;
@class NSArray;

@interface CNContactAddNewFieldAction : CNContactAction {

	NSArray* _prohibitedPropertyKeys;
	id<CNContactGroupPickerDelegate> _groupPickerDelegate;

}

@property (nonatomic,retain) NSArray * prohibitedPropertyKeys;                                         //@synthesize prohibitedPropertyKeys=_prohibitedPropertyKeys - In the implementation block
@property (assign,nonatomic,__weak) id<CNContactGroupPickerDelegate> groupPickerDelegate;              //@synthesize groupPickerDelegate=_groupPickerDelegate - In the implementation block
-(void)performActionWithSender:(id)arg1 ;
-(NSArray *)prohibitedPropertyKeys;
-(void)setProhibitedPropertyKeys:(NSArray *)arg1 ;
-(id<CNContactGroupPickerDelegate>)groupPickerDelegate;
-(void)setGroupPickerDelegate:(id<CNContactGroupPickerDelegate>)arg1 ;
@end

