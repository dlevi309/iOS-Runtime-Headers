/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HAENotifications.framework/HAENotifications
*/

#import <HAENotifications/HAENotificationCenterDelegate.h>

@class NSXPCConnection, NSString;

@interface HAENotificationCenterClient : NSObject <HAENotificationCenterDelegate> {

	NSXPCConnection* connection;
	BOOL connectionDidInvalidate;
	NSString* bundleID;

}

@property (nonatomic,retain) NSString * bundleID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)setupConnection;
-(void)setBundleID:(NSString *)arg1 ;
-(id)initWithBundleID:(id)arg1 ;
-(NSString *)bundleID;
-(void)addHAENotificationEvent:(id)arg1 ;
@end

