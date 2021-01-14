/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARDaemonService.h>
#import <ARKitCore/ARRemoteTechniqueService.h>
#import <ARKitCore/ARTechniqueDelegate.h>

@protocol ARRemoteTechniqueClient;
@class ARTechnique, NSString;

@interface ARTechniqueService : ARDaemonService <ARRemoteTechniqueService, ARTechniqueDelegate> {

	id<ARRemoteTechniqueClient> _clientProxy;
	ARTechnique* _technique;

}

@property (nonatomic,retain) id<ARRemoteTechniqueClient> clientProxy;              //@synthesize clientProxy=_clientProxy - In the implementation block
@property (nonatomic,retain) ARTechnique * technique;                              //@synthesize technique=_technique - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceName;
-(void)setTechnique:(ARTechnique *)arg1 ;
-(id)processData:(id)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(ARTechnique *)technique;
-(void)prepare:(BOOL)arg1 ;
-(void)invalidationHandler;
-(void)interruptionHandler;
-(id<ARRemoteTechniqueClient>)clientProxy;
-(void)setClientProxy:(id<ARRemoteTechniqueClient>)arg1 ;
-(void)technique:(id)arg1 didOutputResultData:(id)arg2 timestamp:(double)arg3 context:(id)arg4 ;
-(void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2 ;
-(void)technique:(id)arg1 didFailWithError:(id)arg2 ;
-(void)processData:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)isActiveWithReply:(/*^block*/id)arg1 ;
-(void)captureBehaviorWithReply:(/*^block*/id)arg1 ;
-(void)numberOfActiveConnectionsWithReply:(/*^block*/id)arg1 ;
-(void)requiredSensorDataTypesWithReply:(/*^block*/id)arg1 ;
-(void)requiredTimeIntervalWithReply:(/*^block*/id)arg1 ;
-(void)resultDataClassesWithReply:(/*^block*/id)arg1 ;
@end

