/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDCoreAnalyticsLogging.h>

@interface HMDUserDataZoneControllerShareLogEvent : HMDLogEvent <HMDCoreAnalyticsLogging> {

	BOOL _didAccept;
	unsigned long long _result;

}

@property (readonly) unsigned long long result;              //@synthesize result=_result - In the implementation block
@property (readonly) BOOL didAccept;                         //@synthesize didAccept=_didAccept - In the implementation block
+(id)uuid;
-(id)eventName;
-(unsigned long long)result;
-(id)serializedEvent;
-(id)initWithResult:(unsigned long long)arg1 didAccept:(BOOL)arg2 ;
-(BOOL)didAccept;
@end

