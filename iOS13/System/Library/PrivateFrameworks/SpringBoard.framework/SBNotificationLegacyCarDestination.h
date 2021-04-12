/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/NCNotificationAlertDestination.h>
#import <libobjc.A.dylib/SBStarkNotificationsAgentDelegate.h>

@protocol NCNotificationAlertDestinationDelegate;
@class NSMutableOrderedSet, DNDEventBehaviorResolutionService, SBStarkNotificationSceneComponentManager, NSString, BSServiceConnectionEndpoint;

@interface SBNotificationLegacyCarDestination : NSObject <NCNotificationAlertDestination, SBStarkNotificationsAgentDelegate> {

	NSMutableOrderedSet* _activeComponents;
	DNDEventBehaviorResolutionService* _dndEventBehaviorResolutionService;
	id<NCNotificationAlertDestinationDelegate> _delegate;
	SBStarkNotificationSceneComponentManager* _sceneComponentManager;

}

@property (nonatomic,retain) SBStarkNotificationSceneComponentManager * sceneComponentManager;              //@synthesize sceneComponentManager=_sceneComponentManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<NCNotificationDestinationDelegate> delegate; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) BSServiceConnectionEndpoint * endpoint; 
-(id)init;
-(id<NCNotificationDestinationDelegate>)delegate;
-(void)setDelegate:(id<NCNotificationDestinationDelegate>)arg1 ;
-(NSString *)identifier;
-(BSServiceConnectionEndpoint *)endpoint;
-(void)postNotificationRequest:(id)arg1 ;
-(void)withdrawNotificationRequest:(id)arg1 ;
-(void)modifyNotificationRequest:(id)arg1 ;
-(BOOL)canReceiveNotificationRequest:(id)arg1 ;
-(void)agent:(id)arg1 executeAction:(id)arg2 forNotificationRequest:(id)arg3 ;
-(void)agent:(id)arg1 willPresentNotificationRequest:(id)arg2 ;
-(void)agent:(id)arg1 didDismissNotificationRequest:(id)arg2 ;
-(SBStarkNotificationSceneComponentManager *)sceneComponentManager;
-(void)setSceneComponentManager:(SBStarkNotificationSceneComponentManager *)arg1 ;
@end

