/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HKDevice *)device;
-(NSString *)collectorIdentifier;
@end

