/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEvent.h>

@class NSString;

@interface HMDUploadStartingLogEvent : HMDLogEvent {

	NSString* _saveReason;

}

@property (nonatomic,readonly) NSString * saveReason;              //@synthesize saveReason=_saveReason - In the implementation block
+(id)uuid;
+(id)uploadReason:(id)arg1 ;
-(id)initUploadReason:(id)arg1 ;
-(NSString *)saveReason;
@end

