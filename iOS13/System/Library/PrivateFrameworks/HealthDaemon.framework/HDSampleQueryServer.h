/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDBatchedQueryServer.h>

@class NSArray;

@interface HDSampleQueryServer : HDBatchedQueryServer {

	BOOL _suspended;
	BOOL _includeAutomaticTimeZones;
	unsigned long long _limit;
	NSArray* _sortDescriptors;

}

@property (nonatomic,readonly) unsigned long long limit;                    //@synthesize limit=_limit - In the implementation block
@property (nonatomic,copy,readonly) NSArray * sortDescriptors;              //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (nonatomic,readonly) BOOL includeAutomaticTimeZones;              //@synthesize includeAutomaticTimeZones=_includeAutomaticTimeZones - In the implementation block
+(id)requiredEntitlements;
+(Class)queryClass;
+(BOOL)supportsAnchorBasedAuthorization;
-(NSArray *)sortDescriptors;
-(unsigned long long)limit;
-(BOOL)includeAutomaticTimeZones;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 ;
-(void)_queue_start;
-(BOOL)validateConfiguration:(id*)arg1 ;
@end

