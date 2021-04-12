/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/


@class ASDAppUsageStats, NSArray;

@interface ASDAppUsageStore : NSObject {

	BOOL _verbose;
	ASDAppUsageStats* _leastUsageCount;
	ASDAppUsageStats* _leastUsageTime;
	ASDAppUsageStats* _topUsageCount;
	ASDAppUsageStats* _topUsageTime;
	NSArray* _usageStats;

}

@property (nonatomic,readonly) ASDAppUsageStats * leastUsageCount;              //@synthesize leastUsageCount=_leastUsageCount - In the implementation block
@property (nonatomic,readonly) ASDAppUsageStats * leastUsageTime;               //@synthesize leastUsageTime=_leastUsageTime - In the implementation block
@property (nonatomic,readonly) ASDAppUsageStats * topUsageCount;                //@synthesize topUsageCount=_topUsageCount - In the implementation block
@property (nonatomic,readonly) ASDAppUsageStats * topUsageTime;                 //@synthesize topUsageTime=_topUsageTime - In the implementation block
@property (nonatomic,readonly) NSArray * usageStats;                            //@synthesize usageStats=_usageStats - In the implementation block
@property (assign,nonatomic) BOOL verbose;                                      //@synthesize verbose=_verbose - In the implementation block
+(id)allUsageForStreams:(unsigned long long)arg1 fromDate:(id)arg2 endDate:(id)arg3 error:(id*)arg4 ;
-(void)setVerbose:(BOOL)arg1 ;
-(BOOL)verbose;
-(id)_sortDescriptors;
-(NSArray *)usageStats;
-(void)_calculateUsageForDurationInDays:(double)arg1 bundleIDs:(id)arg2 includeExtensionUsage:(BOOL)arg3 ;
-(id)_calculateRawUsageFromDate:(id)arg1 endDate:(id)arg2 stats:(id)arg3 streams:(unsigned long long)arg4 ;
-(id)_calcluateUsageFromDate:(id)arg1 endDate:(id)arg2 bundleIDs:(id)arg3 includeExtensionUsage:(BOOL)arg4 ;
-(id)_calculateUsageFromDate:(id)arg1 endDate:(id)arg2 stats:(id)arg3 includeExtensionUsage:(BOOL)arg4 ;
-(id)initWithDurationInDays:(double)arg1 bundleIDs:(id)arg2 ;
-(id)initWithDurationInDays:(double)arg1 bundleIDs:(id)arg2 includeExtensionUsage:(BOOL)arg3 ;
-(id)calcluateUsageFromDate:(id)arg1 endDate:(id)arg2 appMetadata:(id)arg3 streams:(unsigned long long)arg4 ;
-(id)calcluateUsageFromDate:(id)arg1 endDate:(id)arg2 bundleIDs:(id)arg3 ;
-(ASDAppUsageStats *)leastUsageCount;
-(ASDAppUsageStats *)leastUsageTime;
-(ASDAppUsageStats *)topUsageCount;
-(ASDAppUsageStats *)topUsageTime;
@end

