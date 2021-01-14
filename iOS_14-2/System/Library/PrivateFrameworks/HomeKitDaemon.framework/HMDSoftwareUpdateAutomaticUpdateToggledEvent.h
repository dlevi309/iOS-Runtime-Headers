/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class NSString;

@interface HMDSoftwareUpdateAutomaticUpdateToggledEvent : HMDLogEvent <HMDAWDLogEvent> {

	BOOL _enabled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
+(void)initialize;
+(id)uuid;
+(id)eventWithAutomaticUpdateEnabled:(BOOL)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
@end

