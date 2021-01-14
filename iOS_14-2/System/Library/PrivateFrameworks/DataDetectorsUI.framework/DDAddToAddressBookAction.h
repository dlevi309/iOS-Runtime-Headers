/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
*/

#import <DataDetectorsUI/DDAddressAction.h>

@class DDRemoteActionViewController;

@interface DDAddToAddressBookAction : DDAddressAction

@property (nonatomic,retain) DDRemoteActionViewController * viewController; 
+(BOOL)actionAvailableForContact:(id)arg1 ;
-(id)localizedName;
-(id)contact;
-(int)interactionType;
-(void)invalidate;
-(id)notificationTitle;
-(void)prepareViewControllerForActionController:(id)arg1 ;
-(void)adaptForPresentationInPopover:(BOOL)arg1 ;
-(id)notificationIconBundleIdentifier;
-(id)notificationURL;
@end

