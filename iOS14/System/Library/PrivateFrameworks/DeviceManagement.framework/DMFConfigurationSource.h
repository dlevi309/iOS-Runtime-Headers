/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, DMFReportingRequirements;

@interface DMFConfigurationSource : NSObject <NSSecureCoding> {

	NSString* _identifier;
	NSString* _displayName;
	NSString* _organizationIdentifier;
	NSString* _machServiceName;
	DMFReportingRequirements* _reportingRequirements;

}

@property (nonatomic,copy) NSString * identifier;                                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                          //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * organizationIdentifier;                               //@synthesize organizationIdentifier=_organizationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * machServiceName;                                      //@synthesize machServiceName=_machServiceName - In the implementation block
@property (nonatomic,retain) DMFReportingRequirements * reportingRequirements;              //@synthesize reportingRequirements=_reportingRequirements - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)organizationIdentifier;
-(void)setMachServiceName:(NSString *)arg1 ;
-(id)init;
-(void)setReportingRequirements:(DMFReportingRequirements *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(void)setOrganizationIdentifier:(NSString *)arg1 ;
-(NSString *)machServiceName;
-(id)description;
-(void)setDisplayName:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(DMFReportingRequirements *)reportingRequirements;
-(NSString *)displayName;
@end

