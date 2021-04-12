/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class NSArray, NSString;

@interface HMDCameraConfigurationsLogEvent : HMDLogEvent <HMDAWDLogEvent> {

	NSArray* _homeSettingsConfigurations;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * homeSettingsConfigurations;              //@synthesize homeSettingsConfigurations=_homeSettingsConfigurations - In the implementation block
+(id)uuid;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
-(id)initWithHomes:(id)arg1 ;
-(NSArray *)homeSettingsConfigurations;
@end

