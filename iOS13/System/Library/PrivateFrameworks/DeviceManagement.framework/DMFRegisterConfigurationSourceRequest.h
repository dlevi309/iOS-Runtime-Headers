/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setMachServiceName:(NSString *)arg1 ;
-(NSString *)machServiceName;
-(NSXPCListenerEndpoint *)listenerEndpoint;
-(void)setListenerEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(NSString *)organizationIdentifier;
-(DMFReportingRequirements *)reportingRequirements;
-(void)setOrganizationIdentifier:(NSString *)arg1 ;
-(void)setReportingRequirements:(DMFReportingRequirements *)arg1 ;
-(NSString *)configurationSourceName;
-(void)setConfigurationSourceName:(NSString *)arg1 ;
@end

