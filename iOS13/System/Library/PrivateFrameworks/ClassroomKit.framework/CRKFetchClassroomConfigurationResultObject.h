/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSDictionary;

@interface CRKFetchClassroomConfigurationResultObject : CATTaskResultObject {

	NSDictionary* _configuration;
	NSDictionary* _configurationsByType;

}

@property (nonatomic,copy) NSDictionary * configuration;                     //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy) NSDictionary * configurationsByType;              //@synthesize configurationsByType=_configurationsByType - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setConfiguration:(NSDictionary *)arg1 ;
-(NSDictionary *)configuration;
-(NSDictionary *)configurationsByType;
-(void)setConfigurationsByType:(NSDictionary *)arg1 ;
@end

