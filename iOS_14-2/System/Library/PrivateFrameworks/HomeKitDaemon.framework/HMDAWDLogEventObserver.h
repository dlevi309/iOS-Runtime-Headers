/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDLogEventObserver.h>

@class NSString;

@interface HMDAWDLogEventObserver : HMFObject <HMDLogEventObserver>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)sharedAWDServerConnection;
+(id)stringForAWDMetricType:(unsigned)arg1 ;
+(void)_submitAWDMetric:(id)arg1 type:(unsigned)arg2 ;
-(id)init;
-(void)didReceiveEventFromDispatcher:(id)arg1 withLogContext:(id)arg2 ;
@end

