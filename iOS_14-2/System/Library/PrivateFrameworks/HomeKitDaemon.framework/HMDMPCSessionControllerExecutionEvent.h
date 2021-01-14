/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDMediaPlaybackActionEvent.h>
#import <libobjc.A.dylib/HMDCoreAnalyticsLogging.h>

@class NSString;

@interface HMDMPCSessionControllerExecutionEvent : HMDMediaPlaybackActionEvent <HMDCoreAnalyticsLogging> {

	BOOL _didPartiallySucceed;

}

@property (assign) BOOL didPartiallySucceed;                    //@synthesize didPartiallySucceed=_didPartiallySucceed - In the implementation block
@property (copy,readonly) NSString * resultString; 
+(id)identifier;
-(id)eventName;
-(NSString *)resultString;
-(id)serializedEvent;
-(BOOL)didPartiallySucceed;
-(void)setDidPartiallySucceed:(BOOL)arg1 ;
@end

