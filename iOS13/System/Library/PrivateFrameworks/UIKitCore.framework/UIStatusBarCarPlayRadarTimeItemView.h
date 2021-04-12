/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIStatusBarCarPlayTimeItemView.h>

@interface UIStatusBarCarPlayRadarTimeItemView : UIStatusBarCarPlayTimeItemView {

	BOOL _isInternalInstall;
	BOOL _radarItemEnabled;
	BOOL _currentlyGatheringLogs;

}
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)canBecomeFocused;
-(long long)buttonType;
-(BOOL)showsTouchWhenHighlighted;
-(BOOL)allowsUserInteraction;
-(id)contentsImage;
-(id)highlightImage;
-(BOOL)usesAdvancedActions;
-(id)_timeImageSet;
-(void)_gatheringLogsDidChangeStatusNotification:(id)arg1 ;
-(BOOL)_showRadarButtonForInternalInstalls;
@end

