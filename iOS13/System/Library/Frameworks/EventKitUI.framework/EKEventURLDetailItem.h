/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)reset;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2 ;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(BOOL)hasDetailViewControllerAtIndex:(unsigned long long)arg1 ;
@end

