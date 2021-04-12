/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBStarkNotificationBannerSourceDelegate.h>
#import <libobjc.A.dylib/SBStarkNotificationsAgent.h>

@protocol SBStarkNotificationsAgentDelegate;
@class NSMutableOrderedSet, SBStarkNotificationSceneComponent, NSString;

@interface SBStarkNotificationSceneComponentManager : NSObject <SBStarkNotificationBannerSourceDelegate, SBStarkNotificationsAgent> {

	NSMutableOrderedSet* _activeComponents;
	id<SBStarkNotificationsAgentDelegate> _delegate;

}

@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (nonatomic,readonly) SBStarkNotificationSceneComponent * activeComponent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SBStarkNotificationsAgentDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) id<SBStarkNotificationsConfiguring> activeConfiguration; 
-(id)init;
-(id<SBStarkNotificationsAgentDelegate>)delegate;
-(void)setDelegate:(id<SBStarkNotificationsAgentDelegate>)arg1 ;
-(BOOL)isActive;
-(SBStarkNotificationSceneComponent *)activeComponent;
-(id<SBStarkNotificationsConfiguring>)activeConfiguration;
-(id)activeConfigurationForScreen:(id)arg1 ;
-(void)executeAction:(id)arg1 forNotificationRequest:(id)arg2 ;
-(void)willPresentNotificationRequest:(id)arg1 ;
-(void)didDismissNotificationRequest:(id)arg1 ;
-(void)noteComponentDidActivate:(id)arg1 ;
-(void)noteComponentDidDeactivate:(id)arg1 ;
@end

