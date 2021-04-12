/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
*/

#import <DataDetectorsUI/DDAddressAction.h>

@class DDRemoteActionViewController;

@interface DDAddToAddressBookAction : DDAddressAction

@property (nonatomic,retain) DDRemoteActionViewController * viewController; 
+(BOOL)actionAvailableForContact:(id)arg1 ;
-(void)invalidate;
-(id)localizedName;
-(int)interactionType;
-(id)contact;
-(void)prepareViewControllerForActionController:(id)arg1 ;
-(void)adaptForPresentationInPopover:(BOOL)arg1 ;
-(id)notificationTitle;
-(id)notificationIconBundleIdentifier;
-(id)notificationURL;
@end

