/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class NSString;

@interface HMDSoftwareUpdateStartedEvent : HMDLogEvent <HMDAWDLogEvent> {

	BOOL _automaticUpdateEnabled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isAutomaticUpdateEnabled,nonatomic) BOOL automaticUpdateEnabled;              //@synthesize automaticUpdateEnabled=_automaticUpdateEnabled - In the implementation block
+(void)initialize;
+(id)uuid;
+(id)eventUpdateStartedWithAutomaticUpdateEnabled:(BOOL)arg1 ;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
-(void)setAutomaticUpdateEnabled:(BOOL)arg1 ;
-(BOOL)isAutomaticUpdateEnabled;
@end

