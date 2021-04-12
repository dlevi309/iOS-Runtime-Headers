/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
*/

#import <libobjc.A.dylib/FMNSXPCConnectionConfigurable.h>

@class NSString, NSXPCInterface;

@interface FMNSXPCConnectionConfiguration : NSObject <FMNSXPCConnectionConfigurable> {

	BOOL _machService;
	NSString* _serviceName;
	NSXPCInterface* _remoteInterface;
	NSXPCInterface* _exportedInterface;
	unsigned long long _options;

}

@property (nonatomic,retain) NSString * serviceName;                          //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,retain) NSXPCInterface * remoteInterface;                //@synthesize remoteInterface=_remoteInterface - In the implementation block
@property (nonatomic,retain) NSXPCInterface * exportedInterface;              //@synthesize exportedInterface=_exportedInterface - In the implementation block
@property (assign,nonatomic) unsigned long long options;                      //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) BOOL machService;                                //@synthesize machService=_machService - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)identityConfiguration;
+(id)fmipConfiguration;
+(id)helperConfiguration;
+(id)emergencyCallInfoPublisherConfiguration;
+(id)userNotificationConfiguration;
+(id)btDiscoveryConfiguration;
+(id)eraseDeviceServiceConfiguration;
-(void)setRemoteInterface:(NSXPCInterface *)arg1 ;
-(NSXPCInterface *)exportedInterface;
-(unsigned long long)options;
-(NSXPCInterface *)remoteInterface;
-(void)setOptions:(unsigned long long)arg1 ;
-(void)setExportedInterface:(NSXPCInterface *)arg1 ;
-(BOOL)machService;
-(void)setMachService:(BOOL)arg1 ;
-(NSString *)serviceName;
-(void)setServiceName:(NSString *)arg1 ;
@end

