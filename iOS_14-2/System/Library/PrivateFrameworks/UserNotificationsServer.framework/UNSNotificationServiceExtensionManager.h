/*
* Generated on Thursday, January 14, 2021 at 2:28:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
*/


@class NSDictionary;

@interface UNSNotificationServiceExtensionManager : NSObject {

	id _matchingContext;
	NSDictionary* _extensionIdentifierByContainingAppIdentifier;

}

@property (copy) NSDictionary * extensionIdentifierByContainingAppIdentifier;              //@synthesize extensionIdentifierByContainingAppIdentifier=_extensionIdentifierByContainingAppIdentifier - In the implementation block
-(id)init;
-(NSDictionary *)extensionIdentifierByContainingAppIdentifier;
-(void)_startMonitoringExtensions;
-(id)extensionForBundleIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)setExtensionIdentifierByContainingAppIdentifier:(NSDictionary *)arg1 ;
-(void)_stopMonitoringExtensions;
-(void)dealloc;
@end

