/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthRecordsPlugin/HealthRecordsPlugin-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HDClinicalContentAnalyticsUnknownRecordsMetricElement : NSObject <NSCopying> {

	long long _extractionRulesVersion;
	long long _resourceType;
	NSString* _propertyName;
	NSString* _keyPath;
	long long _failureCode;

}

@property (nonatomic,readonly) long long extractionRulesVersion;              //@synthesize extractionRulesVersion=_extractionRulesVersion - In the implementation block
@property (nonatomic,readonly) long long resourceType;                        //@synthesize resourceType=_resourceType - In the implementation block
@property (nonatomic,copy,readonly) NSString * propertyName;                  //@synthesize propertyName=_propertyName - In the implementation block
@property (nonatomic,copy,readonly) NSString * keyPath;                       //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,readonly) long long failureCode;                         //@synthesize failureCode=_failureCode - In the implementation block
+(id)analyticsString;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)compare:(id)arg1 ;
-(NSString *)keyPath;
-(NSString *)propertyName;
-(long long)resourceType;
-(long long)failureCode;
-(id)analyticsString;
-(long long)extractionRulesVersion;
-(id)initWithExtractionRulesVersion:(long long)arg1 resourceType:(long long)arg2 propertyName:(id)arg3 resourceKeyPath:(id)arg4 failureCode:(long long)arg5 ;
@end

