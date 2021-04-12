/*
* Generated on Thursday, January 14, 2021 at 2:29:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthRecordsPlugin/HealthRecordsPlugin-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface HDClinicalIngestionAnalyticsMetricKey : NSObject <NSCopying> {

	NSString* _reportedHost;
	NSString* _resourceType;
	long long _interactionType;

}

@property (nonatomic,copy,readonly) NSString * reportedHost;                 //@synthesize reportedHost=_reportedHost - In the implementation block
@property (nonatomic,copy,readonly) NSString * resourceType;                 //@synthesize resourceType=_resourceType - In the implementation block
@property (nonatomic,readonly) long long interactionType;                    //@synthesize interactionType=_interactionType - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * analyticsString; 
+(id)reportedHostFromSourceURL:(id)arg1 resourceType:(id)arg2 ;
+(id)analyticsMetricKeyWithResourceURL:(id)arg1 baseURL:(id)arg2 ;
-(NSString *)resourceType;
-(id)debugDescription;
-(NSNumber *)analyticsString;
-(unsigned long long)hash;
-(long long)interactionType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)reportedHost;
-(id)initWithReportedHost:(id)arg1 resourceType:(id)arg2 interactionType:(long long)arg3 ;
@end

