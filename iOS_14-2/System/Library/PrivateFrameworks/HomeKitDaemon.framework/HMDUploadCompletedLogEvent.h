/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEvent.h>

@class NSError;

@interface HMDUploadCompletedLogEvent : HMDLogEvent {

	NSError* _error;

}

@property (nonatomic,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
+(id)uuid;
+(id)uploadCompletedWithError:(id)arg1 ;
-(NSError *)error;
-(id)initUploadWithError:(id)arg1 ;
@end

