/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEvent.h>

@class NSString;

@interface HMDAssertionLogEvent : HMDLogEvent {

	NSString* _description;
	NSString* _reason;

}

@property (copy,readonly) NSString * reason;              //@synthesize reason=_reason - In the implementation block
+(id)identifier;
-(id)description;
-(NSString *)reason;
-(id)initWithReason:(id)arg1 ;
@end

