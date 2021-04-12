/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

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
-(void)hasEligibleSetupChanged:(BOOL)arg1 ;
-(id)init;
-(void)requestCanBeHandledChanged:(BOOL)arg1 ;
-(void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3 playLightsAndSirens:(BOOL)arg4 withReply:(/*^block*/id)arg5 ;
@end

