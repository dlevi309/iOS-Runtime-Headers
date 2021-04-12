/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SPFinder.framework/SPFinder
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface SPSchedulerInformation : NSObject <NSSecureCoding> {

	long long _advertisementCount;
	long long _priorityCount;
	long long _lowBatteryCount;

}

@property (assign,nonatomic) long long advertisementCount;              //@synthesize advertisementCount=_advertisementCount - In the implementation block
@property (assign,nonatomic) long long priorityCount;                   //@synthesize priorityCount=_priorityCount - In the implementation block
@property (assign,nonatomic) long long lowBatteryCount;                 //@synthesize lowBatteryCount=_lowBatteryCount - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)advertisementCount;
-(long long)priorityCount;
-(long long)lowBatteryCount;
-(void)setAdvertisementCount:(long long)arg1 ;
-(void)setPriorityCount:(long long)arg1 ;
-(void)setLowBatteryCount:(long long)arg1 ;
@end

