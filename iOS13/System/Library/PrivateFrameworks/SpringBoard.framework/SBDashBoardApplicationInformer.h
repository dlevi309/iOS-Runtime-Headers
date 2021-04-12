/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)removeApplicationInformationObserver:(id)arg1 ;
-(void)addApplicationInformationObserver:(id)arg1 ;
-(BOOL)isBundleIdentifierClock:(id)arg1 ;
-(BOOL)shouldScreenTimeSuppressNotificationsForBundleIdentifier:(id)arg1 ;
-(BOOL)_isBundleIdentifierBlockedForScreenTimeExpiration:(id)arg1 ;
-(BOOL)_isBundleIdentifierBlockedForCommunicationPolicy:(id)arg1 ;
-(void)_installedApplicationsDidChange:(id)arg1 ;
-(void)_screenTimeNotificationPolicyDidChange:(id)arg1 ;
-(BOOL)isBundleIdentifierWallet:(id)arg1 ;
@end

