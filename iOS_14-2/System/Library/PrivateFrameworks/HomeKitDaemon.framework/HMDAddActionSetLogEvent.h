/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEvent.h>

@class NSString;

@interface HMDAddActionSetLogEvent : HMDLogEvent {

	NSString* _actionSetType;

}

@property (copy,readonly) NSString * actionSetType;              //@synthesize actionSetType=_actionSetType - In the implementation block
+(id)uuid;
-(NSString *)actionSetType;
-(id)initWithActionSetType:(id)arg1 ;
@end

