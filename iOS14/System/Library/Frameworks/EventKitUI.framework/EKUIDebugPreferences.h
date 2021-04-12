/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

