/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/BBObserverDelegate.h>
#import <libobjc.A.dylib/AFSiriUserNotificationRequestCapabilityObserving.h>

@class BBObserver, DNDEventBehaviorResolutionService, NSString;

@interface SBBulletinSpokenObserverGateway : NSObject <BBObserverDelegate, AFSiriUserNotificationRequestCapabilityObserving> {

	BBObserver* _bbObserver;
	DNDEventBehaviorResolutionService* _dndEventBehaviorResolutionService;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)hasEligibleSetupChanged:(BOOL)arg1 ;
-(void)requestCanBeHandledChanged:(BOOL)arg1 ;
-(void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3 playLightsAndSirens:(BOOL)arg4 withReply:(/*^block*/id)arg5 ;
-(id)_notificationFromBulletin:(id)arg1 ;
@end

