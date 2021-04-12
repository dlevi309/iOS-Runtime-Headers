/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/CSApplicationInforming.h>

@class NSHashTable, NSString;

@interface SBDashBoardApplicationInformer : NSObject <CSApplicationInforming> {

	NSHashTable* _observers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)_isBundleIdentifierBlockedForCommunicationPolicy:(id)arg1 ;
-(void)_installedApplicationsDidChange:(id)arg1 ;
-(BOOL)_isBundleIdentifierBlockedForScreenTimeExpiration:(id)arg1 ;
-(void)dealloc;
-(BOOL)shouldScreenTimeSuppressNotificationsForBundleIdentifier:(id)arg1 ;
-(void)_screenTimeNotificationPolicyDidChange:(id)arg1 ;
-(BOOL)isBundleIdentifierClock:(id)arg1 ;
-(BOOL)isBundleIdentifierWallet:(id)arg1 ;
-(void)addApplicationInformationObserver:(id)arg1 ;
-(void)removeApplicationInformationObserver:(id)arg1 ;
@end

