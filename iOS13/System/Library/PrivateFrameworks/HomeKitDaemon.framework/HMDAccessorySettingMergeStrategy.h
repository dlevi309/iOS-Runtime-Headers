/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

