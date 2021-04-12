/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthRecordsPlugin/HealthRecordsPlugin-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HDClinicalContentAnalyticsDateFormsMetricElement : NSObject <NSCopying> {

	long long _extractionRulesVersion;
	long long _resourceType;
	long long _property;
	long long _subProperty;
	long long _dateForm;

}

@property (nonatomic,readonly) long long extractionRulesVersion;              //@synthesize extractionRulesVersion=_extractionRulesVersion - In the implementation block
@property (nonatomic,readonly) long long resourceType;                        //@synthesize resourceType=_resourceType - In the implementation block
@property (nonatomic,readonly) long long property;                            //@synthesize property=_property - In the implementation block
@property (nonatomic,readonly) long long subProperty;                         //@synthesize subProperty=_subProperty - In the implementation block
@property (nonatomic,readonly) long long dateForm;                            //@synthesize dateForm=_dateForm - In the implementation block
+(id)analyticsString;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)compare:(id)arg1 ;
-(long long)property;
-(long long)resourceType;
-(id)analyticsString;
-(long long)subProperty;
-(long long)extractionRulesVersion;
-(id)initWithExtractionRulesVersion:(long long)arg1 resourceType:(long long)arg2 property:(long long)arg3 dateForm:(long long)arg4 ;
-(long long)dateForm;
-(id)initWithExtractionRulesVersion:(long long)arg1 resourceType:(long long)arg2 property:(long long)arg3 subProperty:(long long)arg4 dateForm:(long long)arg5 ;
@end

