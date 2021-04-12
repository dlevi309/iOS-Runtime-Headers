/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthRecordsPlugin/HealthRecordsPlugin-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface HDClinicalIngestionAnalyticsMetricKey : NSObject <NSCopying> {

	NSString* _host;
	long long _resourceType;
	long long _interactionType;

}

@property (nonatomic,copy,readonly) NSString * host;                         //@synthesize host=_host - In the implementation block
@property (nonatomic,readonly) long long resourceType;                       //@synthesize resourceType=_resourceType - In the implementation block
@property (nonatomic,readonly) long long interactionType;                    //@synthesize interactionType=_interactionType - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * analyticsString; 
+(id)analyticsMetricKeyWithResourceURL:(id)arg1 baseURL:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)host;
-(long long)interactionType;
-(long long)resourceType;
-(NSNumber *)analyticsString;
-(id)initWithHost:(id)arg1 resourceType:(long long)arg2 interactionType:(long long)arg3 ;
@end

