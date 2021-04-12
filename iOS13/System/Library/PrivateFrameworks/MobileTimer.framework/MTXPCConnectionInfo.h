/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)infoForMachServiceName:(id)arg1 remoteObjectInterface:(id)arg2 exportedObject:(id)arg3 exportedObjectInterface:(id)arg4 lifecycleNotification:(id)arg5 requiredEntitlement:(id)arg6 options:(unsigned long long)arg7 ;
+(id)infoForMachServiceName:(id)arg1 remoteObjectInterface:(id)arg2 options:(unsigned long long)arg3 ;
-(id)description;
-(unsigned long long)options;
-(void)setExportedObject:(id)arg1 ;
-(void)setRemoteObjectInterface:(NSXPCInterface *)arg1 ;
-(void)setOptions:(unsigned long long)arg1 ;
-(id)exportedObject;
-(NSXPCInterface *)remoteObjectInterface;
-(void)setMachServiceName:(NSString *)arg1 ;
-(NSString *)machServiceName;
-(NSString *)requiredEntitlement;
-(id)initWithMachServiceName:(id)arg1 remoteObjectInterface:(id)arg2 exportedObject:(id)arg3 exportedObjectInterface:(id)arg4 lifecycleNotification:(id)arg5 requiredEntitlement:(id)arg6 options:(unsigned long long)arg7 ;
-(NSXPCInterface *)exportedObjectInterface;
-(void)setExportedObjectInterface:(NSXPCInterface *)arg1 ;
-(NSString *)lifecycleNotification;
-(void)setLifecycleNotification:(NSString *)arg1 ;
-(void)setRequiredEntitlement:(NSString *)arg1 ;
@end

