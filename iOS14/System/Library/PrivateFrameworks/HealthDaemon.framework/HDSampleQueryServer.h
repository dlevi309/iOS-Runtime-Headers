/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDBatchedQueryServer.h>

@class NSArray;

@interface HDSampleQueryServer : HDBatchedQueryServer {

	BOOL _suspended;
	BOOL _includeAutomaticTimeZones;
	BOOL _includeContributorInformation;
	unsigned long long _limit;
	NSArray* _sortDescriptors;

}

@property (nonatomic,readonly) unsigned long long limit;                        //@synthesize limit=_limit - In the implementation block
@property (nonatomic,copy,readonly) NSArray * sortDescriptors;                  //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (nonatomic,readonly) BOOL includeAutomaticTimeZones;                  //@synthesize includeAutomaticTimeZones=_includeAutomaticTimeZones - In the implementation block
@property (nonatomic,readonly) BOOL includeContributorInformation;              //@synthesize includeContributorInformation=_includeContributorInformation - In the implementation block
+(BOOL)supportsAnchorBasedAuthorization;
+(id)requiredEntitlements;
+(Class)queryClass;
-(unsigned long long)limit;
-(NSArray *)sortDescriptors;
-(BOOL)validateConfiguration:(id*)arg1 ;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 ;
-(BOOL)includeContributorInformation;
-(void)_queue_start;
-(BOOL)includeAutomaticTimeZones;
@end

