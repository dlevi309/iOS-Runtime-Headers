/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

#import <ContactsUICore/CNUIUserActionItem.h>

@class NSUserActivity;

@interface _CNUIUserActionUserActivityItem : CNUIUserActionItem {

	NSUserActivity* _userActivity;

}

@property (nonatomic,readonly) NSUserActivity * userActivity;              //@synthesize userActivity=_userActivity - In the implementation block
-(NSUserActivity *)userActivity;
-(id)description;
-(unsigned long long)hash;
-(id)performActionWithContext:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)_isIntent:(id)arg1 equalToOther:(id)arg2 ;
-(unsigned long long)_hashForIntent:(id)arg1 ;
-(id)_personFromIntent:(id)arg1 ;
-(id)initWithType:(id)arg1 contactProperty:(id)arg2 bundleIdentifier:(id)arg3 userActivity:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6 ;
@end

