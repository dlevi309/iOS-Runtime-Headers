/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthRecordsPlugin/HealthRecordsPlugin-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HDClinicalContentAnalyticsDisplayStringsMetricElementKey : NSObject <NSCopying> {

	BOOL _containsSpecialCharacter;
	BOOL _containsNoLowercaseCharacter;
	long long _extractionRulesVersion;
	long long _resourceType;
	long long _property;
	long long _subProperty;

}

@property (nonatomic,readonly) long long extractionRulesVersion;               //@synthesize extractionRulesVersion=_extractionRulesVersion - In the implementation block
@property (nonatomic,readonly) long long resourceType;                         //@synthesize resourceType=_resourceType - In the implementation block
@property (nonatomic,readonly) long long property;                             //@synthesize property=_property - In the implementation block
@property (nonatomic,readonly) long long subProperty;                          //@synthesize subProperty=_subProperty - In the implementation block
@property (nonatomic,readonly) BOOL containsSpecialCharacter;                  //@synthesize containsSpecialCharacter=_containsSpecialCharacter - In the implementation block
@property (nonatomic,readonly) BOOL containsNoLowercaseCharacter;              //@synthesize containsNoLowercaseCharacter=_containsNoLowercaseCharacter - In the implementation block
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
-(BOOL)containsSpecialCharacter;
-(BOOL)containsNoLowercaseCharacter;
-(id)initWithExtractionRulesVersion:(long long)arg1 resourceType:(long long)arg2 property:(long long)arg3 displayString:(id)arg4 ;
-(id)initWithExtractionRulesVersion:(long long)arg1 resourceType:(long long)arg2 property:(long long)arg3 subProperty:(long long)arg4 displayString:(id)arg5 ;
@end

