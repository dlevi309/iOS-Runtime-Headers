/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTNotification.h>

@class NSArray;

@interface RTWiFiManagerNotificationLinkStatusChanged : RTNotification {

	unsigned long long _linkStatus;
	NSArray* _accessPoints;

}

@property (nonatomic,readonly) unsigned long long linkStatus;              //@synthesize linkStatus=_linkStatus - In the implementation block
@property (nonatomic,readonly) NSArray * accessPoints;                     //@synthesize accessPoints=_accessPoints - In the implementation block
-(NSArray *)accessPoints;
-(id)initWithLinkStatus:(unsigned long long)arg1 accessPoints:(id)arg2 ;
-(unsigned long long)linkStatus;
@end

