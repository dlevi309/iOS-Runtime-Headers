/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNContactAction.h>

@class CNUIUserActivityManager;

@interface CNEditInAppAction : CNContactAction {

	CNUIUserActivityManager* _activityManager;

}

@property (nonatomic,readonly) CNUIUserActivityManager * activityManager;              //@synthesize activityManager=_activityManager - In the implementation block
-(CNUIUserActivityManager *)activityManager;
-(void)performActionWithSender:(id)arg1 ;
-(id)initWithContact:(id)arg1 activityManager:(id)arg2 ;
-(id)title;
@end

