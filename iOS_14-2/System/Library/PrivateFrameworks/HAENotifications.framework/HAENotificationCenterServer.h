/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HAENotifications.framework/HAENotifications
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <HAENotifications/HAENotificationCenterDelegate.h>

@class NSXPCListener, NSString;

@interface HAENotificationCenterServer : NSObject <NSXPCListenerDelegate, HAENotificationCenterDelegate> {

	NSXPCListener* _xpcListener;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(BOOL)verifyInvariants;
-(void)addHAENotificationEvent:(id)arg1 ;
@end

