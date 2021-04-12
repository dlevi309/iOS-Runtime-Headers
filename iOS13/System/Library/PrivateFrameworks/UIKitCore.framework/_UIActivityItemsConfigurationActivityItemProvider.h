/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <ShareSheet/UIActivityItemProvider.h>

@protocol UIActivityItemsConfigurationReading;
@interface _UIActivityItemsConfigurationActivityItemProvider : UIActivityItemProvider {

	id<UIActivityItemsConfigurationReading> _activityItemsConfiguration;
	id _item;
	long long _index;

}
-(id)item;
-(id)_title;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2 ;
-(id)activityViewControllerLinkMetadata:(id)arg1 ;
-(id)initWithActivityItemsConfiguration:(id)arg1 itemAtIndex:(long long)arg2 ;
@end

