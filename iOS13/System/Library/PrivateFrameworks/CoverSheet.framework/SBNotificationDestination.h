/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

@class SBNCAlertingController;


@protocol SBNotificationDestination <NCNotificationDestination,SBFNotificationExtensionVisibilityProviding,SBFNotificationLongLookPresenting>
@property (assign,nonatomic,__weak) SBNCAlertingController * alertingController; 
@required
-(SBNCAlertingController *)alertingController;
-(void)setAlertingController:(id)arg1;

@end

