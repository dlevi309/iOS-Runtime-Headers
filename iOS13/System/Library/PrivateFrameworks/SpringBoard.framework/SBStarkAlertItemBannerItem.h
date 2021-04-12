/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBStarkBannerItem.h>

@class SBAlertItem, NSString, SBUISound, NSDate;

@interface SBStarkAlertItemBannerItem : SBStarkBannerItem {

	SBAlertItem* _alertItem;
	NSString* _title;
	NSString* _message;
	SBUISound* _sound;
	NSDate* _originDate;

}
-(void)dealloc;
-(id)category;
-(id)title;
-(unsigned long long)priority;
-(/*^block*/id)action;
-(id)initWithConfiguration:(id)arg1 ;
-(id)iconImages;
-(id)sound;
-(BOOL)isSticky;
-(id)subActions;
-(id)subActionLabels;
-(long long)defaultActionType;
-(void)reloadDisplayProperties;
-(BOOL)matchesContext:(id)arg1 ;
-(id)sourceDate;
-(/*^block*/id)ignoreAction;
-(id)initWithAlertItem:(id)arg1 configuration:(id)arg2 ;
@end

