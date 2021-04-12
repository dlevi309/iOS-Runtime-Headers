/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/


@class NSString, NSXPCInterface;

@interface MTXPCConnectionInfo : NSObject {

	NSString* _machServiceName;
	NSXPCInterface* _remoteObjectInterface;
	id _exportedObject;
	NSXPCInterface* _exportedObjectInterface;
	NSString* _lifecycleNotification;
	NSString* _requiredEntitlement;
	unsigned long long _options;

}

@property (nonatomic,copy) NSString * machServiceName;                              //@synthesize machServiceName=_machServiceName - In the implementation block
@property (nonatomic,retain) NSXPCInterface * remoteObjectInterface;                //@synthesize remoteObjectInterface=_remoteObjectInterface - In the implementation block
@property (nonatomic,retain) id exportedObject;                                     //@synthesize exportedObject=_exportedObject - In the implementation block
@property (nonatomic,retain) NSXPCInterface * exportedObjectInterface;              //@synthesize exportedObjectInterface=_exportedObjectInterface - In the implementation block
@property (nonatomic,copy) NSString * lifecycleNotification;                        //@synthesize lifecycleNotification=_lifecycleNotification - In the implementation block
@property (nonatomic,copy) NSString * requiredEntitlement;                          //@synthesize requiredEntitlement=_requiredEntitlement - In the implementation block
@property (assign,nonatomic) unsigned long long options;                            //@synthesize options=_options - In the implementation block
+(id)infoForMachServiceName:(id)arg1 remoteObjectInterface:(id)arg2 options:(unsigned long long)arg3 ;
+(id)infoForMachServiceName:(id)arg1 remoteObjectInterface:(id)arg2 exportedObject:(id)arg3 exportedObjectInterface:(id)arg4 lifecycleNotification:(id)arg5 requiredEntitlement:(id)arg6 options:(unsigned long long)arg7 ;
-(void)setExportedObject:(id)arg1 ;
-(NSString *)requiredEntitlement;
-(void)setRemoteObjectInterface:(NSXPCInterface *)arg1 ;
-(void)setMachServiceName:(NSString *)arg1 ;
-(id)exportedObject;
-(void)setRequiredEntitlement:(NSString *)arg1 ;
-(NSXPCInterface *)remoteObjectInterface;
-(NSString *)lifecycleNotification;
-(unsigned long long)options;
-(void)setExportedObjectInterface:(NSXPCInterface *)arg1 ;
-(NSXPCInterface *)exportedObjectInterface;
-(void)setOptions:(unsigned long long)arg1 ;
-(NSString *)machServiceName;
-(id)description;
-(id)initWithMachServiceName:(id)arg1 remoteObjectInterface:(id)arg2 exportedObject:(id)arg3 exportedObjectInterface:(id)arg4 lifecycleNotification:(id)arg5 requiredEntitlement:(id)arg6 options:(unsigned long long)arg7 ;
-(void)setLifecycleNotification:(NSString *)arg1 ;
@end

