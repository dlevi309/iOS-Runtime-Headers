/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)unregisterObserver:(id)arg1 ;
-(void)registerObserver:(id)arg1 ;
-(id)init;
-(void)postNotificationName:(id)arg1 userInfo:(id)arg2 ;
-(void)setRemoteNotificationCenter:(id)arg1 ;
-(long long)_indexOfObserver:(id)arg1 ;
-(BOOL)_tryPostingNotificationName:(id)arg1 userInfo:(id)arg2 ;
-(void)_bufferNotificationName:(id)arg1 userInfo:(id)arg2 ;
-(void)_sendEnqueuedNotifications;
@end

