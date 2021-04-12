/*
* Generated on Thursday, January 14, 2021 at 2:25:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEvent.h>

@class NSString;

@interface HMDCameraClipManagerRequestLogEvent : HMDLogEvent {

	NSString* _requestName;

}

@property (nonatomic,readonly) NSString * requestName;              //@synthesize requestName=_requestName - In the implementation block
+(id)uuid;
-(NSString *)requestName;
-(id)initWithRequestName:(id)arg1 ;
@end

