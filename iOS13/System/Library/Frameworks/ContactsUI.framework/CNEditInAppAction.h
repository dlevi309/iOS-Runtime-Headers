/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNContactAction.h>

@class CNUIUserActivityManager;

@interface CNEditInAppAction : CNContactAction {

	CNUIUserActivityManager* _activityManager;

}

@property (nonatomic,readonly) CNUIUserActivityManager * activityManager;              //@synthesize activityManager=_activityManager - In the implementation block
-(id)title;
-(void)performActionWithSender:(id)arg1 ;
-(CNUIUserActivityManager *)activityManager;
-(id)initWithContact:(id)arg1 activityManager:(id)arg2 ;
@end

