/*
* Generated on Thursday, January 14, 2021 at 2:22:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/

#import <ShareSheet/UIActivityItemProvider.h>

@protocol UIActivityItemsConfigurationReading;
@interface _UIActivityItemsConfigurationActivityItemProvider : UIActivityItemProvider {

	id<UIActivityItemsConfigurationReading> _activityItemsConfiguration;
	id _item;
	long long _index;

}
-(id)_title;
-(id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2 ;
-(id)initWithActivityItemsConfiguration:(id)arg1 itemAtIndex:(long long)arg2 ;
-(id)item;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(id)activityViewControllerLinkMetadata:(id)arg1 ;
@end

