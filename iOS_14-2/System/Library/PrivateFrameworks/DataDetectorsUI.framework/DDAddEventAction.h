/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
*/

#import <DataDetectorsUI/DDAction.h>

@class DDRemoteActionViewController;

@interface DDAddEventAction : DDAction {

	DDRemoteActionViewController* viewController;

}

@property (nonatomic,retain) DDRemoteActionViewController * viewController; 
+(id)cachedEventForICSString:(id)arg1 ;
+(BOOL)actionAvailableForEvent:(id)arg1 ;
-(id)localizedName;
-(void)setViewController:(DDRemoteActionViewController *)arg1 ;
-(id)icon;
-(DDRemoteActionViewController *)viewController;
-(int)interactionType;
-(void)invalidate;
-(id)notificationTitle;
-(void)prepareViewControllerForActionController:(id)arg1 ;
-(id)notificationIconBundleIdentifier;
-(id)notificationURL;
@end

