/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class NSNumber;

@interface HMDAccessorySettingMergeStrategy : HMFObject {

	NSNumber* _conflictValue;
	long long _strategy;

}

@property (nonatomic,readonly) NSNumber * conflictValue;              //@synthesize conflictValue=_conflictValue - In the implementation block
@property (nonatomic,readonly) long long strategy;                    //@synthesize strategy=_strategy - In the implementation block
-(long long)strategy;
-(id)initWithMergeStrategy:(id)arg1 ;
-(NSNumber *)conflictValue;
@end

