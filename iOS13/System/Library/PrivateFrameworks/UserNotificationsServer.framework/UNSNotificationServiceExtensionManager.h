/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
*/


@class NSDictionary;

@interface UNSNotificationServiceExtensionManager : NSObject {

	id _matchingContext;
	NSDictionary* _extensionIdentifierByContainingAppIdentifier;

}

@property (copy) NSDictionary * extensionIdentifierByContainingAppIdentifier;              //@synthesize extensionIdentifierByContainingAppIdentifier=_extensionIdentifierByContainingAppIdentifier - In the implementation block
-(id)init;
-(void)dealloc;
-(void)_startMonitoringExtensions;
-(void)_stopMonitoringExtensions;
-(NSDictionary *)extensionIdentifierByContainingAppIdentifier;
-(void)setExtensionIdentifierByContainingAppIdentifier:(NSDictionary *)arg1 ;
-(id)extensionForBundleIdentifier:(id)arg1 error:(id*)arg2 ;
@end

