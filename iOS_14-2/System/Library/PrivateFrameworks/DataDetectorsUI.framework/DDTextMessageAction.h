/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
*/

#import <DataDetectorsUI/DDTelephoneNumberAction.h>
#import <libobjc.A.dylib/MFMessageComposeViewControllerDelegate.h>

@class NSString;

@interface DDTextMessageAction : DDTelephoneNumberAction <MFMessageComposeViewControllerDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)localizedName;
-(id)icon;
-(id)viewController;
-(int)interactionType;
-(void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2 ;
-(id)notificationTitle;
-(void)performFromView:(id)arg1 ;
-(BOOL)canBePerformedByOpeningURL;
-(id)notificationIconBundleIdentifier;
-(id)notificationURL;
-(BOOL)prefersOpenToCreate;
@end

