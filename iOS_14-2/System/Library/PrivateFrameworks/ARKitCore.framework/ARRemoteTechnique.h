/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARTechnique.h>
#import <ARKitCore/ARRemoteTechniqueClient.h>
#import <ARKitCore/ARServerConnectionDelegate.h>

@class NSMutableArray, ARServerConnection, NSString;

@interface ARRemoteTechnique : ARTechnique <ARRemoteTechniqueClient, ARServerConnectionDelegate> {

	NSMutableArray* _inflightContexts;
	os_unfair_lock_s _inflightContextsLock;
	ARServerConnection* _serverConnection;

}

@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (nonatomic,readonly) ARServerConnection * serverConnection;              //@synthesize serverConnection=_serverConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithListenerEndpoint:(id)arg1 ;
-(ARServerConnection *)serverConnection;
-(id)processData:(id)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(BOOL)isActive;
-(id)initWithServiceName:(id)arg1 ;
-(id)serviceProxy;
-(void)prepare:(BOOL)arg1 ;
-(void)dealloc;
-(void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2 ;
-(double)requiredTimeInterval;
-(id)resultDataClasses;
-(unsigned long long)requiredSensorDataTypes;
-(long long)captureBehavior;
-(void)techniqueDidOutputResultData:(id)arg1 timestamp:(double)arg2 context:(id)arg3 ;
-(id)initWithServerConnection:(id)arg1 ;
-(void)techniqueDidFailWithError:(id)arg1 ;
-(void)serverConnectionInterrupted:(id)arg1 ;
-(void)serverConnectionInvalidated:(id)arg1 ;
-(long long)numberOfActiveConnections;
@end

