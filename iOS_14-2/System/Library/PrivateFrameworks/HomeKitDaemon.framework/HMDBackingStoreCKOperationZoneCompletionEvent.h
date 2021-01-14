/*
* Generated on Thursday, January 14, 2021 at 2:25:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDHMBLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class NSError, NSString;

@interface HMDBackingStoreCKOperationZoneCompletionEvent : HMDHMBLogEvent <HMDAWDLogEvent> {

	NSError* _error;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSError * error;                          //@synthesize error=_error - In the implementation block
+(id)uuid;
-(NSError *)error;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
-(id)initWithCloudZoneID:(id)arg1 error:(id)arg2 ;
@end

