/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <libobjc.A.dylib/QLNotificationCenterProtocol.h>

@protocol QLNotificationCenterProtocol;
@class NSPointerArray, NSMutableArray, NSString;

@interface QLNotificationCenter : NSObject <QLNotificationCenterProtocol> {

	id<QLNotificationCenterProtocol> _remoteNotificationCenter;
	NSPointerArray* _observers;
	NSMutableArray* _bufferedNotifications;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)postNotificationName:(id)arg1 userInfo:(id)arg2 ;
-(long long)_indexOfObserver:(id)arg1 ;
-(void)registerObserver:(id)arg1 ;
-(void)unregisterObserver:(id)arg1 ;
-(void)setRemoteNotificationCenter:(id)arg1 ;
-(BOOL)_tryPostingNotificationName:(id)arg1 userInfo:(id)arg2 ;
-(void)_bufferNotificationName:(id)arg1 userInfo:(id)arg2 ;
-(void)_sendEnqueuedNotifications;
@end

