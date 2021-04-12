/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIStatusBarCarPlayTimeItemView.h>

@interface UIStatusBarCarPlayRadarTimeItemView : UIStatusBarCarPlayTimeItemView {

	BOOL _isInternalInstall;
	BOOL _radarItemEnabled;
	BOOL _currentlyGatheringLogs;

}
-(BOOL)canBecomeFocused;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)allowsUserInteraction;
-(id)highlightImage;
-(id)contentsImage;
-(long long)buttonType;
-(id)_timeImageSet;
-(BOOL)usesAdvancedActions;
-(void)_gatheringLogsDidChangeStatusNotification:(id)arg1 ;
-(BOOL)_showRadarButtonForInternalInstalls;
-(void)dealloc;
-(BOOL)showsTouchWhenHighlighted;
@end

