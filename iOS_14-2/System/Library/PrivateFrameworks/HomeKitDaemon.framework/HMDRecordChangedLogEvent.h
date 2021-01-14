/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEvent.h>

@interface HMDRecordChangedLogEvent : HMDLogEvent {

	BOOL _legacy;
	unsigned long long _size;

}

@property (nonatomic,readonly) unsigned long long size;                  //@synthesize size=_size - In the implementation block
@property (getter=isLegacy,nonatomic,readonly) BOOL legacy;              //@synthesize legacy=_legacy - In the implementation block
+(id)uuid;
-(BOOL)isLegacy;
-(unsigned long long)size;
-(id)initWithChangedRecord:(id)arg1 isLegacy:(BOOL)arg2 ;
@end

