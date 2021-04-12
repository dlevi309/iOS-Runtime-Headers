/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned long long)options;
-(void)setExportedInterface:(NSXPCInterface *)arg1 ;
-(void)setOptions:(unsigned long long)arg1 ;
-(NSString *)serviceName;
-(NSXPCInterface *)exportedInterface;
-(void)setServiceName:(NSString *)arg1 ;
-(NSXPCInterface *)remoteInterface;
-(BOOL)machService;
-(void)setMachService:(BOOL)arg1 ;
-(void)setRemoteInterface:(NSXPCInterface *)arg1 ;
@end

