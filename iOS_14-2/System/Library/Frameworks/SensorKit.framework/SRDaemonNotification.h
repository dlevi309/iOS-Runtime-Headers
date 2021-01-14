/*
* Generated on Thursday, January 14, 2021 at 2:26:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SensorKit.framework/SensorKit
*/


@protocol SRDaemonNotificationDelegate;
@class NSString;

@interface SRDaemonNotification : NSObject {

	int _registrationToken;
	int _significantTimeChangeToken;
	int _resetDatastoreToken;
	id<SRDaemonNotificationDelegate> _delegate;
	NSString* _sensorIdentifier;

}
+(void)initialize;
-(void)dealloc;
@end

