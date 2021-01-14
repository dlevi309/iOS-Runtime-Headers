/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
*/

#import <DataDetectorsUI/DDAction.h>

@class LSAppLink;

@interface DDOpenURLAction : DDAction {

	LSAppLink* _appLink;
	BOOL _appLinkInitDone;

}
-(id)localizedName;
-(id)appLink;
-(id)icon;
-(void)performFromView:(id)arg1 ;
-(BOOL)canBePerformedByOpeningURL;
-(id)companionAction;
-(id)notificationIconBundleIdentifier;
-(id)notificationURL;
-(BOOL)shouldOpenInApp;
-(BOOL)shouldOpenInSafari;
@end

