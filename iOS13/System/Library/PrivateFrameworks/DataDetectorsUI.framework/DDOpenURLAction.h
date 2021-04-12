/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
*/

#import <DataDetectorsUI/DDAction.h>

@class LSAppLink;

@interface DDOpenURLAction : DDAction {

	LSAppLink* _appLink;
	BOOL _appLinkInitDone;

}
-(id)localizedName;
-(id)icon;
-(id)appLink;
-(void)performFromView:(id)arg1 ;
-(BOOL)canBePerformedByOpeningURL;
-(id)companionAction;
-(id)notificationIconBundleIdentifier;
-(id)notificationURL;
-(BOOL)shouldOpenInApp;
-(BOOL)shouldOpenInSafari;
@end

