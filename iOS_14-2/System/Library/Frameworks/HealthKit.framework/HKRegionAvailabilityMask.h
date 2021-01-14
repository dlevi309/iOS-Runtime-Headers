/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@interface HKRegionAvailabilityMask : NSObject {

	unsigned long long _bitmask;
	long long _group;

}

@property (nonatomic,readonly) unsigned long long bitmask;              //@synthesize bitmask=_bitmask - In the implementation block
@property (nonatomic,readonly) long long group;                         //@synthesize group=_group - In the implementation block
+(id)maskWithBitmask:(unsigned long long)arg1 group:(long long)arg2 ;
-(long long)group;
-(id)initWithBitMask:(unsigned long long)arg1 regionGroup:(long long)arg2 ;
-(BOOL)_isEqualToMask:(id)arg1 ;
-(unsigned long long)bitmask;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
@end

