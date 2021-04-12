/*
* Generated on Thursday, January 14, 2021 at 2:29:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthRecordsPlugin/HealthRecordsPlugin-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HDClinicalContentAnalyticsUnknownRecordsMetricElement : NSObject <NSCopying> {

	long long _extractionRulesVersion;
	NSString* _reportedHost;
	NSString* _resourceType;
	NSString* _propertyName;
	NSString* _keyPath;
	long long _failureCode;

}

@property (nonatomic,readonly) long long extractionRulesVersion;              //@synthesize extractionRulesVersion=_extractionRulesVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * reportedHost;                  //@synthesize reportedHost=_reportedHost - In the implementation block
@property (nonatomic,copy,readonly) NSString * resourceType;                  //@synthesize resourceType=_resourceType - In the implementation block
@property (nonatomic,copy,readonly) NSString * propertyName;                  //@synthesize propertyName=_propertyName - In the implementation block
@property (nonatomic,copy,readonly) NSString * keyPath;                       //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,readonly) long long failureCode;                         //@synthesize failureCode=_failureCode - In the implementation block
-(long long)compare:(id)arg1 ;
-(NSString *)resourceType;
-(id)debugDescription;
-(unsigned long long)hash;
-(NSString *)keyPath;
-(NSString *)propertyName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)failureCode;
-(NSString *)reportedHost;
-(id)initWithExtractionRulesVersion:(long long)arg1 reportedHost:(id)arg2 resourceType:(id)arg3 propertyName:(id)arg4 resourceKeyPath:(id)arg5 failureCode:(long long)arg6 ;
-(id)payloadForCoreAnalyticsWithEventCount:(id)arg1 ;
-(long long)extractionRulesVersion;
@end

