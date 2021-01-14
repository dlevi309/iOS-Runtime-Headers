/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EKEventDetailItem.h>

@class UITableViewCell, SGSuggestedEventLaunchInfo, NSURL;

@interface EKEventURLDetailItem : EKEventDetailItem {

	UITableViewCell* _cell;
	SGSuggestedEventLaunchInfo* _launchInfo;
	NSURL* _url;

}
+(Class)_SGSuggestionsServiceClass;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(BOOL)hasDetailViewControllerAtIndex:(unsigned long long)arg1 ;
-(BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2 ;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(void)reset;
@end

