/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, HKDevice;

@interface _HDAggregationStateKey : NSObject <NSCopying> {

	NSString* _collectorIdentifier;
	HKDevice* _device;

}

@property (nonatomic,copy,readonly) NSString * collectorIdentifier;              //@synthesize collectorIdentifier=_collectorIdentifier - In the implementation block
@property (nonatomic,copy,readonly) HKDevice * device;                           //@synthesize device=_device - In the implementation block
+(id)keyForCollector:(id)arg1 device:(id)arg2 aggregator:(id)arg3 ;
-(HKDevice *)device;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)collectorIdentifier;
@end

