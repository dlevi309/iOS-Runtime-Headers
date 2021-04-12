/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/


@class CalPreferences;

@interface EKUIDebugPreferences : NSObject {

	CalPreferences* _preferences;

}

@property (assign,nonatomic) BOOL showInviteesAndMoreRegion; 
@property (assign,nonatomic) BOOL showReportAProblemNotificationButton; 
+(id)shared;
-(id)init;
-(BOOL)showInviteesAndMoreRegion;
-(void)setShowInviteesAndMoreRegion:(BOOL)arg1 ;
-(BOOL)showReportAProblemNotificationButton;
-(void)setShowReportAProblemNotificationButton:(BOOL)arg1 ;
@end

