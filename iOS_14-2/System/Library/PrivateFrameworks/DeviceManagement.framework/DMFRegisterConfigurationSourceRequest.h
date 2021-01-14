/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString, NSXPCListenerEndpoint, DMFReportingRequirements;

@interface DMFRegisterConfigurationSourceRequest : DMFTaskRequest {

	NSString* _configurationSourceName;
	NSString* _organizationIdentifier;
	NSString* _machServiceName;
	NSXPCListenerEndpoint* _listenerEndpoint;
	DMFReportingRequirements* _reportingRequirements;

}

@property (nonatomic,copy) NSString * configurationSourceName;                            //@synthesize configurationSourceName=_configurationSourceName - In the implementation block
@property (nonatomic,copy) NSString * organizationIdentifier;                             //@synthesize organizationIdentifier=_organizationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * machServiceName;                                    //@synthesize machServiceName=_machServiceName - In the implementation block
@property (nonatomic,retain) NSXPCListenerEndpoint * listenerEndpoint;                    //@synthesize listenerEndpoint=_listenerEndpoint - In the implementation block
@property (nonatomic,copy) DMFReportingRequirements * reportingRequirements;              //@synthesize reportingRequirements=_reportingRequirements - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isPermittedOnUserConnection;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
-(NSString *)organizationIdentifier;
-(void)setMachServiceName:(NSString *)arg1 ;
-(void)setReportingRequirements:(DMFReportingRequirements *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setOrganizationIdentifier:(NSString *)arg1 ;
-(NSString *)machServiceName;
-(NSString *)configurationSourceName;
-(void)setConfigurationSourceName:(NSString *)arg1 ;
-(void)setListenerEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(NSXPCListenerEndpoint *)listenerEndpoint;
-(id)initWithCoder:(id)arg1 ;
-(DMFReportingRequirements *)reportingRequirements;
@end

