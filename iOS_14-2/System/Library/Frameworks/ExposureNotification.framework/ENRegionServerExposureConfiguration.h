/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ExposureNotification.framework/ExposureNotification
*/

#import <ExposureNotification/ExposureNotification-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, NSDictionary;

@interface ENRegionServerExposureConfiguration : NSObject <NSSecureCoding, NSCopying> {

	BOOL _enableRecursiveReportType;
	BOOL _matchingRestrictedToRegion;
	NSString* _appBundleIdentifier;
	NSArray* _classificationCriteria;
	NSDictionary* _exposureConfigurationValues;
	double _privacyParameterInputCandenceInterval;

}

@property (nonatomic,copy,readonly) NSString * appBundleIdentifier;                          //@synthesize appBundleIdentifier=_appBundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * classificationCriteria;                        //@synthesize classificationCriteria=_classificationCriteria - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * exposureConfigurationValues;              //@synthesize exposureConfigurationValues=_exposureConfigurationValues - In the implementation block
@property (nonatomic,readonly) BOOL enableRecursiveReportType;                               //@synthesize enableRecursiveReportType=_enableRecursiveReportType - In the implementation block
@property (nonatomic,readonly) BOOL matchingRestrictedToRegion;                              //@synthesize matchingRestrictedToRegion=_matchingRestrictedToRegion - In the implementation block
@property (nonatomic,readonly) double privacyParameterInputCandenceInterval;                 //@synthesize privacyParameterInputCandenceInterval=_privacyParameterInputCandenceInterval - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)appBundleIdentifier;
-(id)initWithServerResponseDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)classificationCriteria;
-(id)classificationCriteriaForName:(id)arg1 ;
-(NSDictionary *)exposureConfigurationValues;
-(BOOL)enableRecursiveReportType;
-(BOOL)matchingRestrictedToRegion;
-(double)privacyParameterInputCandenceInterval;
@end

