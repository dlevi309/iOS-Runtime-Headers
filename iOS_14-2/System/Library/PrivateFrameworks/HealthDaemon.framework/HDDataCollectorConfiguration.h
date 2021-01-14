/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HDDataCollectorConfiguration : NSObject <NSCopying> {

	unsigned long long _collectionType;
	double _collectionInterval;
	double _collectionLatency;

}

@property (nonatomic,readonly) unsigned long long collectionType;              //@synthesize collectionType=_collectionType - In the implementation block
@property (nonatomic,readonly) double collectionInterval;                      //@synthesize collectionInterval=_collectionInterval - In the implementation block
@property (nonatomic,readonly) double collectionLatency;                       //@synthesize collectionLatency=_collectionLatency - In the implementation block
+(id)disabledConfiguration;
+(id)configurationWithType:(unsigned long long)arg1 interval:(double)arg2 latency:(double)arg3 ;
+(id)configurationWithType:(unsigned long long)arg1 aggregatorConfiguration:(id)arg2 ;
-(double)collectionInterval;
-(id)init;
-(id)mergedConfiguration:(id)arg1 ;
-(id)initWithType:(unsigned long long)arg1 interval:(double)arg2 latency:(double)arg3 ;
-(id)description;
-(double)collectionLatency;
-(unsigned long long)collectionType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

